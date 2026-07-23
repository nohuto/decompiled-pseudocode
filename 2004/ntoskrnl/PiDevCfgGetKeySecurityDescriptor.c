/*
 * XREFs of PiDevCfgGetKeySecurityDescriptor @ 0x14074B0C8
 * Callers:
 *     PiDevCfgCopyDeviceKeys @ 0x14074A73C (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x14074A84C (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1402720C0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetAce @ 0x14027DB50 (RtlGetAce.c)
 *     RtlLengthSid @ 0x14027DBB0 (RtlLengthSid.c)
 *     RtlEqualSid @ 0x140298E50 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwQuerySecurityObject @ 0x1403F6120 (ZwQuerySecurityObject.c)
 *     memset @ 0x14040A280 (memset.c)
 *     RtlCreateSecurityDescriptor @ 0x14065E650 (RtlCreateSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x140669A30 (RtlLengthSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x14066A940 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAce @ 0x14066A9B0 (RtlAddAce.c)
 *     RtlCreateAcl @ 0x14066AAE0 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x14067E5A0 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x1406DC910 (RtlValidSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x14074CB80 (RtlGetGroupSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140756200 (RtlAbsoluteToSelfRelativeSD.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgGetKeySecurityDescriptor(HANDLE Handle, _QWORD *a2)
{
  ACL *v4; // r12
  void *v5; // rsi
  NTSTATUS v6; // eax
  int GroupSecurityDescriptor; // ebx
  ULONG v9; // r14d
  _BYTE *PoolWithTag; // rdi
  ULONG v11; // r15d
  PACL v12; // r14
  ULONG v13; // ebx
  ACL *v14; // rax
  ULONG v15; // eax
  ULONG v16; // ebx
  PVOID v17; // rax
  BOOLEAN DaclPresent; // [rsp+30h] [rbp-69h] BYREF
  BOOLEAN GroupDefaulted[3]; // [rsp+31h] [rbp-68h] BYREF
  ULONG LengthNeeded; // [rsp+34h] [rbp-65h] BYREF
  PSID Group; // [rsp+38h] [rbp-61h] BYREF
  PACL Dacl; // [rsp+40h] [rbp-59h] BYREF
  PVOID Ace; // [rsp+48h] [rbp-51h] BYREF
  PVOID AceList; // [rsp+50h] [rbp-49h] BYREF
  _OWORD AbsoluteSecurityDescriptor[2]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v26; // [rsp+78h] [rbp-21h]
  _BYTE SecurityDescriptor[56]; // [rsp+80h] [rbp-19h] BYREF

  *a2 = 0LL;
  v26 = 0LL;
  LengthNeeded = 0;
  Group = 0LL;
  DaclPresent = 0;
  Dacl = 0LL;
  Ace = 0LL;
  v4 = 0LL;
  AceList = 0LL;
  memset(AbsoluteSecurityDescriptor, 0, sizeof(AbsoluteSecurityDescriptor));
  v5 = 0LL;
  v6 = ZwQuerySecurityObject(Handle, 2u, SecurityDescriptor, 0x34u, &LengthNeeded);
  GroupSecurityDescriptor = v6;
  if ( v6 == -1073741789 )
    return (unsigned int)-1073741720;
  if ( v6 >= 0 )
  {
    GroupSecurityDescriptor = RtlGetGroupSecurityDescriptor(SecurityDescriptor, &Group, GroupDefaulted);
    if ( GroupSecurityDescriptor >= 0 )
    {
      if ( !Group )
        return (unsigned int)-1073741722;
      if ( !RtlEqualSid(Group, PiDevCfgNullSid) )
        return (unsigned int)-1073741720;
      v9 = 240;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xF0uLL, 0x63647050u);
      if ( PoolWithTag )
      {
        while ( 1 )
        {
          GroupSecurityDescriptor = ZwQuerySecurityObject(Handle, 4u, PoolWithTag, v9, &LengthNeeded);
          if ( GroupSecurityDescriptor != -1073741789 )
            break;
          if ( LengthNeeded <= v9 )
          {
            GroupSecurityDescriptor = -1073741595;
            break;
          }
          v9 = LengthNeeded;
          ExFreePoolWithTag(PoolWithTag, 0);
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x63647050u);
          if ( !PoolWithTag )
            goto LABEL_13;
        }
        v11 = 0;
        if ( GroupSecurityDescriptor < 0 )
          goto LABEL_14;
        GroupSecurityDescriptor = RtlGetDaclSecurityDescriptor(PoolWithTag, &DaclPresent, &Dacl, GroupDefaulted);
        if ( GroupSecurityDescriptor < 0 )
          goto LABEL_14;
        if ( !DaclPresent || (v12 = Dacl) == 0LL )
        {
          GroupSecurityDescriptor = -1073741275;
          goto LABEL_14;
        }
        if ( Dacl->AceCount )
        {
          do
          {
            GroupSecurityDescriptor = RtlGetAce(v12, v11, &Ace);
            if ( GroupSecurityDescriptor < 0 )
              goto LABEL_14;
            if ( !*(_BYTE *)Ace
              && (*((_DWORD *)Ace + 1) & 0xF003F) == 0xF003F
              && RtlEqualSid((char *)Ace + 8, SeLocalSystemSid) )
            {
              *a2 = PoolWithTag;
              return (unsigned int)GroupSecurityDescriptor;
            }
          }
          while ( ++v11 < v12->AceCount );
        }
        v13 = RtlLengthSid(SeLocalSystemSid) + v12->AclSize + 8;
        v14 = (ACL *)ExAllocatePoolWithTag(PagedPool, v13, 0x63647050u);
        v4 = v14;
        if ( v14 )
        {
          GroupSecurityDescriptor = RtlCreateAcl(v14, v13, 2u);
          if ( GroupSecurityDescriptor < 0 )
            goto LABEL_14;
          GroupSecurityDescriptor = RtlGetAce(v12, 0, &AceList);
          if ( GroupSecurityDescriptor < 0 )
            goto LABEL_14;
          GroupSecurityDescriptor = RtlAddAce(v4, 2u, 0, AceList, v12->AclSize - 8);
          if ( GroupSecurityDescriptor < 0 )
            goto LABEL_14;
          GroupSecurityDescriptor = RtlpAddKnownAce(v4, 2u, 2, 983103, (unsigned __int8 *)SeLocalSystemSid, 0);
          if ( GroupSecurityDescriptor < 0 )
            goto LABEL_14;
          GroupSecurityDescriptor = RtlCreateSecurityDescriptor(AbsoluteSecurityDescriptor, 1u);
          if ( GroupSecurityDescriptor < 0 )
            goto LABEL_14;
          GroupSecurityDescriptor = RtlSetDaclSecurityDescriptor(AbsoluteSecurityDescriptor, 1u, v4, 0);
          if ( GroupSecurityDescriptor < 0 )
            goto LABEL_14;
          if ( RtlValidSecurityDescriptor(AbsoluteSecurityDescriptor) )
          {
            v15 = RtlLengthSecurityDescriptor(AbsoluteSecurityDescriptor);
            LODWORD(Group) = v15;
            if ( v15 >= 0x28 )
            {
              v16 = v15;
              v17 = ExAllocatePoolWithTag(PagedPool, v15, 0x63647050u);
              v5 = v17;
              if ( v17 )
              {
                memset(v17, 0, v16);
                GroupSecurityDescriptor = RtlAbsoluteToSelfRelativeSD(AbsoluteSecurityDescriptor, v5, (PULONG)&Group);
                if ( GroupSecurityDescriptor >= 0 )
                {
                  *a2 = v5;
                  v5 = 0LL;
                }
                goto LABEL_14;
              }
              goto LABEL_13;
            }
          }
          GroupSecurityDescriptor = -1073741595;
LABEL_14:
          if ( PoolWithTag && PoolWithTag != SecurityDescriptor )
            ExFreePoolWithTag(PoolWithTag, 0);
          if ( v5 )
            ExFreePoolWithTag(v5, 0);
          if ( v4 )
            ExFreePoolWithTag(v4, 0);
          return (unsigned int)GroupSecurityDescriptor;
        }
      }
LABEL_13:
      GroupSecurityDescriptor = -1073741670;
      goto LABEL_14;
    }
  }
  return (unsigned int)GroupSecurityDescriptor;
}
