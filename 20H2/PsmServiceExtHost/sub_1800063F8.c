/*
 * XREFs of sub_1800063F8 @ 0x1800063F8
 * Callers:
 *     sub_18000636C @ 0x18000636C (sub_18000636C.c)
 * Callees:
 *     sub_180009B2C @ 0x180009B2C (sub_180009B2C.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_1800063F8(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v6; // xmm1

  memset((void *)a3, 0, 0x160uLL);
  sub_180009B2C(sub_180034CA0, a1, a3);
  *(_OWORD *)(a3 + 96) = *(_OWORD *)a2;
  *(_OWORD *)(a3 + 112) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a3 + 128) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a3 + 144) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a3 + 160) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a3 + 176) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a3 + 192) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a3 + 208) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a3 + 224) = *(_OWORD *)(a2 + 128);
  *(_OWORD *)(a3 + 240) = *(_OWORD *)(a2 + 144);
  *(_OWORD *)(a3 + 256) = *(_OWORD *)(a2 + 160);
  *(_OWORD *)(a3 + 272) = *(_OWORD *)(a2 + 176);
  *(_QWORD *)(a3 + 288) = *(_QWORD *)(a2 + 192);
  *(_DWORD *)(a3 + 296) = *(_DWORD *)(a2 + 200);
  *(_DWORD *)(a3 + 344) = 128;
  *(_OWORD *)(a3 + 96) = *(_OWORD *)a2;
  *(_OWORD *)(a3 + 112) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a3 + 128) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a3 + 144) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a3 + 160) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a3 + 176) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a3 + 192) = *(_OWORD *)(a2 + 96);
  v6 = *(_OWORD *)(a2 + 112);
  a2 += 128LL;
  *(_OWORD *)(a3 + 208) = v6;
  *(_OWORD *)(a3 + 224) = *(_OWORD *)a2;
  *(_OWORD *)(a3 + 240) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a3 + 256) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a3 + 272) = *(_OWORD *)(a2 + 48);
  *(_QWORD *)(a3 + 288) = *(_QWORD *)(a2 + 64);
  *(_DWORD *)(a3 + 296) = *(_DWORD *)(a2 + 72);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24)) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)(a3 + 88) = a1;
  *(_OWORD *)(a3 + 304) = 0LL;
  RtlInitializeSRWLock(a3 + 304);
  *(_DWORD *)(a3 + 312) = 0;
  return RtlInitializeConditionVariable(a3 + 320);
}
