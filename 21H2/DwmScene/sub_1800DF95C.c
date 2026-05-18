/*
 * XREFs of sub_1800DF95C @ 0x1800DF95C
 * Callers:
 *     sub_1800E0AC8 @ 0x1800E0AC8 (sub_1800E0AC8.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1801243E0 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

__int64 __fastcall sub_1800DF95C(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rbx

  *(_QWORD *)a1 = &Spectre::Engine::RenderTargetState::`vftable';
  v4 = 8LL;
  `eh vector constructor iterator'(
    (void *)(a1 + 8),
    0x10uLL,
    8uLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_98);
  `eh vector constructor iterator'(
    (void *)(a1 + 136),
    0x10uLL,
    8uLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_98);
  v5 = (_QWORD *)(a1 + 264);
  `eh vector constructor iterator'(
    (void *)(a1 + 264),
    0x10uLL,
    8uLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_98);
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_BYTE *)(a1 + 440) = 1;
  do
  {
    std::shared_ptr<__ExceptionPtr>::operator=(v5, (_QWORD *)((char *)v5 + a2 - (a1 + 264) + 1184));
    v5 += 2;
    --v4;
  }
  while ( v4 );
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 424), (_QWORD *)(a2 + 1312));
  return a1;
}
