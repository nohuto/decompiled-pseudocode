/*
 * XREFs of CmpDoReDoDeleteValue @ 0x1408849CC
 * Callers:
 *     CmpDoReDoRecord @ 0x140884A28 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1403F9C50 (ZwDeleteValueKey.c)
 *     CmpDoReOpenTransKey @ 0x140884D18 (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoDeleteValue(__int64 a1, UNICODE_STRING *a2)
{
  NTSTATUS v3; // ebx
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  v3 = CmpDoReOpenTransKey(a1, &a2[2], 2LL, &KeyHandle);
  if ( v3 >= 0 )
  {
    v3 = ZwDeleteValueKey(KeyHandle, a2 + 3);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v3;
}
