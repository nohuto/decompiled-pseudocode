/*
 * XREFs of sub_18002E6C8 @ 0x18002E6C8
 * Callers:
 *     sub_1800296C0 @ 0x1800296C0 (sub_1800296C0.c)
 *     sub_18002CDA4 @ 0x18002CDA4 (sub_18002CDA4.c)
 * Callees:
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     ??2@YAPEAX_K@Z @ 0x18004482C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002E6C8(__int64 a1)
{
  _QWORD *v2; // rax

  sub_180011A50((_QWORD *)(a1 + 16));
  *(_QWORD *)(a1 + 56) = 1LL;
  *(_QWORD *)a1 = off_18004D1E8;
  *(_QWORD *)(a1 + 8) = off_18004D1C8;
  *(_QWORD *)(a1 + 16) = off_18004D180;
  if ( qword_18005ADB0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 8LL))(qword_18005ADB0);
  *(_QWORD *)a1 = &off_18004D400;
  *(_QWORD *)(a1 + 8) = off_18004D3E0;
  *(_QWORD *)(a1 + 16) = off_18004D398;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  v2 = operator new(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *(_QWORD *)(a1 + 80) = v2;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 168), 0, 0);
  return a1;
}
