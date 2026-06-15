/*
 * XREFs of sub_180064D2C @ 0x180064D2C
 * Callers:
 *     sub_180064944 @ 0x180064944 (sub_180064944.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18006A1BC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180064D2C(__int64 a1)
{
  _QWORD *v2; // rax

  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_180149030;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  *(_QWORD *)a1 = &off_180149008;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 16), 0, 0);
  `eh vector constructor iterator'((void *)(a1 + 56), 0x30uLL, 0x12uLL, sub_180066F90, sub_1800D0B50);
  *(_QWORD *)(a1 + 920) = 0LL;
  *(_QWORD *)(a1 + 928) = 0LL;
  *(_QWORD *)(a1 + 936) = 0LL;
  *(_QWORD *)(a1 + 944) = 0LL;
  *(_QWORD *)(a1 + 952) = 0LL;
  *(_DWORD *)(a1 + 960) = 10;
  *(_QWORD *)(a1 + 968) = 0LL;
  *(_QWORD *)(a1 + 976) = 0LL;
  v2 = sub_180008EAC(0x30uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *(_QWORD *)(a1 + 968) = v2;
  *(_QWORD *)(a1 + 984) = 1LL;
  return a1;
}
