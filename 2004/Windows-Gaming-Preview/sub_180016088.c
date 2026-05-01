/*
 * XREFs of sub_180016088 @ 0x180016088
 * Callers:
 *     sub_180014EC0 @ 0x180014EC0 (sub_180014EC0.c)
 *     sub_180031DD0 @ 0x180031DD0 (sub_180031DD0.c)
 *     sub_180031EC0 @ 0x180031EC0 (sub_180031EC0.c)
 *     sub_180032AD0 @ 0x180032AD0 (sub_180032AD0.c)
 * Callees:
 *     memcmp @ 0x180045C77 (memcmp.c)
 */

__int64 __fastcall sub_180016088(__int64 a1, HSTRING a2, HSTRING a3, bool *a4)
{
  PCWSTR StringRawBuffer; // rsi
  PCWSTR v7; // rax
  bool v8; // cl
  UINT32 v10[6]; // [rsp+20h] [rbp-18h] BYREF
  __int64 length; // [rsp+40h] [rbp+8h] BYREF

  length = a1;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, v10);
  v7 = WindowsGetStringRawBuffer(a3, (UINT32 *)&length);
  v8 = v10[0] == (_DWORD)length && memcmp(StringRawBuffer, v7, 2LL * (unsigned int)length) == 0;
  *a4 = v8;
  return 0LL;
}
