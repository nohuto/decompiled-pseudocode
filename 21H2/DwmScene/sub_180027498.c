/*
 * XREFs of sub_180027498 @ 0x180027498
 * Callers:
 *     sub_18002A430 @ 0x18002A430 (sub_18002A430.c)
 *     sub_1800ADA20 @ 0x1800ADA20 (sub_1800ADA20.c)
 * Callees:
 *     memset @ 0x18012396A (memset.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1801243E0 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180027498(__int64 a1)
{
  `eh vector constructor iterator'(
    (void *)a1,
    0x10uLL,
    0xCuLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_98);
  `eh vector constructor iterator'(
    (void *)(a1 + 192),
    0x10uLL,
    0x10uLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_98);
  `eh vector constructor iterator'(
    (void *)(a1 + 448),
    0x10uLL,
    0x10uLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_98);
  *(_QWORD *)(a1 + 704) = 0LL;
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 720) = 0LL;
  *(_QWORD *)(a1 + 728) = 0LL;
  *(_QWORD *)(a1 + 736) = 0LL;
  *(_QWORD *)(a1 + 744) = 0LL;
  *(_DWORD *)(a1 + 752) = 0;
  `eh vector constructor iterator'(
    (void *)(a1 + 760),
    0x10uLL,
    0xFuLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_98);
  *(_QWORD *)(a1 + 1120) = 0LL;
  *(_QWORD *)(a1 + 1128) = 0LL;
  *(_QWORD *)(a1 + 1136) = 0LL;
  *(_QWORD *)(a1 + 1144) = 0LL;
  *(_QWORD *)(a1 + 1152) = 0LL;
  *(_QWORD *)(a1 + 1160) = 0LL;
  *(_QWORD *)(a1 + 1168) = 0LL;
  *(_DWORD *)(a1 + 1176) = 0;
  `eh vector constructor iterator'(
    (void *)(a1 + 1184),
    0x10uLL,
    8uLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_98);
  *(_QWORD *)(a1 + 1312) = 0LL;
  *(_QWORD *)(a1 + 1320) = 0LL;
  if ( a1 + 1000 <= (unsigned __int64)(a1 + 1060) )
    memset((void *)(a1 + 1000), 0, 4LL * (a1 + 1060 >= (unsigned __int64)(a1 + 1000) ? 0xF : 0));
  if ( a1 + 1060 <= (unsigned __int64)(a1 + 1120) )
    memset((void *)(a1 + 1060), 0, 4LL * (a1 + 1120 >= (unsigned __int64)(a1 + 1060) ? 0xF : 0));
  return a1;
}
