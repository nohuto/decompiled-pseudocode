/*
 * XREFs of ExpWnfRegisterPermanentName @ 0x1406E1C10
 * Callers:
 *     NtCreateWnfStateName @ 0x140652140 (NtCreateWnfStateName.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x1403F8D70 (ZwSetValueKey.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1405DF844 (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfComposeValueName @ 0x1405DF9AC (ExpWnfComposeValueName.c)
 *     RtlLengthSecurityDescriptor @ 0x1405F6330 (RtlLengthSecurityDescriptor.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfRegisterPermanentName(unsigned __int64 a1, __int64 a2)
{
  NTSTATUS NameStoreRegistryRoot; // ebx
  ULONG v5; // eax
  __int64 v6; // rbx
  SIZE_T v7; // rdx
  ULONG DataSize; // ebp
  char *PoolWithTag; // rax
  char *Data; // rdi
  _OWORD *v11; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-68h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-60h] BYREF
  __int64 v15; // [rsp+48h] [rbp-50h] BYREF

  KeyHandle = 0LL;
  *(_QWORD *)&ValueName.Length = 2228224LL;
  ValueName.Buffer = (wchar_t *)&v15;
  ExpWnfComposeValueName(a1, &ValueName);
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot((a1 >> 4) & 3, (volatile signed __int64 *)&KeyHandle);
  if ( NameStoreRegistryRoot >= 0 )
  {
    v5 = RtlLengthSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a2 + 16));
    v6 = v5;
    v7 = v5 + 20;
    if ( !*(_QWORD *)(a2 + 8) )
      v7 = v5 + 4;
    DataSize = v7;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v7, 0x20666E57u);
    Data = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(a2 + 16), (unsigned int)v6);
      *(_DWORD *)&Data[v6] = *(_DWORD *)a2;
      v11 = *(_OWORD **)(a2 + 8);
      if ( v11 )
        *(_OWORD *)&Data[v6 + 4] = *v11;
      NameStoreRegistryRoot = ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, Data, DataSize);
      ExFreePoolWithTag(Data, 0x20666E57u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)NameStoreRegistryRoot;
}
