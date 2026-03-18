/*
 * XREFs of CmpDoReDoSetValueExisting @ 0x140884CA4
 * Callers:
 *     CmpDoReDoRecord @ 0x140884A28 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403F8D70 (ZwSetValueKey.c)
 *     CmpDoReOpenTransKey @ 0x140884D18 (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoSetValueExisting(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  v3 = CmpDoReOpenTransKey(a1, a2 + 32, 2LL, &KeyHandle);
  if ( v3 >= 0 )
  {
    v3 = ZwSetValueKey(
           KeyHandle,
           (PUNICODE_STRING)(a2 + 48),
           0,
           *(_DWORD *)(a2 + 64),
           *(PVOID *)(a2 + 72),
           *(_DWORD *)(a2 + 68));
    ZwClose(KeyHandle);
  }
  return (unsigned int)v3;
}
