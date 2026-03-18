/*
 * XREFs of ExpWnfLookupPermanentName @ 0x14068A1F4
 * Callers:
 *     NtDeleteWnfStateName @ 0x140666910 (NtDeleteWnfStateName.c)
 *     ExpNtUpdateWnfStateData @ 0x140667EEC (ExpNtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140668404 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x140668790 (NtQueryWnfStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x14068C1EC (ExpWnfCheckCrossScopeAccess.c)
 *     NtQueryWnfStateNameInformation @ 0x1406D3BA0 (NtQueryWnfStateNameInformation.c)
 *     ExpNtDeleteWnfStateData @ 0x1407B7B4C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x1402D53D0 (HalSystemVectorDispatchEntry.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402E1A10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402E1A30 (PsAttachSiloToCurrentThread.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1403F2610 (ZwQueryValueKey.c)
 *     RtlLengthSecurityDescriptor @ 0x140614750 (RtlLengthSecurityDescriptor.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14066BDE4 (ExpWnfSpecializeSecurityDescriptor.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x14068A3D4 (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfComposeValueName @ 0x14068A53C (ExpWnfComposeValueName.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14068BE70 (RtlValidRelativeSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpWnfLookupPermanentName(unsigned __int64 a1, PSECURITY_DESCRIPTOR **a2)
{
  PSECURITY_DESCRIPTOR *v4; // rdi
  __int64 v5; // rbx
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *v7; // r14
  char v8; // r15
  int NameStoreRegistryRoot; // ebx
  _DWORD *v10; // rsi
  NTSTATUS i; // eax
  char *v12; // rbx
  ULONG v13; // esi
  ULONG v14; // eax
  unsigned int v15; // esi
  char *v16; // rbx
  _DWORD *v17; // rcx
  PSECURITY_DESCRIPTOR *PoolWithTag; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  char v23; // [rsp+50h] [rbp-30h] BYREF

  *(_QWORD *)&ValueName.Length = 2228224LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  v4 = 0LL;
  ValueName.Buffer = (wchar_t *)&v23;
  ExpWnfComposeValueName(a1, &ValueName);
  v5 = (a1 >> 4) & 3;
  if ( (_DWORD)v5 )
  {
    v7 = 0LL;
    v8 = 0;
  }
  else
  {
    v6 = (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry();
    v7 = PsAttachSiloToCurrentThread(v6);
    v8 = 1;
  }
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot((unsigned int)v5, &KeyHandle);
  if ( NameStoreRegistryRoot >= 0 )
  {
    v10 = 0LL;
    for ( i = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
          ;
          i = ZwQueryValueKey(
                KeyHandle,
                &ValueName,
                KeyValuePartialInformation,
                PoolWithTag + 3,
                ResultLength,
                &ResultLength) )
    {
      NameStoreRegistryRoot = i;
      if ( i != -1073741789 )
        break;
      if ( v4 )
        ExFreePoolWithTag(v4, 0x20666E57u);
      PoolWithTag = (PSECURITY_DESCRIPTOR *)ExAllocatePoolWithTag(PagedPool, ResultLength + 24, 0x20666E57u);
      v4 = PoolWithTag;
      if ( !PoolWithTag )
      {
        NameStoreRegistryRoot = -1073741670;
        goto LABEL_20;
      }
      v10 = PoolWithTag + 3;
    }
    if ( i >= 0 )
    {
      if ( v10[1] == 3 )
      {
        v12 = (char *)(v10 + 3);
        *(_OWORD *)v4 = 0LL;
        v4[2] = 0LL;
        v13 = v10[2];
        v4[2] = v12;
        if ( RtlValidRelativeSecurityDescriptor(v12, v13, 0) )
        {
          ExpWnfSpecializeSecurityDescriptor(v4[2]);
          v14 = RtlLengthSecurityDescriptor(v4[2]);
          v15 = v13 - v14;
          v16 = &v12[v14];
          if ( v15 >= 4 )
          {
            v17 = v16 + 4;
            *(_DWORD *)v4 = *(_DWORD *)v16;
            NameStoreRegistryRoot = 0;
            if ( v15 - 4 < 0x10 )
              v17 = 0LL;
            v4[1] = v17;
            *a2 = v4;
            goto LABEL_13;
          }
        }
      }
      NameStoreRegistryRoot = -1073741823;
    }
LABEL_20:
    if ( v4 )
      ExFreePoolWithTag(v4, 0x20666E57u);
  }
LABEL_13:
  if ( v8 )
    PsDetachSiloFromCurrentThread(v7);
  return (unsigned int)NameStoreRegistryRoot;
}
