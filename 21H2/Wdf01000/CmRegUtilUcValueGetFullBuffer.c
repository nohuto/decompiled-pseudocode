/*
 * XREFs of CmRegUtilUcValueGetFullBuffer @ 0x1C00BF554
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C00BED90 (PiRegStateReadStackCreationSettingsFromKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmRegUtilUcValueGetFullBuffer(
        void *KeyHandle,
        _UNICODE_STRING *ValueName,
        unsigned int Information,
        unsigned int a4,
        _KEY_VALUE_FULL_INFORMATION **ValueName_0)
{
  int v5; // edi
  _KEY_VALUE_FULL_INFORMATION **v7; // rsi
  ULONG Length; // edi
  _KEY_VALUE_FULL_INFORMATION *PoolWithTag; // rbx
  NTSTATUS v11; // edi
  _KEY_VALUE_FULL_INFORMATION *v13; // rax
  unsigned int keyValueLength; // [rsp+68h] [rbp+20h] BYREF

  keyValueLength = a4;
  v5 = ValueName->Length;
  v7 = ValueName_0;
  keyValueLength = 0;
  Length = (v5 + 31) & 0xFFFFFFF8;
  *ValueName_0 = 0LL;
  PoolWithTag = (_KEY_VALUE_FULL_INFORMATION *)ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x62527050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v11 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, PoolWithTag, Length, &keyValueLength);
  if ( v11 < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v11 != -2147483643 && v11 != -1073741789 )
      return (unsigned int)v11;
    v13 = (_KEY_VALUE_FULL_INFORMATION *)ExAllocatePoolWithTag(NonPagedPoolNx, keyValueLength, 0x62527050u);
    PoolWithTag = v13;
    if ( v13 )
    {
      v11 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, v13, keyValueLength, &keyValueLength);
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
  if ( PoolWithTag->Type != 3 )
  {
    v11 = -1073741788;
    goto LABEL_10;
  }
  *v7 = PoolWithTag;
  return 0LL;
}
