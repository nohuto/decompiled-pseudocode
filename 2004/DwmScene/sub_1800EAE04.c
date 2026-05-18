/*
 * XREFs of sub_1800EAE04 @ 0x1800EAE04
 * Callers:
 *     sub_18008A3C8 @ 0x18008A3C8 (sub_18008A3C8.c)
 *     sub_1800945A0 @ 0x1800945A0 (sub_1800945A0.c)
 *     sub_180098464 @ 0x180098464 (sub_180098464.c)
 *     sub_1800A72EC @ 0x1800A72EC (sub_1800A72EC.c)
 *     sub_1800B2DF4 @ 0x1800B2DF4 (sub_1800B2DF4.c)
 *     sub_1800FBB6C @ 0x1800FBB6C (sub_1800FBB6C.c)
 *     sub_1800FDB88 @ 0x1800FDB88 (sub_1800FDB88.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800EAE04(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rcx
  __int64 v6; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Component::`vftable';
  v5 = (_QWORD *)(a1 + 24);
  v5[2] = 0LL;
  v5[3] = 0LL;
  sub_18001CDF8(v5, a2);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  v6 = a3[1];
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
  *(_QWORD *)(a1 + 56) = *a3;
  *(_QWORD *)(a1 + 64) = a3[1];
  *(_BYTE *)(a1 + 72) = 1;
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  return a1;
}
