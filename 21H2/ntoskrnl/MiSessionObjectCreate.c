/*
 * XREFs of MiSessionObjectCreate @ 0x140786644
 * Callers:
 *     MiSessionCreate @ 0x1407863CC (MiSessionCreate.c)
 * Callees:
 *     KeInsertSchedulingGroup @ 0x140202418 (KeInsertSchedulingGroup.c)
 *     KeGetSchedulingGroupSize @ 0x140204CEC (KeGetSchedulingGroupSize.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlLengthSid @ 0x14026CA10 (RtlLengthSid.c)
 *     RtlStringCchPrintfW @ 0x14026D570 (RtlStringCchPrintfW.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlpAddKnownAce @ 0x140651280 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140655320 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140655390 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1406F2C90 (RtlCreateSecurityDescriptor.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

int MiSessionObjectCreate()
{
  int result; // eax
  ULONG v1; // ebx
  ULONG v2; // edi
  ACL *Pool; // rax
  ACL *v4; // rbx
  int Acl; // edi
  ACL *v6; // rcx
  unsigned __int64 v7; // rdi
  int v8; // esi
  PRKEVENT v9; // rbx
  struct _KEVENT *v10; // rcx
  int v11; // ebx
  unsigned int SchedulingGroupSize; // eax
  struct _LIST_ENTRY *v13; // rax
  char *Src; // [rsp+28h] [rbp-E0h]
  PRKEVENT Event; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 DestinationString[3]; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v17[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v18; // [rsp+88h] [rbp-80h]
  unsigned __int64 *v19; // [rsp+90h] [rbp-78h]
  int v20; // [rsp+98h] [rbp-70h]
  int v21; // [rsp+9Ch] [rbp-6Ch]
  _OWORD *v22; // [rsp+A0h] [rbp-68h]
  __int64 v23; // [rsp+A8h] [rbp-60h]
  _OWORD SecurityDescriptor[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v25; // [rsp+D0h] [rbp-38h]
  wchar_t pszDest[128]; // [rsp+D8h] [rbp-30h] BYREF

  memset(DestinationString, 0, sizeof(DestinationString));
  v17[1] = 0;
  v21 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v25 = 0LL;
  Event = 0LL;
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result >= 0 )
  {
    v1 = RtlLengthSid(SeAliasAdminsSid);
    v2 = v1 + RtlLengthSid(SeLocalSystemSid) + 32;
    Pool = (ACL *)MiAllocatePool(256, v2, 0x6C636144u);
    v4 = Pool;
    if ( !Pool )
      return -1073741670;
    Acl = RtlCreateAcl(Pool, v2, 2u);
    v6 = v4;
    if ( Acl >= 0 )
    {
      Acl = RtlpAddKnownAce(v4, 2u, 0, 983043, (unsigned __int8 *)SeAliasAdminsSid, 0);
      v6 = v4;
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce(v4, 2u, 0, 983043, (unsigned __int8 *)SeLocalSystemSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v4, 0);
          if ( Acl >= 0 )
          {
            v7 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
            v8 = RtlStringCchPrintfW(pszDest, 0x80uLL, L"\\KernelObjects\\Session%d", *(unsigned int *)(v7 + 8));
            if ( v8 < 0 )
            {
              ExFreePoolWithTag(v4, 0);
            }
            else
            {
              RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], pszDest);
              v19 = &DestinationString[1];
              v17[0] = 48;
              v22 = SecurityDescriptor;
              v18 = 0LL;
              v20 = 512;
              v23 = 0LL;
              v8 = ObCreateObjectEx(0, MmSessionObjectType, (__int64)v17, 0, Src, 40, 0, 0, &Event, 0LL);
              ExFreePoolWithTag(v4, 0);
              if ( v8 >= 0 )
              {
                v9 = Event;
                v10 = Event;
                *(_QWORD *)&Event[1].Header.Lock = v7;
                KeInitializeEvent(v10, NotificationEvent, 0);
                v9[1].Header.WaitListHead.Flink = 0LL;
                if ( !PsCpuFairShareEnabled || !*(_DWORD *)(v7 + 8) )
                  goto LABEL_10;
                SchedulingGroupSize = KeGetSchedulingGroupSize();
                v13 = (struct _LIST_ENTRY *)MiAllocatePool(72, SchedulingGroupSize, 0x70724753u);
                v9[1].Header.WaitListHead.Flink = v13;
                if ( v13 )
                {
                  KeInsertSchedulingGroup((__int64)v13, 5LL, 0LL);
LABEL_10:
                  result = ObInsertObjectEx((char *)v9, 0LL, 1u, 0, 0, 0LL, DestinationString);
                  v11 = result;
                  if ( result >= 0 )
                  {
                    *(_DWORD *)(v7 + 4) |= 0x40u;
                    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
                    *(_QWORD *)(v7 + 80) = DestinationString[0];
                    *(_QWORD *)(v7 + 72) = Event;
                    *(_DWORD *)(v7 + 1016) = 2;
                    *(_DWORD *)(v7 + 1020) = 1;
                    KeInitializeEvent((PRKEVENT)(v7 + 1024), SynchronizationEvent, 1u);
                    return v11;
                  }
                  return result;
                }
                HalPutDmaAdapter((PADAPTER_OBJECT)v9);
                return -1073741670;
              }
            }
            return v8;
          }
        }
        v6 = v4;
      }
    }
    ExFreePoolWithTag(v6, 0);
    return Acl;
  }
  return result;
}
