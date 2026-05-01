/*
 * XREFs of sub_1800271B8 @ 0x1800271B8
 * Callers:
 *     sub_180027048 @ 0x180027048 (sub_180027048.c)
 * Callees:
 *     sub_180027310 @ 0x180027310 (sub_180027310.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_1800271B8(__int64 a1, _OWORD *a2, __int64 a3)
{
  _OWORD *v6; // rcx
  _OWORD *v7; // rax
  __int64 v8; // rdx
  __int128 v9; // xmm1
  char IsDynamicKey; // al
  __int64 result; // rax

  memset((void *)a3, 0, 0x270uLL);
  sub_180027310(a1, a3);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24)) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)(a3 + 88) = a1;
  *(_OWORD *)(a3 + 576) = 0LL;
  RtlInitializeSRWLock(a3 + 576);
  *(_DWORD *)(a3 + 584) = 0;
  v6 = a2;
  *(_QWORD *)(a3 + 600) = a3 + 592;
  *(_QWORD *)(a3 + 592) = a3 + 592;
  v7 = (_OWORD *)(a3 + 96);
  v8 = 3LL;
  do
  {
    *v7 = *v6;
    v7[1] = v6[1];
    v7[2] = v6[2];
    v7[3] = v6[3];
    v7[4] = v6[4];
    v7[5] = v6[5];
    v7[6] = v6[6];
    v7 += 8;
    v9 = v6[7];
    v6 += 8;
    *(v7 - 1) = v9;
    --v8;
  }
  while ( v8 );
  *v7 = *v6;
  v7[1] = v6[1];
  v7[2] = v6[2];
  v7[3] = v6[3];
  v7[4] = v6[4];
  IsDynamicKey = PsmIsDynamicKey(a2);
  *(_DWORD *)(a3 + 608) &= ~0x10000u;
  result = (unsigned __int8)(IsDynamicKey & 1) << 16;
  *(_DWORD *)(a3 + 608) |= result;
  *(_DWORD *)(a3 + 616) = 128;
  *(_WORD *)(a3 + 608) = 0;
  return result;
}
