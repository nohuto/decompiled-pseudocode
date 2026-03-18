/*
 * XREFs of sub_1C0002CC0 @ 0x1C0002CC0
 * Callers:
 *     StartRoutine @ 0x1C0002D50 (StartRoutine.c)
 * Callees:
 *     sub_1C0001F40 @ 0x1C0001F40 (sub_1C0001F40.c)
 *     sub_1C0003D0C @ 0x1C0003D0C (sub_1C0003D0C.c)
 *     sub_1C00043B8 @ 0x1C00043B8 (sub_1C00043B8.c)
 */

char __fastcall sub_1C0002CC0(__int32 *a1)
{
  __int32 v2; // eax
  char result; // al
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 4u )
    sub_1C00043B8(off_1C0007000->AttachedDevice, 14LL, &unk_1C0005448);
  if ( byte_1C0007358 )
    sub_1C0003D0C(5LL, 0xFFFFFFFFLL);
  v2 = _InterlockedExchange(&dword_1C0007260, 0x8000);
  *a1 = v2;
  if ( !v2 )
    dword_1C0007048 = KeWaitForSingleObject(KeGetCurrentThread(), Executive, 0, 1u, 0LL);
  result = sub_1C0001F40(&v4);
  *a1 |= _InterlockedExchange(&dword_1C0007260, 0);
  return result;
}
