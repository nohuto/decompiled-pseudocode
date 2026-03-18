/*
 * XREFs of ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x1802359C4
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180227194 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18006FDA0 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18007D750 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C86BC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180225EB8 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z @ 0x180226200 (-LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z.c)
 *     ?Add@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180234750 (-Add@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInteractio.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x180235E10 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1802372A4 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x18023736C (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 */

__int64 __fastcall CManipulationContext::OnHoverContact(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rax
  unsigned int v8; // esi
  struct CInteraction *v9; // rbx
  unsigned int (__fastcall *v10)(__int64, _QWORD, _QWORD); // rax
  unsigned int v12; // eax
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, unsigned __int64, struct CVisualTree **); // r14
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // r14
  CVisual *v19; // r14
  struct CInteraction *InteractionInternal; // rax
  __int64 (__fastcall ***v21)(_QWORD); // rdi
  unsigned int Key; // eax
  __int64 v23; // r10
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rax
  struct CVisual *v27; // rcx
  __int64 v28; // rcx
  unsigned int v30; // [rsp+20h] [rbp-30h]
  struct CInteraction *v31; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-18h]
  __int64 (__fastcall ***v33[2])(_QWORD); // [rsp+40h] [rbp-10h] BYREF
  struct CVisualTree *v34; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v35; // [rsp+A0h] [rbp+50h] BYREF

  v35 = a3;
  v4 = *(_QWORD *)a2;
  v8 = 0;
  v9 = 0LL;
  v34 = 0LL;
  v10 = *(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(v4 + 80);
  v31 = 0LL;
  if ( v10(a2, a4, 0LL) )
  {
    Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)&v31, a2);
    v9 = v31;
  }
  else
  {
    v12 = *(_DWORD *)(a2 + 1712);
    v13 = *(_QWORD *)(a1 + 40);
    v33[0] = 0LL;
    v32 = v12 | 0xFFFFFFFE00000000uLL;
    v14 = *(__int64 (__fastcall **)(__int64, unsigned __int64, struct CVisualTree **))(*(_QWORD *)v13 + 32LL);
    if ( v34 )
      CRenderTargetBitmap::Release(v34);
    v15 = v14(v13, v32, &v34);
    v8 = v15;
    if ( v15 < 0 )
    {
      v30 = 145;
      goto LABEL_33;
    }
    CManipulationManager::LockTree(v34, 1);
    v17 = *(_QWORD *)(a2 + 104);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 16);
      if ( v18 )
      {
        v19 = *(CVisual **)(v18 + 80);
        if ( v19 )
        {
          while ( 1 )
          {
            InteractionInternal = CVisual::GetInteractionInternal(v19);
            Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)v33, (__int64)InteractionInternal);
            v21 = v33[0];
            if ( v33[0] )
            {
              if ( (*((unsigned int (__fastcall **)(__int64 (__fastcall ***)(_QWORD), _QWORD, _QWORD))*v33[0] + 10))(
                     v33[0],
                     a4,
                     0LL) )
              {
                break;
              }
            }
            v19 = (CVisual *)*((_QWORD *)v19 + 10);
            if ( !v19 )
              goto LABEL_15;
          }
          if ( !v21 )
            goto LABEL_17;
          v33[0] = v21;
          Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v33);
          v9 = (struct CInteraction *)v21;
          v31 = (struct CInteraction *)v21;
LABEL_15:
          if ( v21 )
            (*v21)[1](v21);
        }
      }
    }
  }
LABEL_17:
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          a1 + 56,
          (int *)&v35);
  if ( Key == -1 )
  {
    if ( !(unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
                          v23,
                          &v35,
                          &v31) )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, -2147024882, 0xB9u, 0LL);
      goto LABEL_34;
    }
  }
  else
  {
    if ( *(struct CInteraction **)(*(_QWORD *)(a1 + 64) + 8LL * (int)Key) == v9 )
      goto LABEL_34;
    CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
      v23,
      Key,
      &v35,
      &v31);
  }
  InputTraceLogging::GestureTargeting::SetInteractionChain(a3, v9);
  if ( v9 )
  {
    v24 = *((_QWORD *)v9 + 13);
    if ( v24 )
    {
      if ( *(_QWORD *)(v24 + 16) )
      {
        if ( v34 )
        {
LABEL_26:
          if ( v24 )
          {
            v27 = *(struct CVisual **)(v24 + 16);
            if ( v27 )
              CManipulationContext::OnVisualPropertyChange(v27, v34);
          }
          goto LABEL_34;
        }
        v25 = *(__int64 **)(a1 + 40);
        LODWORD(v33[0]) = *((_DWORD *)v9 + 428);
        HIDWORD(v33[0]) = -2;
        v26 = *v25;
        v34 = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ***)(_QWORD), struct CVisualTree **))(v26 + 32))(
                v25,
                v33[0],
                &v34);
        v8 = v15;
        if ( v15 >= 0 )
        {
          CManipulationManager::LockTree(v34, 1);
          v24 = *((_QWORD *)v9 + 13);
          goto LABEL_26;
        }
        v30 = 204;
LABEL_33:
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, v30, 0LL);
      }
    }
  }
LABEL_34:
  if ( v34 )
    CManipulationManager::LockTree(v34, 0);
  if ( v9 )
    (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v9 + 8LL))(v9);
  if ( v34 )
    CRenderTargetBitmap::Release(v34);
  return v8;
}
