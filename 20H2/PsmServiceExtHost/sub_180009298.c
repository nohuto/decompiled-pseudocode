/*
 * XREFs of sub_180009298 @ 0x180009298
 * Callers:
 *     sub_180009174 @ 0x180009174 (sub_180009174.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180009298(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax

  memset(a4, 0, 0x60uLL);
  RtlInitializeSRWLock(a4 + 6);
  *((_DWORD *)a4 + 14) = 0;
  *a4 = 0LL;
  a4[1] = 0LL;
  a4[2] = -1LL;
  a4[9] = a4 + 8;
  a4[8] = a4 + 8;
  a4[11] = a4 + 10;
  a4[10] = a4 + 10;
  a4[3] = a1;
  a4[4] = a2;
  result = _InterlockedIncrement64((volatile signed __int64 *)(a3 + 96));
  if ( result <= 1 )
    __fastfail(0xEu);
  a4[5] = a3;
  return result;
}
