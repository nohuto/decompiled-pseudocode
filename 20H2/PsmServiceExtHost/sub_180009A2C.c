/*
 * XREFs of sub_180009A2C @ 0x180009A2C
 * Callers:
 *     sub_1800096AC @ 0x1800096AC (sub_1800096AC.c)
 * Callees:
 *     sub_180009BA8 @ 0x180009BA8 (sub_180009BA8.c)
 *     memset @ 0x18004683A (memset.c)
 */

_OWORD *__fastcall sub_180009A2C(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        _OWORD *a6,
        _OWORD *a7,
        _DWORD *a8,
        char *a9)
{
  _OWORD *result; // rax
  __int128 v14; // xmm0

  memset(a9, 0, 0xB0uLL);
  RtlInitializeSRWLock(a9 + 24);
  *((_DWORD *)a9 + 8) = 0;
  *((_QWORD *)a9 + 6) = a9 + 40;
  *((_QWORD *)a9 + 5) = a9 + 40;
  sub_180009BA8(sub_1800806D0, a9 + 56);
  *(_QWORD *)a9 = a1;
  *((_DWORD *)a9 + 34) = a4;
  *((_DWORD *)a9 + 35) = a2;
  *((_DWORD *)a9 + 36) = a3;
  *((_DWORD *)a9 + 37) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 744));
  *((_DWORD *)a9 + 33) = a5;
  if ( a8 )
    *((_DWORD *)a9 + 38) = *a8;
  result = a6;
  if ( a6 )
  {
    v14 = *a6;
    result = a7;
    *((_DWORD *)a9 + 32) |= 2u;
    *(_OWORD *)(a9 + 104) = v14;
    *((_QWORD *)a9 + 15) = a7;
  }
  return result;
}
