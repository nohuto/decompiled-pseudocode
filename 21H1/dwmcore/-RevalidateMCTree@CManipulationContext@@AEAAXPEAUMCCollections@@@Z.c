/*
 * XREFs of ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180236A10
 * Callers:
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1802363B0 (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C86BC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1801560E0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18016017C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801CAFB0 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180225EB8 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180225EEC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180234370 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z @ 0x180234CA8 (-CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z.c)
 *     ?FindWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAK@Z @ 0x180235054 (-FindWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAK@Z.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x180235094 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x180235E10 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1802372A4 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 */

void __fastcall CManipulationContext::RevalidateMCTree(CManipulationContext *this, struct MCCollections *a2)
{
  int v2; // eax
  int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // esi
  __int64 v10; // rcx
  _QWORD *v11; // r12
  char *v12; // r8
  int Key; // eax
  __int64 v14; // r10
  __int64 v15; // r11
  int v16; // r15d
  __int64 v17; // rbx
  struct CInteraction *v18; // rbx
  bool *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct CInteraction *v22; // rax
  struct CInteraction *ClosestInteractionAncestor; // rdi
  __int64 v24; // rax
  struct CInteraction *i; // rsi
  const struct CVisual *v26; // rcx
  __int64 v27; // rax
  struct CInteraction *j; // rsi
  unsigned __int8 v29; // r12
  __int64 v30; // rbx
  __int64 *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  struct CVisual *v34; // rcx
  bool *v35; // rdx
  __int64 v36; // rax
  const struct CVisual *v37; // rcx
  struct CInteraction *v38; // r15
  struct CInteraction *v39; // rsi
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  struct CInteraction *v46; // r8
  unsigned int v47; // r15d
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rax
  int v52; // edx
  __int64 v53; // r8
  __int64 k; // rcx
  struct CInteraction *v55; // [rsp+50h] [rbp-B0h] BYREF
  CManipulationContext *v56; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v57; // [rsp+60h] [rbp-A0h]
  unsigned int v58; // [rsp+64h] [rbp-9Ch]
  CManipulationContext *v59; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v60; // [rsp+70h] [rbp-90h] BYREF
  CRenderTargetBitmap *v61; // [rsp+78h] [rbp-88h] BYREF
  __int64 v62; // [rsp+80h] [rbp-80h]
  __int64 v63; // [rsp+88h] [rbp-78h]
  __int64 v64; // [rsp+90h] [rbp-70h]
  struct MCCollections *v65; // [rsp+98h] [rbp-68h]
  struct CInteraction *v66; // [rsp+A0h] [rbp-60h] BYREF
  CManipulationContext *v67; // [rsp+A8h] [rbp-58h] BYREF
  struct CInteraction *v68; // [rsp+B0h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+C0h] [rbp-40h] BYREF
  CManipulationContext **v70; // [rsp+E0h] [rbp-20h]
  __int64 v71; // [rsp+E8h] [rbp-18h]
  CManipulationContext **v72; // [rsp+F0h] [rbp-10h]
  __int64 v73; // [rsp+F8h] [rbp-8h]
  struct CInteraction **v74; // [rsp+100h] [rbp+0h]
  __int64 v75; // [rsp+108h] [rbp+8h]

  v2 = *((_DWORD *)this + 18);
  v65 = a2;
  v5 = 0;
  if ( v2 > 0 )
  {
    v6 = 0LL;
    do
    {
      v7 = *(_QWORD *)(v6 + *((_QWORD *)this + 8));
      if ( v7 )
      {
        do
        {
          v8 = *(_QWORD *)(v7 + 208);
          *(_QWORD *)(v7 + 200) = v8;
          v7 = v8;
        }
        while ( v8 );
      }
      v2 = *((_DWORD *)this + 18);
      ++v5;
      v6 += 8LL;
    }
    while ( v5 < v2 );
  }
  v58 = 0;
  v9 = 0;
  if ( v2 > 0 )
  {
    v10 = 0LL;
    v64 = 0LL;
    v63 = 0LL;
    v11 = (_QWORD *)((char *)this + 56);
    v12 = (char *)a2 + 40;
    while ( 1 )
    {
      LODWORD(v56) = *(_DWORD *)(v10 + *v11);
      Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
              (__int64)v12,
              (int *)&v56);
      if ( Key == -1 )
        v16 = 2;
      else
        v16 = *(_DWORD *)(*(_QWORD *)(v15 + 48) + 4LL * Key);
      v17 = *((_QWORD *)this + 8);
      v57 = v16;
      v18 = *(struct CInteraction **)(v14 + v17);
      v68 = v18;
      v55 = v18;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v55);
      v22 = (struct CInteraction *)*((_QWORD *)v18 + 24);
      ClosestInteractionAncestor = v18;
      if ( v22 )
      {
        do
        {
          ClosestInteractionAncestor = v22;
          v22 = (struct CInteraction *)*((_QWORD *)v22 + 24);
        }
        while ( v22 );
        v55 = ClosestInteractionAncestor;
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v55);
        CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
          v11,
          v9,
          &v56,
          &v55);
        (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)ClosestInteractionAncestor + 8LL))(ClosestInteractionAncestor);
      }
      v24 = *((_QWORD *)ClosestInteractionAncestor + 13);
      if ( !v24 || !*(_QWORD *)(v24 + 16) )
      {
        v55 = 0LL;
        ClosestInteractionAncestor = 0LL;
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v55);
        CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
          v11,
          v9,
          &v56,
          &v55);
      }
      for ( i = ClosestInteractionAncestor; i; i = CManipulationContext::GetClosestInteractionAncestor(v26, v19) )
      {
        if ( (unsigned int)dword_180346EF0 > 4 && (qword_180346F00 & 2) != 0 && (qword_180346F08 & 2) == qword_180346F08 )
        {
          v55 = i;
          v56 = this;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            (__int64)&dword_180346EF0,
            byte_1802EDD6F,
            v20,
            v21,
            (__int64)&v56,
            (__int64)&v55);
        }
        *((_BYTE *)i + 184) |= 0x40u;
        v26 = 0LL;
        v27 = *((_QWORD *)i + 13);
        if ( v27 )
          v26 = *(const struct CVisual **)(v27 + 16);
      }
      for ( j = v18; j; j = (struct CInteraction *)*((_QWORD *)j + 25) )
      {
        if ( (unsigned int)dword_180346EF0 > 4 && (qword_180346F00 & 2) != 0 && (qword_180346F08 & 2) == qword_180346F08 )
        {
          v55 = j;
          v56 = this;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            (__int64)&dword_180346EF0,
            byte_1802EDDC1,
            v20,
            v21,
            (__int64)&v56,
            (__int64)&v55);
        }
        *((_BYTE *)j + 184) |= 0x80u;
      }
      if ( (unsigned int)dword_180346EF0 > 4 && (qword_180346F00 & 2) != 0 && (qword_180346F08 & 2) == qword_180346F08 )
      {
        v55 = v18;
        v74 = &v55;
        v56 = ClosestInteractionAncestor;
        v72 = &v56;
        v59 = this;
        v70 = &v59;
        v75 = 8LL;
        v73 = 8LL;
        v71 = 8LL;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_180346EF0,
          (unsigned __int8 *)dword_1802EDEEA,
          0LL,
          0LL,
          5u,
          &v69);
      }
      if ( ClosestInteractionAncestor != v18 )
        CManipulationContext::CleanStaleFork((__int64)this, v16, v18);
      v29 = 0;
      if ( ClosestInteractionAncestor )
        break;
LABEL_75:
      if ( v18 )
        (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v18 + 8LL))(v18);
      v11 = (_QWORD *)((char *)this + 56);
      v9 = v58 + 1;
      v10 = v63 + 4;
      v2 = *((_DWORD *)this + 18);
      v58 = v9;
      v63 += 4LL;
      v64 += 8LL;
      v12 = (char *)v65 + 40;
      if ( (int)v9 >= v2 )
        goto LABEL_78;
    }
    v30 = v16;
    HIDWORD(v62) = -2;
    while ( 1 )
    {
      CManipulationContext::FindWorkspace(v65, ClosestInteractionAncestor, &v60);
      v31 = (__int64 *)*((_QWORD *)this + 5);
      LODWORD(v62) = v60;
      v32 = *v31;
      v61 = 0LL;
      (*(void (__fastcall **)(__int64 *, __int64, CRenderTargetBitmap **))(v32 + 32))(v31, v62, &v61);
      if ( v61 )
      {
        v33 = *((_QWORD *)ClosestInteractionAncestor + 13);
        v34 = 0LL;
        if ( v33 )
          v34 = *(struct CVisual **)(v33 + 16);
        CManipulationContext::OnVisualPropertyChange(v34, v61);
      }
      if ( *((_DWORD *)ClosestInteractionAncestor + 47) == 2 )
        v29 = 1;
      CInteraction::UpdateDefaultInteractionForCurrentMC(ClosestInteractionAncestor);
      v36 = *((_QWORD *)ClosestInteractionAncestor + 13);
      v37 = 0LL;
      v38 = (struct CInteraction *)*((_QWORD *)ClosestInteractionAncestor + 25);
      v39 = ClosestInteractionAncestor;
      if ( v36 )
        v37 = *(const struct CVisual **)(v36 + 16);
      ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(v37, v35);
      if ( (unsigned int)dword_180346EF0 > 4 && (qword_180346F00 & 2) != 0 )
      {
        v42 = qword_180346F08 & 2;
        if ( v42 == qword_180346F08 )
        {
          LODWORD(v56) = v29;
          v59 = v39;
          v55 = v38;
          v66 = ClosestInteractionAncestor;
          v67 = this;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            v42,
            byte_1802EDF4C,
            v40,
            v41,
            (__int64)&v67,
            (__int64)&v66,
            (__int64)&v55,
            (__int64)&v59,
            (__int64)&v56);
        }
      }
      if ( v38 == ClosestInteractionAncestor )
      {
        v47 = v57;
      }
      else
      {
        v43 = *((_QWORD *)v39 + 27);
        if ( v43 )
          *(_QWORD *)(v43 + 224) = *((_QWORD *)v39 + 28);
        v44 = *((_QWORD *)v39 + 28);
        if ( v44 )
          *(_QWORD *)(v44 + 216) = *((_QWORD *)v39 + 27);
        v45 = *((_QWORD *)v39 + 26);
        if ( v45 && *(struct CInteraction **)(v45 + 232) == v39 )
          *(_QWORD *)(v45 + 232) = *((_QWORD *)v39 + 27);
        v46 = v38;
        *((_QWORD *)v39 + 28) = 0LL;
        v47 = v57;
        *((_QWORD *)v39 + 27) = 0LL;
        *((_QWORD *)v39 + 26) = 0LL;
        CManipulationContext::CleanStaleFork((__int64)this, v47, v46);
        if ( !ClosestInteractionAncestor )
          goto LABEL_71;
        *((_QWORD *)v39 + 27) = *((_QWORD *)ClosestInteractionAncestor + 29);
        v48 = *((_QWORD *)ClosestInteractionAncestor + 29);
        if ( v48 )
          *(_QWORD *)(v48 + 224) = v39;
        *((_QWORD *)ClosestInteractionAncestor + 29) = v39;
        *((_QWORD *)v39 + 26) = ClosestInteractionAncestor;
      }
      if ( ClosestInteractionAncestor && *((char *)ClosestInteractionAncestor + 184) >= 0 )
      {
        if ( !(unsigned int)CInteraction::GetTotalNumContacts(ClosestInteractionAncestor) )
        {
          LOBYTE(v49) = 1;
          LOBYTE(v50) = *((_BYTE *)this + 28) & 1;
          (*(void (__fastcall **)(struct CInteraction *, __int64, __int64, _QWORD))(*(_QWORD *)ClosestInteractionAncestor
                                                                                  + 40LL))(
            ClosestInteractionAncestor,
            v49,
            v50,
            v47);
        }
        v51 = v30 - 1;
        if ( v47 - 1 >= 6 )
          v51 = 0LL;
        ++*((_DWORD *)ClosestInteractionAncestor + v51 + 60);
      }
LABEL_71:
      *((_BYTE *)v39 + 184) &= 0x3Fu;
      if ( v61 )
        CRenderTargetBitmap::Release(v61);
      if ( !ClosestInteractionAncestor )
      {
        v18 = v68;
        goto LABEL_75;
      }
    }
  }
LABEL_78:
  v52 = 0;
  if ( v2 > 0 )
  {
    v53 = 0LL;
    do
    {
      for ( k = *(_QWORD *)(v53 + *((_QWORD *)this + 8)); k; k = *(_QWORD *)(k + 208) )
        *(_QWORD *)(k + 200) = 0LL;
      ++v52;
      v53 += 8LL;
    }
    while ( v52 < *((_DWORD *)this + 18) );
  }
}
