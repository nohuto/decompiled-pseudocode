/*
 * XREFs of wil::details::ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___::_ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___ @ 0x1802A00E0
 * Callers:
 *     _ViewEventDispatcher::_AddValidView_::_1_::dtor$1 @ 0x1802AA601 (_ViewEventDispatcher--_AddValidView_--_1_--dtor$1.c)
 * Callees:
 *     ?_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x1802AD09C (-_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV-$CRefCountedObject@UPerApplicationData.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___::_ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(_QWORD *)a1;
    if ( !*(_QWORD *)(**(_QWORD **)a1 + 16LL) )
      return ViewEventDispatcher::_RemovePerApplicationData(*(_QWORD *)(a1 + 8));
  }
  return result;
}
