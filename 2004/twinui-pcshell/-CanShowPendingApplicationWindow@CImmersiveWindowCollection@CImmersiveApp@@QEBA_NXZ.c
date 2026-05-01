/*
 * XREFs of ?CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18017B614
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x180024490 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x180183964 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CImmersiveApp::CImmersiveWindowCollection::CanShowPendingApplicationWindow(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  char v1; // bl

  v1 = 0;
  if ( !*((_DWORD *)this + 53) )
    return (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 240LL))(*((_QWORD *)this + 16)) != 0;
  return v1;
}
