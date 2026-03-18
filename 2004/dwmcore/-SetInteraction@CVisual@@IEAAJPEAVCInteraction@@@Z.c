/*
 * XREFs of ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800DD184
 * Callers:
 *     ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x1800DD0F8 (-ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETINTERACTION@@@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800DD184 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800A1F7C (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?ClearInteraction@CVisual@@QEAAXXZ @ 0x1800A2F30 (-ClearInteraction@CVisual@@QEAAXXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x1800A2F98 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800DD184 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x1800DD250 (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800DD28C (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x1800DD31C (-SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetInteraction(CVisual *this, struct CInteraction *a2)
{
  unsigned int v4; // ebx
  struct CInteraction *InteractionInternal; // rax
  CInteraction *v6; // rbp
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  CVisual *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx

  v4 = 0;
  InteractionInternal = CVisual::GetInteractionInternal(this);
  v6 = InteractionInternal;
  if ( a2 != InteractionInternal )
  {
    if ( InteractionInternal )
    {
      CVisual::NotifyMidManipulationUpdate((__int64)this, 1u, (__int64)this);
      CInteraction::SetVisual(v6, 0LL);
      CVisual::ClearInteraction(this);
    }
    if ( a2 )
    {
      v7 = *((_QWORD *)a2 + 13);
      if ( v7 )
      {
        v11 = *(CVisual **)(v7 + 16);
        if ( v11 )
        {
          v12 = CVisual::SetInteraction(v11, 0LL);
          v4 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xE06u, 0LL);
            return v4;
          }
        }
      }
      v8 = CInteraction::SetVisual(a2, this);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xE0Au, 0LL);
        return v4;
      }
      (**(void (__fastcall ***)(struct CInteraction *))a2)(a2);
      CVisual::SetInteractionInternal(this, a2);
      CVisual::NotifyMidManipulationUpdate((__int64)this, 0, (__int64)this);
    }
    CVisual::OnInputSinkChange(this);
  }
  return v4;
}
