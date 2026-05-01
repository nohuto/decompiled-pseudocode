/*
 * XREFs of ?ContinueSwipe@TabletModeViewManager@@UEAAJIUtagPOINT@@@Z @ 0x180402080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModeViewManager::ContinueSwipe(TabletModeViewManager *this, __int64 a2, struct tagPOINT a3)
{
  __int64 v3; // r9

  v3 = *((_QWORD *)this + 7);
  if ( !v3 )
    return 2147943568LL;
  if ( !*((_BYTE *)this + 88) )
    (*(void (__fastcall **)(_QWORD, __int64, struct tagPOINT))(*(_QWORD *)v3 + 32LL))(*((_QWORD *)this + 7), a2, a3);
  return 0LL;
}
