/*
 * XREFs of ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180223B4C
 * Callers:
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800A9B20 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800AC280 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x180222800 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18005AA4C (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18006D354 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x18006D39C (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x1800AABC0 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180153BF8 (McTemplateU0x_EventWriteTransfer.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x180155E6C (McTemplateU0xx_EventWriteTransfer.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x18022206C (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x180231744 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z @ 0x180232668 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z.c)
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x180233D30 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x180233EAC (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CManipulationManager::QueueMidManipulationUpdate(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 *v5; // rsi
  unsigned int v6; // ebp
  __int64 v7; // rbx
  bool v9; // r14
  __int64 v10; // rcx
  const EVENT_DESCRIPTOR *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx
  CInteraction *v14; // r8
  int TotalNumContacts; // eax
  __int64 v16; // r8
  bool *v17; // rdx
  __int64 v18; // rcx
  struct CInteraction *ClosestInteractionAncestor; // rax
  struct CInteraction *InteractionInternal; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  void *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  struct CInteraction *v31; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = a3;
  v9 = 1;
  if ( a2 > 9 || !a3 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x1EDu, 0LL);
LABEL_44:
    if ( v4 )
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v4);
    return v6;
  }
  if ( !a2 )
  {
    InteractionInternal = CVisual::GetInteractionInternal((CVisual *)a3);
    v5 = (__int64 *)InteractionInternal;
    if ( InteractionInternal )
    {
      v21 = *((_QWORD *)InteractionInternal + 24);
      if ( v21 )
      {
        *((_QWORD *)InteractionInternal + 24) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      }
    }
    CManipulationContext::PropagateVisualManipulationNotificationFlag((struct CVisual *)v7, 1, 0);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) == 0 )
      goto LABEL_33;
    McTemplateU0xx_EventWriteTransfer(v22, &MIDMANIPULATION_UPDATE_INTERACTION_ADDITION, v5, v7);
    goto LABEL_32;
  }
  if ( a2 == 1 )
  {
    v5 = (__int64 *)CVisual::GetInteractionInternal((CVisual *)a3);
    v14 = (CInteraction *)v5[29];
    while ( v14 )
    {
      TotalNumContacts = CInteraction::GetTotalNumContacts(v14);
      v14 = *(CInteraction **)(v16 + 216);
      LODWORD(v4) = TotalNumContacts + v4;
    }
    if ( (unsigned int)v4 < (unsigned int)CInteraction::GetTotalNumContacts((CInteraction *)v5) )
    {
      ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor((const struct CVisual *)v7, v17);
      Microsoft::WRL::ComPtr<CInteraction>::operator=(v5 + 24, (__int64)ClosestInteractionAncestor);
    }
    if ( !(_DWORD)v4 && !CManipulationContext::VisualHasAnyChildFlagged((struct CVisual *)v7) )
    {
      *(_BYTE *)(v7 + 94) &= ~1u;
      CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(v7 + 80), 0, 0);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
      McTemplateU0xx_EventWriteTransfer(v18, &MIDMANIPULATION_UPDATE_INTERACTION_REMOVAL, v5, v7);
    goto LABEL_33;
  }
  if ( a2 != 2 )
  {
    v10 = a2 - 3;
    if ( a2 != 3 )
    {
      if ( a2 != 4 || (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) == 0 )
        goto LABEL_33;
      v11 = &MIDMANIPULATION_UPDATE_VISUAL_PROP;
      goto LABEL_10;
    }
    *(_BYTE *)(a3 + 94) &= ~1u;
    v31 = 0LL;
    v12 = CManipulationContext::TotalContactsCapturedUnderVisual(
            (const struct MCCollections *)(a1 + 184),
            (struct CVisual *)a3,
            &v31);
    v5 = (__int64 *)v31;
    CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(v7 + 80), 0, v12);
    if ( v5 )
      (*(void (__fastcall **)(__int64 *))(*v5 + 8))(v5);
    *(_BYTE *)(v7 + 94) |= 1u;
    v9 = v5 != 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
      McTemplateU0x_EventWriteTransfer(v13, &MIDMANIPULATION_UPDATE_VISUAL_REMOVAL, v7);
LABEL_32:
    if ( !v9 )
      return v6;
    goto LABEL_33;
  }
  CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(a3 + 80), 1, 0);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
  {
    a3 = v7;
    v11 = (const EVENT_DESCRIPTOR *)&MIDMANIPULATION_UPDATE_VISUAL_ADDITION;
LABEL_10:
    McTemplateU0x_EventWriteTransfer(v10, v11, a3);
  }
LABEL_33:
  v23 = operator new(0x48uLL);
  v4 = (__int64)v23;
  if ( v23 )
    memset_0(v23, 0, 0x48uLL);
  else
    v4 = 0LL;
  if ( !v4 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2147024882, 0x24Bu, 0LL);
    return v6;
  }
  *(_DWORD *)v4 = a2;
  if ( *(_QWORD *)(v4 + 8) != v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v25 = *(_QWORD *)(v4 + 8);
    *(_QWORD *)(v4 + 8) = v7;
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)(v4 + 16), (__int64)v5);
  *(_DWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 32) = 0LL;
  v28 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v27, v26, v4);
  v6 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x25Fu, 0LL);
    goto LABEL_44;
  }
  return v6;
}
