/*
 * XREFs of ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180184570
 * Callers:
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x180183ED4 (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180025194 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800D5E60 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800EEDA4 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x18017C5A4 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180181764 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801817E4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z @ 0x180182548 (-CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z.c)
 *     ?FindWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAK@Z @ 0x180182918 (-FindWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAK@Z.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x180182958 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x18018382C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180184E80 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801F3160 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 */

void __fastcall CManipulationContext::RevalidateMCTree(CManipulationContext *this, struct MCCollections *a2)
{
  int v2; // eax
  int v3; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // r12d
  _QWORD *v10; // r13
  __int64 v11; // rcx
  char *v12; // r8
  int Key; // eax
  __int64 v14; // r10
  __int64 v15; // r11
  int v16; // r15d
  __int64 v17; // rbx
  struct CInteraction *v18; // rbx
  bool *v19; // rdx
  struct CInteraction *v20; // rax
  struct CInteraction *ClosestInteractionAncestor; // rsi
  __int64 v22; // rax
  struct CInteraction *i; // rdi
  __int64 v24; // r8
  __int64 v25; // r9
  const struct CVisual *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int8 v31; // r12
  char v32; // r13
  __int64 v33; // rbx
  __int64 *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  struct CVisual *v37; // rcx
  bool v38; // dl
  bool *v39; // rdx
  __int64 v40; // rax
  const struct CVisual *v41; // rcx
  __int64 v42; // r15
  struct CInteraction *v43; // rsi
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  int v52; // r11d
  __int64 v53; // rax
  int v54; // edx
  __int64 v55; // r8
  __int64 j; // rcx
  struct CInteraction *v57; // [rsp+50h] [rbp-B0h] BYREF
  CManipulationContext *v58; // [rsp+58h] [rbp-A8h] BYREF
  int v59; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v60; // [rsp+64h] [rbp-9Ch]
  unsigned int v61; // [rsp+68h] [rbp-98h] BYREF
  CResource *v62; // [rsp+70h] [rbp-90h] BYREF
  CManipulationContext *v63; // [rsp+78h] [rbp-88h] BYREF
  __int64 v64; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+88h] [rbp-78h]
  __int64 v66; // [rsp+90h] [rbp-70h]
  struct MCCollections *v67; // [rsp+98h] [rbp-68h]
  CManipulationContext *v68; // [rsp+A0h] [rbp-60h] BYREF
  struct CInteraction *v69; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+B0h] [rbp-50h] BYREF
  CManipulationContext **v71; // [rsp+D0h] [rbp-30h]
  int v72; // [rsp+D8h] [rbp-28h]
  int v73; // [rsp+DCh] [rbp-24h]
  CManipulationContext **v74; // [rsp+E0h] [rbp-20h]
  int v75; // [rsp+E8h] [rbp-18h]
  int v76; // [rsp+ECh] [rbp-14h]
  __int64 *v77; // [rsp+F0h] [rbp-10h]
  int v78; // [rsp+F8h] [rbp-8h]
  int v79; // [rsp+FCh] [rbp-4h]

  v2 = *((_DWORD *)this + 18);
  v3 = 0;
  v67 = a2;
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
          v8 = *(_QWORD *)(v7 + 216);
          *(_QWORD *)(v7 + 208) = v8;
          v7 = v8;
        }
        while ( v8 );
      }
      v2 = *((_DWORD *)this + 18);
      ++v3;
      v6 += 8LL;
    }
    while ( v3 < v2 );
  }
  v9 = 0;
  v60 = 0;
  if ( v2 > 0 )
  {
    v10 = (_QWORD *)((char *)this + 56);
    v11 = 0LL;
    v66 = 0LL;
    v65 = 0LL;
    v12 = (char *)a2 + 40;
    while ( 1 )
    {
      LODWORD(v58) = *(_DWORD *)(v11 + *v10);
      Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
              (__int64)v12,
              (int *)&v58);
      if ( Key == -1 )
        v16 = 2;
      else
        v16 = *(_DWORD *)(*(_QWORD *)(v15 + 48) + 4LL * Key);
      v17 = *((_QWORD *)this + 8);
      v59 = v16;
      v18 = *(struct CInteraction **)(v14 + v17);
      v69 = v18;
      v57 = v18;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v57);
      v20 = (struct CInteraction *)*((_QWORD *)v18 + 25);
      ClosestInteractionAncestor = v18;
      if ( v20 )
      {
        do
        {
          ClosestInteractionAncestor = v20;
          v20 = (struct CInteraction *)*((_QWORD *)v20 + 25);
        }
        while ( v20 );
        v57 = ClosestInteractionAncestor;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v57);
        CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
          v10,
          v9,
          &v58,
          &v57);
        (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)ClosestInteractionAncestor + 16LL))(ClosestInteractionAncestor);
      }
      v22 = *((_QWORD *)ClosestInteractionAncestor + 14);
      if ( v22 && *(_QWORD *)(v22 + 16) )
      {
        for ( i = ClosestInteractionAncestor;
              ClosestInteractionAncestor;
              ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(v26, v19) )
        {
          if ( (unsigned int)dword_1803D0EF0 > 4 && tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL) )
          {
            v57 = ClosestInteractionAncestor;
            v58 = this;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              (__int64)&dword_1803D0EF0,
              byte_180369E4F,
              v24,
              v25,
              (__int64)&v58,
              (__int64)&v57);
          }
          *((_BYTE *)ClosestInteractionAncestor + 192) |= 0x80u;
          v26 = 0LL;
          v27 = *((_QWORD *)ClosestInteractionAncestor + 14);
          if ( v27 )
            v26 = *(const struct CVisual **)(v27 + 16);
        }
      }
      else
      {
        i = 0LL;
        v57 = 0LL;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v57);
        CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
          v10,
          v9,
          &v58,
          &v57);
      }
      v28 = (__int64)v18;
      if ( v18 )
      {
        do
        {
          if ( (unsigned int)dword_1803D0EF0 > 4 && tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL) )
          {
            v57 = (struct CInteraction *)v28;
            v58 = this;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              (__int64)&dword_1803D0EF0,
              byte_180369D25,
              v29,
              v30,
              (__int64)&v58,
              (__int64)&v57);
          }
          *(_BYTE *)(v28 + 193) |= 1u;
          v28 = *(_QWORD *)(v28 + 208);
        }
        while ( v28 );
      }
      if ( (unsigned int)dword_1803D0EF0 > 4 && tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL) )
      {
        v79 = 0;
        v76 = 0;
        v73 = 0;
        v77 = (__int64 *)&v57;
        v57 = v18;
        v74 = &v58;
        v58 = i;
        v71 = &v63;
        v63 = this;
        v78 = 8;
        v75 = 8;
        v72 = 8;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1803D0EF0,
          (unsigned __int8 *)dword_180369D76,
          0LL,
          0LL,
          5u,
          &v70);
      }
      if ( i != v18 )
        CManipulationContext::CleanStaleFork((__int64)this, v16, (__int64)v18);
      v31 = 0;
      v32 = 0;
      if ( i )
        break;
LABEL_79:
      if ( v18 )
        (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v18 + 16LL))(v18);
      v10 = (_QWORD *)((char *)this + 56);
      v9 = v60 + 1;
      v11 = v65 + 4;
      v2 = *((_DWORD *)this + 18);
      v60 = v9;
      v65 += 4LL;
      v66 += 8LL;
      v12 = (char *)v67 + 40;
      if ( (int)v9 >= v2 )
        goto LABEL_82;
    }
    v33 = v59;
    HIDWORD(v64) = -2;
    while ( 1 )
    {
      CManipulationContext::FindWorkspace(v67, i, &v61);
      v34 = (__int64 *)*((_QWORD *)this + 5);
      LODWORD(v64) = v61;
      v35 = *v34;
      v62 = 0LL;
      (*(void (__fastcall **)(__int64 *, __int64, CResource **))(v35 + 56))(v34, v64, &v62);
      if ( v62 )
      {
        v36 = *((_QWORD *)i + 14);
        v37 = 0LL;
        if ( v36 )
          v37 = *(struct CVisual **)(v36 + 16);
        CManipulationContext::OnVisualPropertyChange(v37, v62);
      }
      if ( *((_DWORD *)i + 49) == 2 )
      {
        v32 = 0;
        v31 = 1;
      }
      else if ( !v31 || v32 )
      {
        v38 = 0;
        goto LABEL_47;
      }
      v38 = 1;
LABEL_47:
      CInteraction::UpdateDefaultInteractionForCurrentMC(i, v38);
      if ( v31
        && (*((_BYTE *)i + 192) & 0x10) != 0
        && (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)i + 8) + 80LL))(
             (__int64)i + 64,
             (unsigned int)v33,
             0LL) )
      {
        v32 = 1;
      }
      v40 = *((_QWORD *)i + 14);
      v41 = 0LL;
      v42 = *((_QWORD *)i + 26);
      v43 = i;
      if ( v40 )
        v41 = *(const struct CVisual **)(v40 + 16);
      i = CManipulationContext::GetClosestInteractionAncestor(v41, v39);
      if ( (unsigned int)dword_1803D0EF0 > 4 && tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL) )
      {
        v59 = v31;
        v63 = v43;
        v57 = (struct CInteraction *)v42;
        v58 = i;
        v68 = this;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v31,
          byte_180369C43,
          v44,
          v45,
          (__int64)&v68,
          (__int64)&v58,
          (__int64)&v57,
          (__int64)&v63,
          (__int64)&v59);
      }
      if ( (struct CInteraction *)v42 != i )
      {
        v46 = *((_QWORD *)v43 + 28);
        if ( v46 )
          *(_QWORD *)(v46 + 232) = *((_QWORD *)v43 + 29);
        v47 = *((_QWORD *)v43 + 29);
        if ( v47 )
          *(_QWORD *)(v47 + 224) = *((_QWORD *)v43 + 28);
        v48 = *((_QWORD *)v43 + 27);
        if ( v48 && *(struct CInteraction **)(v48 + 240) == v43 )
          *(_QWORD *)(v48 + 240) = *((_QWORD *)v43 + 28);
        *((_QWORD *)v43 + 29) = 0LL;
        *((_QWORD *)v43 + 28) = 0LL;
        *((_QWORD *)v43 + 27) = 0LL;
        CManipulationContext::CleanStaleFork((__int64)this, v33, v42);
        if ( !i )
          goto LABEL_75;
        *((_QWORD *)v43 + 28) = *((_QWORD *)i + 30);
        v49 = *((_QWORD *)i + 30);
        if ( v49 )
          *(_QWORD *)(v49 + 232) = v43;
        *((_QWORD *)i + 30) = v43;
        *((_QWORD *)v43 + 27) = i;
LABEL_69:
        if ( (*((_BYTE *)i + 193) & 1) == 0 )
        {
          if ( !(unsigned int)CInteraction::GetTotalNumContacts(i) )
          {
            LOBYTE(v51) = v52 & *((_BYTE *)this + 28);
            LOBYTE(v50) = v52;
            (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*((_QWORD *)i + 8) + 40LL))(
              (__int64)i + 64,
              v50,
              v51,
              (unsigned int)v33);
            v52 = 1;
          }
          v53 = v33 - 1;
          if ( (unsigned int)(v33 - 1) >= 6 )
            v53 = 0LL;
          *((_DWORD *)i + v53 + 62) += v52;
        }
        goto LABEL_75;
      }
      if ( i )
        goto LABEL_69;
LABEL_75:
      *((_BYTE *)v43 + 192) &= ~0x80u;
      *((_BYTE *)v43 + 193) &= ~1u;
      if ( v62 )
        CResource::InternalRelease(v62);
      if ( !i )
      {
        v18 = v69;
        goto LABEL_79;
      }
    }
  }
LABEL_82:
  v54 = 0;
  if ( v2 > 0 )
  {
    v55 = 0LL;
    do
    {
      for ( j = *(_QWORD *)(v55 + *((_QWORD *)this + 8)); j; j = *(_QWORD *)(j + 216) )
        *(_QWORD *)(j + 208) = 0LL;
      ++v54;
      v55 += 8LL;
    }
    while ( v54 < *((_DWORD *)this + 18) );
  }
}
