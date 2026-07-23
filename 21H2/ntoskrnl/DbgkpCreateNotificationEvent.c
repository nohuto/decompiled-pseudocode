/*
 * XREFs of DbgkpCreateNotificationEvent @ 0x1407CA830
 * Callers:
 *     DbgkpInitializePhase1SiloState @ 0x1407CA7F4 (DbgkpInitializePhase1SiloState.c)
 * Callees:
 *     RtlLengthSid @ 0x14026CA10 (RtlLengthSid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14029E950 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwCreateEvent @ 0x1403FAE80 (ZwCreateEvent.c)
 *     RtlpAddKnownAce @ 0x140651280 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140655320 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140655390 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1406F2C90 (RtlCreateSecurityDescriptor.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall DbgkpCreateNotificationEvent(UNICODE_STRING *a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebx
  ULONG v8; // ebx
  ULONG v9; // edi
  ACL *PoolWithTag; // rax
  ACL *v11; // rbx
  int Acl; // edi
  ACL *v13; // rcx
  _QWORD *InitialState; // [rsp+20h] [rbp-E0h]
  HANDLE EventHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-58h]
  unsigned __int8 CapabilitySid[48]; // [rsp+B0h] [rbp-50h] BYREF
  char CapabilityGroupSid[48]; // [rsp+E0h] [rbp-20h] BYREF

  *(_QWORD *)&UnicodeString.Length = 2621478LL;
  v19 = 0LL;
  EventHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  UnicodeString.Buffer = L"lpacInstrumentation";
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  result = RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, CapabilitySid);
  if ( result >= 0 )
  {
    result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( result >= 0 )
    {
      v5 = RtlLengthSid(SeWorldSid);
      v6 = RtlLengthSid(SeLocalSystemSid) + v5;
      v7 = RtlLengthSid(SeLocalSid) + v6;
      v8 = RtlLengthSid(SeAllAppPackagesSid) + v7;
      v9 = v8 + RtlLengthSid(CapabilitySid) + 68;
      PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v9, 0x6C636144u);
      v11 = PoolWithTag;
      if ( !PoolWithTag )
        return -1073741670;
      Acl = RtlCreateAcl(PoolWithTag, v9, 2u);
      v13 = v11;
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce(v11, 2u, 0, 1179649, (unsigned __int8 *)SeLocalSid, 0);
        v13 = v11;
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce(v11, 2u, 0, 1179649, (unsigned __int8 *)SeAllAppPackagesSid, 0);
          v13 = v11;
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce(v11, 2u, 0, 1179649, CapabilitySid, 0);
            v13 = v11;
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce(v11, 2u, 0, 2031619, (unsigned __int8 *)SeLocalSystemSid, 0);
              v13 = v11;
              if ( Acl >= 0 )
              {
                Acl = RtlpAddKnownAce(v11, 2u, 0, 1179649, (unsigned __int8 *)SeWorldSid, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v11, 0);
                  if ( Acl >= 0 )
                  {
                    ObjectAttributes.Length = 48;
                    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
                    ObjectAttributes.RootDirectory = 0LL;
                    ObjectAttributes.Attributes = 528;
                    ObjectAttributes.ObjectName = a1;
                    ObjectAttributes.SecurityQualityOfService = 0LL;
                    Acl = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
                    ExFreePoolWithTag(v11, 0);
                    if ( Acl >= 0 )
                    {
                      LODWORD(InitialState) = 1801937476;
                      Acl = ObpReferenceObjectByHandleWithTag(
                              (ULONG_PTR)EventHandle,
                              2LL,
                              ExEventObjectType,
                              0,
                              InitialState,
                              a2,
                              0LL,
                              0LL);
                      ZwClose(EventHandle);
                    }
                    return Acl;
                  }
                }
                v13 = v11;
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v13, 0);
      return Acl;
    }
  }
  return result;
}
