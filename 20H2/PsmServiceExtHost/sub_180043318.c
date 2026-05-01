/*
 * XREFs of sub_180043318 @ 0x180043318
 * Callers:
 *     sub_180012FA8 @ 0x180012FA8 (sub_180012FA8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180043318(__int64 a1)
{
  _QWORD *v2; // rdi
  unsigned int i; // ebx
  HANDLE EventW; // rax
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 16);
  for ( i = 1; i < 6; ++i )
  {
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *v2 = EventW;
    if ( !EventW )
      return 3221225473LL;
    ++v2;
  }
  result = TpAllocTimer(a1 + 64, sub_1800360F0, a1, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
