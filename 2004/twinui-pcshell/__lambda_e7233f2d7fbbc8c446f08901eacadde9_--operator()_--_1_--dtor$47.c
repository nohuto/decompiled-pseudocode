/*
 * XREFs of __lambda_e7233f2d7fbbc8c446f08901eacadde9_::operator()_::_1_::dtor$47 @ 0x1802FEA57
 * Callers:
 *     <none>
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1802EBBA8 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 */

__int64 __fastcall _lambda_e7233f2d7fbbc8c446f08901eacadde9_::operator()_::_1_::dtor_47(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 0x40;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~0x40u;
    return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(*(_QWORD *)(a2 + 96));
  }
  return result;
}
