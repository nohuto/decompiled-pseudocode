/*
 * XREFs of ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x180183364
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18017D980 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180049584 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18006D8AC (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800D5E60 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x18017C5A4 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z @ 0x18017C8D0 (-LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z.c)
 *     ?Add@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180181F3C (-Add@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInteractio.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x18018382C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180184E80 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x180184F4C (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 */

__int64 __fastcall CManipulationContext::OnHoverContact(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // esi
  __int64 v6; // rax
  struct CInteraction *v7; // rbx
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64, unsigned __int64, struct CVisualTree **); // r14
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r14
  CVisual *v18; // r14
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v20; // rdi
  unsigned int Key; // eax
  __int64 v22; // r10
  __int64 v23; // rax
  __int64 *v24; // rcx
  __int64 v25; // rax
  struct CVisual *v26; // rcx
  __int64 v27; // rcx
  unsigned int v29; // [rsp+20h] [rbp-30h]
  struct CInteraction *v30; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-18h]
  __int64 v32[2]; // [rsp+40h] [rbp-10h] BYREF
  struct CVisualTree *v33; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v34; // [rsp+A0h] [rbp+50h] BYREF

  v34 = a3;
  v5 = 0;
  v33 = 0LL;
  v6 = *(_QWORD *)(a2 + 64);
  v7 = 0LL;
  v30 = 0LL;
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(v6 + 80))(a2 + 64, a4, 0LL) )
  {
    Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)&v30, a2);
    v7 = v30;
  }
  else
  {
    v11 = *(_DWORD *)(a2 + 1720);
    v12 = *(_QWORD *)(a1 + 40);
    v32[0] = 0LL;
    v31 = v11 | 0xFFFFFFFE00000000uLL;
    v13 = *(__int64 (__fastcall **)(__int64, unsigned __int64, struct CVisualTree **))(*(_QWORD *)v12 + 56LL);
    if ( v33 )
      CResource::InternalRelease(v33);
    v14 = v13(v12, v31, &v33);
    v5 = v14;
    if ( v14 < 0 )
    {
      v29 = 145;
      goto LABEL_32;
    }
    CManipulationManager::LockTree(v33, 1);
    v16 = *(_QWORD *)(a2 + 112);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 16);
      if ( v17 )
      {
        v18 = *(CVisual **)(v17 + 88);
        if ( v18 )
        {
          while ( 1 )
          {
            InteractionInternal = CVisual::GetInteractionInternal(v18);
            Microsoft::WRL::ComPtr<CInteraction>::operator=(v32, (__int64)InteractionInternal);
            v20 = (struct CInteraction *)v32[0];
            if ( v32[0] )
            {
              if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v32[0] + 64) + 80LL))(
                     v32[0] + 64,
                     a4,
                     0LL) )
              {
                break;
              }
            }
            v18 = (CVisual *)*((_QWORD *)v18 + 11);
            if ( !v18 )
              goto LABEL_15;
          }
          if ( !v20 )
            goto LABEL_17;
          v32[0] = (__int64)v20;
          Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v32);
          v7 = v20;
          v30 = v20;
LABEL_15:
          if ( v20 )
            (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
  }
LABEL_17:
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          a1 + 56,
          (int *)&v34);
  if ( Key == -1 )
  {
    if ( !(unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
                          v22,
                          (__int64)&v34,
                          (__int64)&v30) )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, -2147024882, 0xB9u);
      goto LABEL_33;
    }
  }
  else
  {
    if ( *(struct CInteraction **)(*(_QWORD *)(a1 + 64) + 8LL * (int)Key) == v7 )
      goto LABEL_33;
    CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
      v22,
      Key,
      &v34,
      &v30);
  }
  InputTraceLogging::GestureTargeting::SetInteractionChain(a3, v7);
  if ( v7 )
  {
    v23 = *((_QWORD *)v7 + 14);
    if ( v23 )
    {
      if ( *(_QWORD *)(v23 + 16) )
      {
        if ( v33 )
        {
LABEL_26:
          v26 = *(struct CVisual **)(v23 + 16);
          if ( v26 )
            CManipulationContext::OnVisualPropertyChange(v26, v33);
          goto LABEL_33;
        }
        v24 = *(__int64 **)(a1 + 40);
        LODWORD(v32[0]) = *((_DWORD *)v7 + 430);
        HIDWORD(v32[0]) = -2;
        v25 = *v24;
        v33 = 0LL;
        v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct CVisualTree **))(v25 + 56))(v24, v32[0], &v33);
        v5 = v14;
        if ( v14 >= 0 )
        {
          CManipulationManager::LockTree(v33, 1);
          v23 = *((_QWORD *)v7 + 14);
          if ( !v23 )
            goto LABEL_33;
          goto LABEL_26;
        }
        v29 = 204;
LABEL_32:
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, v29);
      }
    }
  }
LABEL_33:
  if ( v33 )
    CManipulationManager::LockTree(v33, 0);
  if ( v7 )
    (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v33 )
    CResource::InternalRelease(v33);
  return v5;
}
