/*
 * XREFs of wil::details::ScopeExitFn__lambda_9fd9efb7673d546cdb2afc301c333d14___::_ScopeExitFn__lambda_9fd9efb7673d546cdb2afc301c333d14___ @ 0x1802A0944
 * Callers:
 *     __lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_::operator()_::_1_::dtor$2 @ 0x1802A1803 (__lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_--operator()_--_1_--dtor$2.c)
 *     __lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_::operator()_::_1_::dtor$7 @ 0x1802A1833 (__lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_--operator()_--_1_--dtor$7.c)
 *     _ViewEventDispatcher::ViewCreated_::_1_::dtor$8 @ 0x1802A981D (_ViewEventDispatcher--ViewCreated_--_1_--dtor$8.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$11 @ 0x1802AA883 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$11.c)
 *     _ViewEventDispatcher::_EnsureViewHasWrapperAndListener_::_1_::dtor$2 @ 0x1802AB7EC (_ViewEventDispatcher--_EnsureViewHasWrapperAndListener_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::_HandleWindowCreatedForExistingView_::_1_::dtor$8 @ 0x1802AC850 (_ViewEventDispatcher--_HandleWindowCreatedForExistingView_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_9fd9efb7673d546cdb2afc301c333d14___::_ScopeExitFn__lambda_9fd9efb7673d546cdb2afc301c333d14___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return MsgRelease(**(_QWORD **)a1);
  }
  return result;
}
