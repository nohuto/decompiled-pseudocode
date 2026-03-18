/*
 * XREFs of ?Release@CVisual@@UEAAKXZ @ 0x1800A2E90
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800A1F7C (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?ClearInteraction@CVisual@@QEAAXXZ @ 0x1800A2F30 (-ClearInteraction@CVisual@@QEAAXXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x1800A2F98 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800DD28C (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::Release(CVisual *this)
{
  unsigned __int32 v2; // edi
  CInteraction *InteractionInternal; // rcx
  int v5; // eax

  if ( *((_DWORD *)this + 2) == 1 )
  {
    InteractionInternal = CVisual::GetInteractionInternal(this);
    v5 = 1;
    if ( InteractionInternal )
    {
      CInteraction::SetVisual(InteractionInternal, 0LL);
      CVisual::NotifyMidManipulationUpdate((__int64)this, 1u, (__int64)this);
      CVisual::ClearInteraction(this);
      v5 = *((_DWORD *)this + 2);
    }
    if ( v5 == 1 )
      (*(void (__fastcall **)(CVisual *))(*(_QWORD *)this + 32LL))(this);
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    --*((_DWORD *)this + 2);
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v2;
}
