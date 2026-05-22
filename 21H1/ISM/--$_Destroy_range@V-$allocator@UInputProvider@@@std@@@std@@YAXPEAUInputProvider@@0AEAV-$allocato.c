/*
 * XREFs of ??$_Destroy_range@V?$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@0AEAV?$allocator@UInputProvider@@@0@@Z @ 0x180028AC4
 * Callers:
 *     ??$_Uninitialized_move@PEAUInputProvider@@PEAU1@V?$allocator@UInputProvider@@@std@@@std@@YAPEAUInputProvider@@QEAU1@0PEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x180028764 (--$_Uninitialized_move@PEAUInputProvider@@PEAU1@V-$allocator@UInputProvider@@@std@@@std@@YAPEAUI.c)
 *     ?_Change_array@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@AEAAXQEAUInputProvider@@_K1@Z @ 0x1800287CC (-_Change_array@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@std@@AEAAXQEAUInputP.c)
 *     _std::vector_InputProvider_std::allocator_InputProvider___::_Emplace_reallocate_InputProvider__::_1_::catch$30 @ 0x180050850 (_std--vector_InputProvider_std--allocator_InputProvider___--_Emplace_reallocate_InputProvider__-.c)
 *     ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x180064900 (--1OneCoreUAPInputHost@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall std::_Destroy_range<std::allocator<InputProvider>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 2;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v3 += 3;
      result = v3 - 2;
    }
    while ( v3 - 2 != a2 );
  }
  return result;
}
