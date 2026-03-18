/*
 * XREFs of CmpDoReDoSetKeyUserFlags @ 0x14087EFD8
 * Callers:
 *     CmpDoReDoRecord @ 0x14087EE9C (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwSetInformationKey @ 0x1403F68C0 (ZwSetInformationKey.c)
 *     CmpDoReOpenTransKey @ 0x14087F18C (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoSetKeyUserFlags(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  int KeySetInformation; // [rsp+38h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  v3 = CmpDoReOpenTransKey(a1, a2 + 32, 2LL, &KeyHandle);
  if ( v3 >= 0 )
  {
    KeySetInformation = *(_DWORD *)(a2 + 48);
    v3 = ZwSetInformationKey(KeyHandle, KeyWow64FlagsInformation, &KeySetInformation, 4u);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v3;
}
