/*
 * XREFs of CmRegUtilUcValueGetFullBuffer @ 0x1C0128EA8
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C01287E4 (PiRegStateReadStackCreationSettingsFromKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmRegUtilUcValueGetFullBuffer(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        __int64 a3,
        ULONG a4,
        _QWORD *a5)
{
  int v5; // edi
  _QWORD *v7; // rsi
  ULONG Length; // edi
  _DWORD *PoolWithTag; // rbx
  NTSTATUS v11; // edi
  _DWORD *v13; // rax
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  ResultLength = a4;
  v5 = ValueName->Length;
  v7 = a5;
  ResultLength = 0;
  Length = (v5 + 31) & 0xFFFFFFF8;
  *a5 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x62527050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v11 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, PoolWithTag, Length, &ResultLength);
  if ( v11 < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v11 != -2147483643 && v11 != -1073741789 )
      return (unsigned int)v11;
    v13 = ExAllocatePoolWithTag(NonPagedPoolNx, ResultLength, 0x62527050u);
    PoolWithTag = v13;
    if ( v13 )
    {
      v11 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, v13, ResultLength, &ResultLength);
      if ( v11 < 0 )
      {
LABEL_10:
        ExFreePoolWithTag(PoolWithTag, 0);
        return (unsigned int)v11;
      }
      goto LABEL_8;
    }
    return 3221225626LL;
  }
LABEL_8:
  if ( PoolWithTag[1] != 3 )
  {
    v11 = -1073741788;
    goto LABEL_10;
  }
  *v7 = PoolWithTag;
  return 0LL;
}
