/*
 * XREFs of ?SendMaterializeProxy@BamoInputSystemPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180007650
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePenEventsDispatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800083F0 (-UpdatePenEventsDispatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubIm.c)
 *     ?UpdatePenDeviceManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18000861C (-UpdatePenDeviceManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@.c)
 *     ?UpdateKeyboardDockServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180008710 (-UpdateKeyboardDockServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImp.c)
 *     ?UpdateInputSiteManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180008940 (-UpdateInputSiteManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@.c)
 *     ?UpdateInputObserverManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180008B70 (-UpdateInputObserverManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubI.c)
 *     ?UpdateInputDeliveryServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180008DA0 (-UpdateInputDeliveryServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubIm.c)
 *     ?UpdateHeatGripServiceRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180008FD0 (-UpdateHeatGripServiceRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2.c)
 *     ?UpdateEdgyControllerServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180009200 (-UpdateEdgyControllerServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubI.c)
 *     ?UpdateControllerNavigationManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180009430 (-UpdateControllerNavigationManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBa.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18003F458 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180063E7C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v5; // rdx
  __int64 v7; // rax
  int v8; // eax
  int v9; // r12d
  __int64 v10; // rcx
  int v11; // esi
  __int64 v12; // rbx
  _DWORD *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rbx
  int v17; // eax
  void (__fastcall ***v18)(_QWORD); // rcx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v19; // rcx
  void (__fastcall *v20)(_DWORD *, struct IMessageCallSendHost *, __int64); // rbx
  struct IMessageCallSendHost *SendHost; // rax
  int v22; // eax
  unsigned int *v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rbx
  struct IMessageCallSendHost *v26; // rax
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // esi
  __int64 v30; // rbx
  _DWORD *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rbx
  int v35; // eax
  void (__fastcall ***v36)(_QWORD); // rcx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v37; // rcx
  void (__fastcall *v38)(_DWORD *, struct IMessageCallSendHost *, __int64); // rbx
  struct IMessageCallSendHost *v39; // rax
  int v40; // eax
  unsigned int *v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rbx
  struct IMessageCallSendHost *v44; // rax
  unsigned int v45; // eax
  __int64 v46; // rcx
  int v47; // esi
  __int64 v48; // rbx
  _DWORD *v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rbx
  int v53; // eax
  void (__fastcall ***v54)(_QWORD); // rcx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v55; // rcx
  void (__fastcall *v56)(_DWORD *, struct IMessageCallSendHost *, __int64); // rbx
  struct IMessageCallSendHost *v57; // rax
  int v58; // eax
  unsigned int *v59; // rcx
  __int64 v60; // rdi
  __int64 v61; // rbx
  struct IMessageCallSendHost *v62; // rax
  unsigned int v63; // eax
  __int64 v64; // rcx
  int v65; // esi
  __int64 v66; // rbx
  _DWORD *v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rdi
  __int64 v70; // rbx
  int v71; // eax
  void (__fastcall ***v72)(_QWORD); // rcx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v73; // rcx
  void (__fastcall *v74)(_DWORD *, struct IMessageCallSendHost *, __int64); // rbx
  struct IMessageCallSendHost *v75; // rax
  int v76; // eax
  unsigned int *v77; // rcx
  __int64 v78; // rdi
  __int64 v79; // rbx
  struct IMessageCallSendHost *v80; // rax
  unsigned int v81; // eax
  __int64 v82; // rcx
  int v83; // esi
  __int64 v84; // rbx
  _DWORD *v85; // rsi
  __int64 v86; // rax
  __int64 v87; // rdi
  __int64 v88; // rbx
  int v89; // eax
  void (__fastcall ***v90)(_QWORD); // rcx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v91; // rcx
  void (__fastcall *v92)(_DWORD *, struct IMessageCallSendHost *, __int64); // rbx
  struct IMessageCallSendHost *v93; // rax
  int v94; // eax
  unsigned int *v95; // rcx
  __int64 v96; // rdi
  __int64 v97; // rbx
  struct IMessageCallSendHost *v98; // rax
  unsigned int v99; // eax
  __int64 v100; // rcx
  __int64 v101; // rbx
  _DWORD *v102; // rsi
  __int64 v103; // rax
  __int64 v104; // rdi
  __int64 v105; // rbx
  int v106; // eax
  int v107; // eax
  void (__fastcall ***v108)(_QWORD); // rcx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v109; // rcx
  void (__fastcall *v110)(_DWORD *, struct IMessageCallSendHost *, __int64); // rbx
  struct IMessageCallSendHost *v111; // rax
  int v112; // eax
  unsigned int *v113; // rcx
  __int64 v114; // rdi
  __int64 v115; // rbx
  struct IMessageCallSendHost *v116; // rax
  unsigned int v117; // eax
  int v118; // eax
  __int64 v119; // rax
  int v120; // eax
  unsigned int v121; // eax
  unsigned int v122; // eax
  unsigned int v123; // eax
  unsigned int v124; // eax
  unsigned int v125; // eax
  unsigned int v126; // eax
  int v127; // [rsp+20h] [rbp-99h]
  int v128; // [rsp+20h] [rbp-99h]
  int v129; // [rsp+30h] [rbp-89h]
  int v130; // [rsp+30h] [rbp-89h]
  __int64 v131; // [rsp+40h] [rbp-79h] BYREF
  __int64 v132; // [rsp+48h] [rbp-71h] BYREF
  __int64 v133; // [rsp+50h] [rbp-69h] BYREF
  __int64 v134; // [rsp+58h] [rbp-61h]
  _QWORD v135[2]; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v136[2]; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v137[2]; // [rsp+80h] [rbp-39h] BYREF
  _QWORD v138[2]; // [rsp+90h] [rbp-29h] BYREF
  _QWORD v139[2]; // [rsp+A0h] [rbp-19h] BYREF
  _QWORD v140[2]; // [rsp+B0h] [rbp-9h] BYREF
  _QWORD v141[2]; // [rsp+C0h] [rbp+7h] BYREF
  _QWORD v142[2]; // [rsp+D0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]
  __int64 v144; // [rsp+120h] [rbp+67h] BYREF
  __int64 v145; // [rsp+130h] [rbp+77h] BYREF
  __int64 v146; // [rsp+138h] [rbp+7Fh] BYREF

  v5 = *((_QWORD *)a3 + 5);
  v134 = v5;
  if ( *(_BYTE *)(v5 + 44) )
  {
    v7 = (__int64)a2 + 56;
    if ( !a2 )
      v7 = 72LL;
    *(_BYTE *)v7 = 1;
  }
  v129 = *((_DWORD *)this + 6);
  v135[0] = *(unsigned int *)(v5 + 36);
  v135[1] = *(unsigned int *)(v5 + 40);
  v8 = CoreUICallSend(a2, v135, 2LL, 74LL, 32, &unk_1801BF1BA, v129);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x9E0C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v127);
    __debugbreak();
  }
  v9 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v10 = *((_QWORD *)this + 5);
    if ( v10 )
    {
      v12 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
      v13 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v15 = *((_QWORD *)v13 + 4);
      v16 = v14;
      if ( !v15 )
        goto LABEL_13;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v15 + 40) + 36LL) == *(_DWORD *)(v14 + 36) )
          break;
        v15 = *(_QWORD *)(v15 + 48);
      }
      while ( v15 );
      if ( !v15 )
      {
LABEL_13:
        v17 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64 *))(*(_QWORD *)v13 + 64LL))(v13, v14, &v144);
        if ( v17 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x20B,
            (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v17,
            v127);
          __debugbreak();
        }
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v144 + 32LL))(v144);
        *(_QWORD *)(v15 + 24) = v13;
        v18 = *(void (__fastcall ****)(_QWORD))(v15 + 40);
        *(_QWORD *)(v15 + 40) = v16;
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
        if ( v18 )
          (**v18)(v18);
        *(_QWORD *)(v15 + 48) = *((_QWORD *)v13 + 4);
        *((_QWORD *)v13 + 4) = v15;
        *(_QWORD *)(v15 + 56) = *(_QWORD *)(v16 + 48);
        *(_QWORD *)(v16 + 48) = v15;
      }
      if ( !*(_BYTE *)(v15 + 32) )
      {
        v19 = *(Microsoft::BamoImpl::BaseBamoPeerImpl **)(v15 + 40);
        *(_BYTE *)(v15 + 32) = 1;
        v20 = *(void (__fastcall **)(_DWORD *, struct IMessageCallSendHost *, __int64))(*(_QWORD *)v13 + 56LL);
        SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v19);
        v20(v13, SendHost, v15);
        v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 40LL))(v15);
        if ( v22 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x13D,
            (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v22,
            v127);
          __debugbreak();
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 16));
      v11 = v13[6];
    }
    else
    {
      v11 = 0;
    }
    v23 = (unsigned int *)*((_QWORD *)a3 + 5);
    v24 = *((unsigned int *)this + 6);
    v25 = v23[9];
    v26 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v23);
    v136[1] = v24;
    v136[0] = v25;
    LOWORD(v127) = 0;
    v27 = CoreUICallSend(v26, v136, 2LL, 43LL, v127, &unk_1801BF1BA, v11);
    if ( (int)(v27 + 0x80000000) >= 0 && v27 != -2018375675 )
    {
      v121 = wil::verify_hresult<long>(v27);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9E89,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v121,
        v127);
      __debugbreak();
    }
  }
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateControllerNavigationManagerRemoteCache(this, a3);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v28 = *((_QWORD *)this + 7);
    if ( v28 )
    {
      v30 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
      v31 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
      v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
      v33 = *((_QWORD *)v31 + 4);
      v34 = v32;
      if ( !v33 )
        goto LABEL_29;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v33 + 40) + 36LL) == *(_DWORD *)(v32 + 36) )
          break;
        v33 = *(_QWORD *)(v33 + 48);
      }
      while ( v33 );
      if ( !v33 )
      {
LABEL_29:
        v35 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64 *))(*(_QWORD *)v31 + 64LL))(v31, v32, &v145);
        if ( v35 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x20B,
            (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v35,
            v127);
          __debugbreak();
        }
        v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v145 + 32LL))(v145);
        *(_QWORD *)(v33 + 24) = v31;
        v36 = *(void (__fastcall ****)(_QWORD))(v33 + 40);
        *(_QWORD *)(v33 + 40) = v34;
        _InterlockedIncrement((volatile signed __int32 *)(v34 + 8));
        if ( v36 )
          (**v36)(v36);
        *(_QWORD *)(v33 + 48) = *((_QWORD *)v31 + 4);
        *((_QWORD *)v31 + 4) = v33;
        *(_QWORD *)(v33 + 56) = *(_QWORD *)(v34 + 48);
        *(_QWORD *)(v34 + 48) = v33;
      }
      if ( !*(_BYTE *)(v33 + 32) )
      {
        v37 = *(Microsoft::BamoImpl::BaseBamoPeerImpl **)(v33 + 40);
        *(_BYTE *)(v33 + 32) = 1;
        v38 = *(void (__fastcall **)(_DWORD *, struct IMessageCallSendHost *, __int64))(*(_QWORD *)v31 + 56LL);
        v39 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v37);
        v38(v31, v39, v33);
        v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 40LL))(v33);
        if ( v40 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x13D,
            (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v40,
            v127);
          __debugbreak();
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)(v33 + 16));
      v29 = v31[6];
    }
    else
    {
      v29 = 0;
    }
    v41 = (unsigned int *)*((_QWORD *)a3 + 5);
    v42 = *((unsigned int *)this + 6);
    v43 = v41[9];
    v44 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v41);
    v137[1] = v42;
    v137[0] = v43;
    LOWORD(v127) = 2;
    v45 = CoreUICallSend(v44, v137, 2LL, 43LL, v127, &unk_1801BF1BA, v29);
    if ( (int)(v45 + 0x80000000) >= 0 && v45 != -2018375675 )
    {
      v122 = wil::verify_hresult<long>(v45);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9ED9,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v122,
        v127);
      __debugbreak();
    }
  }
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateEdgyControllerServerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateHeatGripServiceRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputDeliveryServerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputObserverManagerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputSiteManagerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateKeyboardDockServerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdatePenDeviceManagerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdatePenEventsDispatcherRemoteCache(this, a3);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v46 = *((_QWORD *)this + 16);
    if ( v46 )
    {
      v48 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
      v49 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 32LL))(v46);
      v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 8LL))(v48);
      v51 = *((_QWORD *)v49 + 4);
      v52 = v50;
      if ( !v51 )
        goto LABEL_45;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v51 + 40) + 36LL) == *(_DWORD *)(v50 + 36) )
          break;
        v51 = *(_QWORD *)(v51 + 48);
      }
      while ( v51 );
      if ( !v51 )
      {
LABEL_45:
        v53 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64 *))(*(_QWORD *)v49 + 64LL))(v49, v50, &v146);
        if ( v53 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x20B,
            (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v53,
            v127);
          __debugbreak();
        }
        v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v146 + 32LL))(v146);
        *(_QWORD *)(v51 + 24) = v49;
        v54 = *(void (__fastcall ****)(_QWORD))(v51 + 40);
        *(_QWORD *)(v51 + 40) = v52;
        _InterlockedIncrement((volatile signed __int32 *)(v52 + 8));
        if ( v54 )
          (**v54)(v54);
        *(_QWORD *)(v51 + 48) = *((_QWORD *)v49 + 4);
        *((_QWORD *)v49 + 4) = v51;
        *(_QWORD *)(v51 + 56) = *(_QWORD *)(v52 + 48);
        *(_QWORD *)(v52 + 48) = v51;
      }
      if ( !*(_BYTE *)(v51 + 32) )
      {
        v55 = *(Microsoft::BamoImpl::BaseBamoPeerImpl **)(v51 + 40);
        *(_BYTE *)(v51 + 32) = 1;
        v56 = *(void (__fastcall **)(_DWORD *, struct IMessageCallSendHost *, __int64))(*(_QWORD *)v49 + 56LL);
        v57 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v55);
        v56(v49, v57, v51);
        v58 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 40LL))(v51);
        if ( v58 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x13D,
            (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v58,
            v127);
          __debugbreak();
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)(v51 + 16));
      v47 = v49[6];
    }
    else
    {
      v47 = 0;
    }
    v59 = (unsigned int *)*((_QWORD *)a3 + 5);
    v60 = *((unsigned int *)this + 6);
    v61 = v59[9];
    v62 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v59);
    v138[0] = v61;
    v138[1] = v60;
    LOWORD(v127) = 11;
    v63 = CoreUICallSend(v62, v138, 2LL, 43LL, v127, &unk_1801BF1BA, v47);
    if ( (int)(v63 + 0x80000000) >= 0 && v63 != -2018375675 )
    {
      v123 = wil::verify_hresult<long>(v63);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA041,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v123,
        v127);
      __debugbreak();
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v64 = *((_QWORD *)this + 17);
    if ( v64 )
    {
      v66 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
      v67 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 32LL))(v64);
      v68 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v66 + 8LL))(v66);
      v69 = *((_QWORD *)v67 + 4);
      v70 = v68;
      if ( !v69 )
        goto LABEL_61;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v69 + 40) + 36LL) == *(_DWORD *)(v68 + 36) )
          break;
        v69 = *(_QWORD *)(v69 + 48);
      }
      while ( v69 );
      if ( !v69 )
      {
LABEL_61:
        v71 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64 *))(*(_QWORD *)v67 + 64LL))(v67, v68, &v131);
        if ( v71 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x20B,
            (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v71,
            v127);
          __debugbreak();
        }
        v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v131 + 32LL))(v131);
        *(_QWORD *)(v69 + 24) = v67;
        v72 = *(void (__fastcall ****)(_QWORD))(v69 + 40);
        *(_QWORD *)(v69 + 40) = v70;
        _InterlockedIncrement((volatile signed __int32 *)(v70 + 8));
        if ( v72 )
          (**v72)(v72);
        *(_QWORD *)(v69 + 48) = *((_QWORD *)v67 + 4);
        *((_QWORD *)v67 + 4) = v69;
        *(_QWORD *)(v69 + 56) = *(_QWORD *)(v70 + 48);
        *(_QWORD *)(v70 + 48) = v69;
      }
      if ( !*(_BYTE *)(v69 + 32) )
      {
        v73 = *(Microsoft::BamoImpl::BaseBamoPeerImpl **)(v69 + 40);
        *(_BYTE *)(v69 + 32) = 1;
        v74 = *(void (__fastcall **)(_DWORD *, struct IMessageCallSendHost *, __int64))(*(_QWORD *)v67 + 56LL);
        v75 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v73);
        v74(v67, v75, v69);
        v76 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 40LL))(v69);
        if ( v76 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x13D,
            (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v76,
            v127);
          __debugbreak();
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)(v69 + 16));
      v65 = v67[6];
    }
    else
    {
      v65 = 0;
    }
    v77 = (unsigned int *)*((_QWORD *)a3 + 5);
    v78 = *((unsigned int *)this + 6);
    v79 = v77[9];
    v80 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v77);
    v139[0] = v79;
    v139[1] = v78;
    LOWORD(v127) = 12;
    v81 = CoreUICallSend(v80, v139, 2LL, 43LL, v127, &unk_1801BF1BA, v65);
    if ( (int)(v81 + 0x80000000) >= 0 && v81 != -2018375675 )
    {
      v124 = wil::verify_hresult<long>(v81);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA069,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v124,
        v127);
      __debugbreak();
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v82 = *((_QWORD *)this + 18);
    if ( v82 )
    {
      v84 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
      v85 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v82 + 32LL))(v82);
      v86 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v84 + 8LL))(v84);
      v87 = *((_QWORD *)v85 + 4);
      v88 = v86;
      if ( !v87 )
        goto LABEL_77;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v87 + 40) + 36LL) == *(_DWORD *)(v86 + 36) )
          break;
        v87 = *(_QWORD *)(v87 + 48);
      }
      while ( v87 );
      if ( !v87 )
      {
LABEL_77:
        v89 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64 *))(*(_QWORD *)v85 + 64LL))(v85, v86, &v132);
        if ( v89 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x20B,
            (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v89,
            v127);
          __debugbreak();
        }
        v87 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v132 + 32LL))(v132);
        *(_QWORD *)(v87 + 24) = v85;
        v90 = *(void (__fastcall ****)(_QWORD))(v87 + 40);
        *(_QWORD *)(v87 + 40) = v88;
        _InterlockedIncrement((volatile signed __int32 *)(v88 + 8));
        if ( v90 )
          (**v90)(v90);
        *(_QWORD *)(v87 + 48) = *((_QWORD *)v85 + 4);
        *((_QWORD *)v85 + 4) = v87;
        *(_QWORD *)(v87 + 56) = *(_QWORD *)(v88 + 48);
        *(_QWORD *)(v88 + 48) = v87;
      }
      if ( !*(_BYTE *)(v87 + 32) )
      {
        v91 = *(Microsoft::BamoImpl::BaseBamoPeerImpl **)(v87 + 40);
        *(_BYTE *)(v87 + 32) = 1;
        v92 = *(void (__fastcall **)(_DWORD *, struct IMessageCallSendHost *, __int64))(*(_QWORD *)v85 + 56LL);
        v93 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v91);
        v92(v85, v93, v87);
        v94 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v87 + 40LL))(v87);
        if ( v94 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x13D,
            (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v94,
            v127);
          __debugbreak();
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)(v87 + 16));
      v83 = v85[6];
    }
    else
    {
      v83 = 0;
    }
    v95 = (unsigned int *)*((_QWORD *)a3 + 5);
    v96 = *((unsigned int *)this + 6);
    v97 = v95[9];
    v98 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v95);
    v140[0] = v97;
    v140[1] = v96;
    LOWORD(v127) = 13;
    v99 = CoreUICallSend(v98, v140, 2LL, 43LL, v127, &unk_1801BF1BA, v83);
    if ( (int)(v99 + 0x80000000) >= 0 && v99 != -2018375675 )
    {
      v125 = wil::verify_hresult<long>(v99);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA091,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v125,
        v127);
      __debugbreak();
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v100 = *((_QWORD *)this + 19);
    if ( v100 )
    {
      v101 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
      v102 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v100 + 32LL))(v100);
      v103 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v101 + 8LL))(v101);
      v104 = *((_QWORD *)v102 + 4);
      v105 = v103;
      v106 = *(_DWORD *)(v103 + 36);
      if ( !v104 )
        goto LABEL_92;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v104 + 40) + 36LL) == v106 )
          break;
        v104 = *(_QWORD *)(v104 + 48);
      }
      while ( v104 );
      if ( !v104 )
      {
LABEL_92:
        v107 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64 *))(*(_QWORD *)v102 + 64LL))(v102, v105, &v133);
        if ( v107 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x20B,
            (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v107,
            v127);
          __debugbreak();
        }
        v104 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v133 + 32LL))(v133);
        *(_QWORD *)(v104 + 24) = v102;
        v108 = *(void (__fastcall ****)(_QWORD))(v104 + 40);
        *(_QWORD *)(v104 + 40) = v105;
        _InterlockedIncrement((volatile signed __int32 *)(v105 + 8));
        if ( v108 )
          (**v108)(v108);
        *(_QWORD *)(v104 + 48) = *((_QWORD *)v102 + 4);
        *((_QWORD *)v102 + 4) = v104;
        *(_QWORD *)(v104 + 56) = *(_QWORD *)(v105 + 48);
        *(_QWORD *)(v105 + 48) = v104;
      }
      if ( !*(_BYTE *)(v104 + 32) )
      {
        v109 = *(Microsoft::BamoImpl::BaseBamoPeerImpl **)(v104 + 40);
        *(_BYTE *)(v104 + 32) = 1;
        v110 = *(void (__fastcall **)(_DWORD *, struct IMessageCallSendHost *, __int64))(*(_QWORD *)v102 + 56LL);
        v111 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v109);
        v110(v102, v111, v104);
        v112 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v104 + 40LL))(v104);
        if ( v112 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x13D,
            (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v112,
            v127);
          __debugbreak();
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)(v104 + 16));
      v9 = v102[6];
    }
    v113 = (unsigned int *)*((_QWORD *)a3 + 5);
    v114 = *((unsigned int *)this + 6);
    v115 = v113[9];
    v116 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v113);
    v141[0] = v115;
    v141[1] = v114;
    LOWORD(v127) = 14;
    v117 = CoreUICallSend(v116, v141, 2LL, 43LL, v127, &unk_1801BF1BA, v9);
    if ( ((v117 + 0x80000000) & 0x80000000) == 0 && v117 != -2018375675 )
    {
      v126 = wil::verify_hresult<long>(v117);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA0B9,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v126,
        v127);
      __debugbreak();
    }
  }
  v118 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 32LL))(a3);
  if ( v118 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x9E36,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v118,
      v127);
    __debugbreak();
  }
  if ( *(_BYTE *)(*((_QWORD *)a3 + 5) + 44LL) )
  {
    v119 = (__int64)a2 + 56;
    if ( !a2 )
      v119 = 72LL;
    *(_BYTE *)v119 = 1;
  }
  v130 = *((_DWORD *)this + 6);
  v142[0] = *(unsigned int *)(v134 + 36);
  v142[1] = *(unsigned int *)(v134 + 40);
  LOWORD(v127) = 55;
  v120 = CoreUICallSend(a2, v142, 2LL, 74LL, v127, &unk_1801BF1BA, v130);
  if ( v120 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x9E47,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v120,
      v128);
    JUMPOUT(0x1800083E5LL);
  }
}
