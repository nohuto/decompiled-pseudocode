/*
 * XREFs of ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x1800A8D3C
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18004A1D0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800103A0 (-StopAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x180038FF0 (-StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimationEngine::Cleanup(CAnimationEngine *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
    CAnimationEngine::CTransitionVisualSet::StopStoryboard(*(CAnimationEngine::CTransitionVisualSet **)(*((_QWORD *)this + 5) + 8 * i));
  CAnimationEngine::StopAnimations(this);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_BYTE *)this + 120) = 0;
}
