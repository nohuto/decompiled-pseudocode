/*
 * XREFs of sub_1800B4510 @ 0x1800B4510
 * Callers:
 *     sub_180076608 @ 0x180076608 (sub_180076608.c)
 * Callees:
 *     sub_1800B4DE0 @ 0x1800B4DE0 (sub_1800B4DE0.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     _Mtx_init_in_situ @ 0x180125276 (_Mtx_init_in_situ.c)
 *     _Cnd_init_in_situ @ 0x180125374 (_Cnd_init_in_situ.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800B4510(__int64 a1, __int64 a2, int a3, int a4)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 36) = a4;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v5 = (_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  v6 = operator new(0x48uLL);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *v5 = v6;
  *(_OWORD *)(a1 + 104) = 0LL;
  *(_BYTE *)(a1 + 120) = 0;
  Mtx_init_in_situ((_Mtx_t)(a1 + 128), 2);
  Cnd_init_in_situ((_Cnd_t)(a1 + 208));
  Cnd_init_in_situ((_Cnd_t)(a1 + 280));
  Cnd_init_in_situ((_Cnd_t)(a1 + 352));
  *(_WORD *)(a1 + 424) = 0;
  *(_BYTE *)(a1 + 426) = 0;
  *(_DWORD *)(a1 + 428) = -1;
  *(_WORD *)(a1 + 432) = 256;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_DWORD *)(a1 + 448) = 0;
  if ( *(_DWORD *)(a1 + 36) == 1 )
    sub_1800B4DE0(a1);
  return a1;
}
