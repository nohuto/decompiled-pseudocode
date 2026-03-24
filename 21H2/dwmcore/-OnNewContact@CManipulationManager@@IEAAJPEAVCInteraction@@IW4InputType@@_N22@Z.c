/*
 * XREFs of ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x180225910
 * Callers:
 *     ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x180225618 (-OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180225FC4 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x18004624C (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18005FB60 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D44F4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??2CClipBrush@@KAPEAX_K@Z @ 0x18016BF9C (--2CClipBrush@@KAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1801D73A0 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x1801E3A74 (McTemplateU0pq_EventWriteTransfer.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180224624 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x1802246C8 (-Add@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VCMa.c)
 *     ?Add@?$CMap@IW4InputType@@V?$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBIAEBW4InputType@@@Z @ 0x180224790 (-Add@-$CMap@IW4InputType@@V-$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBIAEBW4InputType@@@Z.c)
 *     ?InternalSetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAXHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180224FB4 (-InternalSetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComP.c)
 *     ?LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z @ 0x180225030 (-LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z.c)
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x180225CE8 (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x18023377C (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x180233B38 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NK@Z @ 0x180234740 (-Initialize@CManipulationContext@@QEAAJ_NK@Z.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z @ 0x180234FE8 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z.c)
 */

__int64 __fastcall CManipulationManager::OnNewContact(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6,
        bool a7)
{
  __int64 *v8; // rcx
  __int64 v11; // rax
  CManipulationContext *v12; // rbx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // edi
  bool v17; // r13
  __int64 v18; // r15
  __int64 v19; // rsi
  int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rdx
  CManipulationContext *v23; // rax
  CManipulationContext *v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // r13d
  int v27; // eax
  __int64 v28; // rcx
  LPVOID v29; // rax
  void *v30; // rcx
  LPVOID v31; // rax
  int v32; // edx
  __int64 v33; // rcx
  unsigned int v35; // [rsp+20h] [rbp-48h]
  __int128 *v36; // [rsp+28h] [rbp-40h]
  bool *v37; // [rsp+30h] [rbp-38h]
  struct CVisualTree *v38; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v39[2]; // [rsp+48h] [rbp-20h]
  __int128 v40; // [rsp+50h] [rbp-18h] BYREF
  CManipulationContext *v41; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v42; // [rsp+B8h] [rbp+50h]
  unsigned int v43; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v44; // [rsp+C8h] [rbp+60h] BYREF

  v44 = a4;
  v43 = a3;
  v42 = a2;
  v39[0] = *(_DWORD *)(a2 + 1712);
  v8 = *(__int64 **)(a1 + 16);
  v39[1] = -2;
  a7 = 0;
  v11 = *v8;
  v12 = 0LL;
  v41 = 0LL;
  v40 = 0LL;
  v38 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct CVisualTree **))(v11 + 32))(v8, *(_QWORD *)v39, &v38);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x734u, 0LL);
    v18 = *((_QWORD *)&v40 + 1);
    v19 = v40;
    goto LABEL_35;
  }
  if ( !a5 )
    CManipulationManager::LockTree(v38, 1);
  v37 = &a7;
  v36 = &v40;
  CManipulationContext::BuildInteractionChainAndUpdateTree(v38, a2, a3, a4);
  v17 = a7;
  v18 = *((_QWORD *)&v40 + 1);
  if ( *(_QWORD *)(a1 + 320) - *(_QWORD *)(a1 + 328) > 0xE4E1C0uLL )
    v17 = 0;
  v19 = v40;
  if ( !*((_QWORD *)&v40 + 1) )
    goto LABEL_35;
  v20 = 0;
  if ( *(int *)(a1 + 216) > 0 )
  {
    v21 = *(_QWORD *)(a1 + 208);
    v22 = 0LL;
    while ( (_QWORD)v40 != *(_QWORD *)(*(_QWORD *)v21 + 48LL) )
    {
      ++v20;
      ++v22;
      v21 += 8LL;
      if ( v22 >= *(int *)(a1 + 216) )
        goto LABEL_15;
    }
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(
      (__int64 (__fastcall ****)(_QWORD))&v41,
      (_QWORD *)(*(_QWORD *)(a1 + 208) + 8LL * v20));
    v12 = v41;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
      McTemplateU0pq_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &MANIPULATION_CONTEXT_NEW_CONTACT,
        (__int64)v41,
        a3);
    if ( v12 )
    {
LABEL_26:
      v29 = DefaultHeap::Realloc(*(void **)(a1 + 184), 4LL * (*(_DWORD *)(a1 + 200) + 1));
      if ( !v29
        || (v30 = *(void **)(a1 + 192),
            *(_QWORD *)(a1 + 184) = v29,
            (v31 = DefaultHeap::Realloc(v30, 8LL * (*(_DWORD *)(a1 + 200) + 1))) == 0LL) )
      {
        v35 = 1900;
        goto LABEL_20;
      }
      v32 = *(_DWORD *)(a1 + 200);
      *(_QWORD *)(a1 + 192) = v31;
      CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::InternalSetAtIndex(
        (_QWORD *)(a1 + 184),
        v32,
        &v43,
        &v41);
      ++*(_DWORD *)(a1 + 200);
      if ( !(unsigned int)CMap<unsigned int,enum InputType,CMapEqualHelper<unsigned int,enum InputType>>::Add(
                            a1 + 224,
                            &v43,
                            &v44) )
      {
        v35 = 1905;
        goto LABEL_20;
      }
      v26 = v44;
      v16 = CManipulationContext::OnNewContact(v12, &v40, a3, v44, a6);
      if ( v16 >= 0 )
        goto LABEL_38;
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v16, 0x774u, 0LL);
LABEL_36:
      if ( v16 >= 0 )
        goto LABEL_38;
      goto LABEL_37;
    }
  }
LABEL_15:
  v23 = (CManipulationContext *)CClipBrush::operator new();
  if ( v23 )
    v24 = CManipulationContext::CManipulationContext(v23, *(struct CComposition **)(a1 + 16));
  else
    v24 = 0LL;
  Microsoft::WRL::ComPtr<CManipulationContext>::operator=(
    (__int64 (__fastcall ****)(_QWORD))&v41,
    (__int64 (__fastcall ***)(_QWORD))v24);
  v12 = v41;
  if ( v41 )
  {
    v27 = CManipulationContext::Initialize(v41, v17, v39[0]);
    v16 = v27;
    if ( v27 >= 0 )
    {
      if ( !(unsigned int)CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
                            (char **)(a1 + 208),
                            &v41) )
      {
        v35 = 1893;
        goto LABEL_20;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
        McTemplateU0pq_EventWriteTransfer(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &MANIPULATION_CONTEXT_CREATED,
          (__int64)v12,
          a3);
      goto LABEL_26;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x762u, 0LL);
LABEL_35:
    v26 = v44;
    goto LABEL_36;
  }
  v35 = 1889;
LABEL_20:
  v16 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, -2147024882, v35, 0LL);
  v26 = v44;
LABEL_37:
  LOBYTE(v37) = 0;
  LOBYTE(v36) = 0;
  CManipulationManager::OnUp(a1, v42, a3, v26, v12, (_DWORD)v36, (_DWORD)v37, 1);
LABEL_38:
  if ( !a5 )
  {
    if ( !v38 )
      goto LABEL_43;
    CManipulationManager::LockTree(v38, 0);
  }
  if ( v38 )
    CRenderTargetBitmap::Release(v38);
LABEL_43:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v41);
  return (unsigned int)v16;
}
