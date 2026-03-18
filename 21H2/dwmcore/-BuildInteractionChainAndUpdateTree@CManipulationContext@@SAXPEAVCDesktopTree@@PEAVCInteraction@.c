/*
 * XREFs of ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x180181FE0
 * Callers:
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x18017D2A0 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180049584 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18006D8AC (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800EEDA4 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z @ 0x180182C44 (-GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z.c)
 *     ?IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ @ 0x1801830BC (-IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x18018382C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801F3160 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 */

__int64 *__fastcall CManipulationContext::BuildInteractionChainAndUpdateTree(
        struct CDesktopTree *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        _BYTE *a7)
{
  __int64 v7; // rax
  char v8; // r15
  CVisual *v9; // rdi
  __int64 v10; // r13
  CInteraction *v11; // rbp
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v13; // rbx
  char v14; // r8
  bool v15; // zf
  unsigned __int8 v16; // r8
  unsigned __int8 v17; // r10
  unsigned __int8 v18; // r8
  CVisual *i; // rsi
  struct CInteraction *v20; // rax
  struct CInteraction *v21; // r14
  __int64 v22; // rcx
  char v23; // al
  CInteraction *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rbx
  char v27; // di
  char v28; // r14
  struct CInteraction *v29; // rax
  struct CInteraction *v30; // rsi
  unsigned __int8 v31; // al
  char v32; // al
  bool v33; // dl
  char v34; // cl
  unsigned int v35; // r14d
  __int64 v36; // rax
  struct CVisual *VisualEffectiveParentImpl; // rdi
  __int64 v38; // rax
  bool *v39; // rdx
  struct CDesktopTree *v40; // r12
  char v41; // r15
  struct CInteraction *v42; // rax
  bool *v43; // rdx
  CInteraction *v44; // rsi
  CInteraction *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rax
  struct CInteraction *v51; // [rsp+78h] [rbp+10h]

  v7 = *(_QWORD *)(a2 + 112);
  v8 = 0;
  v9 = 0LL;
  v10 = a4;
  if ( v7 )
    v9 = *(CVisual **)(v7 + 16);
  v11 = 0LL;
  v51 = 0LL;
  if ( !v9 )
  {
LABEL_28:
    v24 = v11;
    if ( v11 )
      goto LABEL_29;
    goto LABEL_81;
  }
  while ( 1 )
  {
    InteractionInternal = CVisual::GetInteractionInternal(v9);
    v13 = InteractionInternal;
    if ( InteractionInternal )
      break;
LABEL_27:
    v9 = (CVisual *)*((_QWORD *)v9 + 11);
    if ( !v9 )
      goto LABEL_28;
  }
  v14 = *((_BYTE *)InteractionInternal + 192);
  *a7 |= (v14 & 3) != 0;
  v15 = *((_DWORD *)InteractionInternal + 49) == 2;
  *((_BYTE *)InteractionInternal + 192) = v14 & 0xFD;
  v8 |= v15;
  if ( !v11 )
  {
    if ( !v8 )
    {
      v18 = (unsigned int)CInteraction::GetTotalNumContacts(InteractionInternal) ? v16 >> 5 : v16 >> 4;
      if ( (v18 & v17) != 0 )
        goto LABEL_26;
    }
    if ( CInteraction::IsStrictlyHoverPointerSource(v13) )
      goto LABEL_26;
    v11 = v13;
    v51 = v13;
  }
  if ( (_DWORD)v10 == 4
    && (*(unsigned int (__fastcall **)(_QWORD *, __int64, _QWORD))(*((_QWORD *)v11 + 8) + 80LL))(
         (_QWORD *)v11 + 8,
         4LL,
         0LL)
    && (*(unsigned int (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*((_QWORD *)v11 + 8) + 88LL))(
         (_QWORD *)v11 + 8,
         4LL,
         0x20000000LL,
         0LL) )
  {
    for ( i = (CVisual *)*((_QWORD *)v9 + 11); i; i = (CVisual *)*((_QWORD *)i + 11) )
    {
      v20 = CVisual::GetInteractionInternal(i);
      v21 = v20;
      if ( v20
        && (*(unsigned int (__fastcall **)(__int64, __int64))(*((_QWORD *)v20 + 8) + 80LL))((__int64)v20 + 64, 4LL) )
      {
        v22 = *((_QWORD *)v21 + 13);
        if ( v22 )
        {
          v23 = CManipulationManager::s_needsStopAndEndInertia;
          if ( *(_QWORD *)(v22 + 64) )
            v23 = 1;
          CManipulationManager::s_needsStopAndEndInertia = v23;
        }
        break;
      }
    }
  }
LABEL_26:
  if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)v13 + 8) + 80LL))(
          (__int64)v13 + 64,
          (unsigned int)v10,
          0LL) )
    goto LABEL_27;
  if ( v8 )
    goto LABEL_28;
  v15 = (unsigned int)CInteraction::GetTotalNumContacts(v13) == 0;
  v31 = *((_BYTE *)v13 + 192);
  v32 = v15 ? v31 >> 4 : v31 >> 5;
  if ( (v32 & 1) == 0 )
    goto LABEL_28;
  v11 = v13;
  v51 = v13;
LABEL_29:
  v25 = *((_QWORD *)v11 + 14);
  v26 = 0LL;
  if ( v25 )
    v26 = *(_QWORD *)(v25 + 16);
  if ( v26 )
  {
    v27 = 0;
    v28 = 0;
    while ( 1 )
    {
      *(_BYTE *)(v26 + 101) |= 0x80u;
      v29 = CVisual::GetInteractionInternal((CVisual *)v26);
      v30 = v29;
      if ( v29 )
        break;
LABEL_52:
      v26 = *(_QWORD *)(v26 + 88);
      if ( !v26 )
        goto LABEL_53;
    }
    if ( *((_DWORD *)v29 + 49) == 2 )
    {
      v27 = 1;
      v28 = 0;
    }
    else if ( !v27 || v28 )
    {
      v33 = 0;
LABEL_47:
      CInteraction::UpdateDefaultInteractionForCurrentMC(v29, v33);
      if ( v27
        && (*((_BYTE *)v30 + 192) & 0x10) != 0
        && (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)v30 + 8) + 80LL))(
             (__int64)v30 + 64,
             (unsigned int)v10,
             0LL) )
      {
        v28 = 1;
      }
      v34 = *((_BYTE *)v30 + 192);
      *a7 |= (v34 & 3) != 0;
      *((_BYTE *)v30 + 192) = v34 & 0xFD;
      goto LABEL_52;
    }
    v33 = 1;
    goto LABEL_47;
  }
LABEL_53:
  v35 = v10 - 1;
  v24 = v11;
  v36 = (unsigned int)(v10 - 1);
  if ( (int)v10 - 1 < 0 || v35 >= 6 )
    v36 = 0LL;
  ++*((_DWORD *)v11 + v36 + 62);
  VisualEffectiveParentImpl = 0LL;
  v38 = *((_QWORD *)v11 + 14);
  if ( v38 )
    VisualEffectiveParentImpl = *(struct CVisual **)(v38 + 16);
  if ( VisualEffectiveParentImpl )
  {
    v40 = a1;
    if ( (unsigned int)CInteraction::GetTotalNumContacts(v11) == 1 )
      CManipulationContext::OnVisualPropertyChange(VisualEffectiveParentImpl, a1);
    VisualEffectiveParentImpl = CManipulationContext::GetVisualEffectiveParentImpl(VisualEffectiveParentImpl, v39);
  }
  else
  {
    v40 = a1;
  }
  v41 = 0;
  if ( VisualEffectiveParentImpl )
  {
    do
    {
      v42 = CVisual::GetInteractionInternal(VisualEffectiveParentImpl);
      v44 = v42;
      if ( v42 )
      {
        if ( !v41 )
        {
          v45 = (CInteraction *)*((_QWORD *)v42 + 30);
          if ( v45 )
          {
            if ( v45 != v24 )
            {
              v46 = *((_QWORD *)v24 + 29);
              if ( v46 )
                *(_QWORD *)(v46 + 224) = *((_QWORD *)v24 + 28);
              v47 = *((_QWORD *)v24 + 28);
              if ( v47 )
                *(_QWORD *)(v47 + 232) = *((_QWORD *)v24 + 29);
              *((_QWORD *)v24 + 29) = 0LL;
              *((_QWORD *)v24 + 28) = v45;
              *((_QWORD *)v45 + 29) = v24;
            }
            v41 = 1;
          }
        }
        *((_QWORD *)v42 + 30) = v24;
        v48 = v10 - 1;
        *((_QWORD *)v24 + 27) = v44;
        if ( v35 >= 6 )
          v48 = 0LL;
        ++*((_DWORD *)v44 + v48 + 62);
        if ( (unsigned int)CInteraction::GetTotalNumContacts(v44) == 1 )
          CManipulationContext::OnVisualPropertyChange(VisualEffectiveParentImpl, v40);
        v24 = v44;
      }
      VisualEffectiveParentImpl = CManipulationContext::GetVisualEffectiveParentImpl(VisualEffectiveParentImpl, v43);
    }
    while ( VisualEffectiveParentImpl );
    v11 = v51;
  }
LABEL_81:
  Microsoft::WRL::ComPtr<CInteraction>::operator=(a6, (__int64)v24);
  return Microsoft::WRL::ComPtr<CInteraction>::operator=(a6 + 1, (__int64)v11);
}
