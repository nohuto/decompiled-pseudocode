/*
 * XREFs of sub_18003FC90 @ 0x18003FC90
 * Callers:
 *     sub_18003F99C @ 0x18003F99C (sub_18003F99C.c)
 * Callees:
 *     sub_180009BA8 @ 0x180009BA8 (sub_180009BA8.c)
 *     sub_18003FEE4 @ 0x18003FEE4 (sub_18003FEE4.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18003FC90(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  char v4; // al
  __int64 result; // rax

  memset((void *)(a1 + 16), 0, 0x2E8uLL);
  xmmword_1800B41C0 = (__int128)_mm_load_si128((const __m128i *)&xmmword_1800978D0);
  xmmword_1800B41D0 = xmmword_1800B41C0;
  unk_1800B41E0 = xmmword_1800B41C0;
  xmmword_1800B41F0 = xmmword_1800B41C0;
  *(_OWORD *)a1 = 0LL;
  RtlInitializeSRWLock(a1);
  *(_DWORD *)(a1 + 8) = 0;
  v2 = (_QWORD *)(a1 + 16);
  v3 = 7LL;
  do
  {
    v2[1] = v2;
    *v2 = v2;
    v2 += 2;
    --v3;
  }
  while ( v3 );
  sub_180009BA8((__int64)sub_18000AF20, (_QWORD *)(a1 + 216));
  memset((void *)(a1 + 128), 0, 0x58uLL);
  sub_180009BA8((__int64)sub_18003C450, (_QWORD *)(a1 + 168));
  *(_QWORD *)(a1 + 280) = a1 + 272;
  *(_QWORD *)(a1 + 272) = a1 + 272;
  memset((void *)(a1 + 344), 0, 0x58uLL);
  *(_QWORD *)(a1 + 336) = a1;
  *(_DWORD *)(a1 + 412) = 300000;
  *(_DWORD *)(a1 + 416) = 30000;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 360) = a1;
  *(_OWORD *)(a1 + 304) = 0LL;
  *(_OWORD *)(a1 + 320) = 0LL;
  memset((void *)(a1 + 440), 0, 0x68uLL);
  *(_QWORD *)(a1 + 432) = a1;
  sub_180009BA8((__int64)sub_18002ABE0, (_QWORD *)(a1 + 464));
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_OWORD *)(a1 + 448) = 0LL;
  RtlInitializeSRWLock(a1 + 448);
  *(_DWORD *)(a1 + 456) = 0;
  *(_DWORD *)(a1 + 528) = 10000;
  *(_DWORD *)(a1 + 532) = 10000;
  memset((void *)(a1 + 560), 0, 0x58uLL);
  sub_180009BA8((__int64)sub_18003C690, (_QWORD *)(a1 + 600));
  *(_OWORD *)(a1 + 544) = 0LL;
  RtlInitializeSRWLock(a1 + 544);
  *(_DWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 712) = a1 + 704;
  *(_QWORD *)(a1 + 704) = a1 + 704;
  *(_OWORD *)(a1 + 648) = xmmword_1800978A0;
  *(_OWORD *)(a1 + 664) = xmmword_1800978B0;
  *(_OWORD *)(a1 + 680) = xmmword_1800978C0;
  v4 = sub_18003FEE4();
  *(_DWORD *)(a1 + 748) &= 0xFFFFFFFC;
  result = v4 & 3;
  *(_DWORD *)(a1 + 748) |= result;
  return result;
}
