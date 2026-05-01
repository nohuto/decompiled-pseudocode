/*
 * XREFs of sub_180043230 @ 0x180043230
 * Callers:
 *     sub_1800431A0 @ 0x1800431A0 (sub_1800431A0.c)
 * Callees:
 *     sub_180043288 @ 0x180043288 (sub_180043288.c)
 */

__int64 __fastcall sub_180043230(char *lpParameter)
{
  HANDLE Thread; // rax

  sub_180043288(*(_QWORD *)lpParameter, lpParameter + 8);
  Thread = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)StartAddress, lpParameter, 0, 0LL);
  *((_QWORD *)lpParameter + 7) = Thread;
  return Thread == 0LL ? 0xC0000001 : 0;
}
