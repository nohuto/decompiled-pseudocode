/*
 * XREFs of sub_18011ABCC @ 0x18011ABCC
 * Callers:
 *     sub_18001FA88 @ 0x18001FA88 (sub_18001FA88.c)
 *     sub_18002B370 @ 0x18002B370 (sub_18002B370.c)
 *     sub_18007B4CC @ 0x18007B4CC (sub_18007B4CC.c)
 *     sub_1800B7560 @ 0x1800B7560 (sub_1800B7560.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     sub_1800FC200 @ 0x1800FC200 (sub_1800FC200.c)
 *     sub_180115420 @ 0x180115420 (sub_180115420.c)
 *     sub_180120B40 @ 0x180120B40 (sub_180120B40.c)
 *     sub_180120C10 @ 0x180120C10 (sub_180120C10.c)
 *     sub_180120C90 @ 0x180120C90 (sub_180120C90.c)
 *     sub_180121ED8 @ 0x180121ED8 (sub_180121ED8.c)
 *     sub_1801227F4 @ 0x1801227F4 (sub_1801227F4.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_18002E114 @ 0x18002E114 (sub_18002E114.c)
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011ABCC(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx

  v4 = (__int64)a2;
  sub_18002E114(a1, a2);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  sub_180020B7C((_QWORD *)(a1 + 24), v4);
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)(v4 + 24) >= 0x10uLL )
      v4 = *(_QWORD *)v4;
    v6 = 4LL;
  }
  else
  {
    if ( *(_QWORD *)(v4 + 24) >= 0x10uLL )
      v4 = *(_QWORD *)v4;
    v6 = 3LL;
  }
  sub_18011BCAC(&unk_180214D00, v6, "Throwing SpectreException with message '%s'", (const char *)v4);
  return a1;
}
