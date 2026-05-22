/*
 * XREFs of ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x180027264
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18001F1C8 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?DeferredInitializeStatic@OneCoreUAPInputHost@@SAJPEAX_NPEAU_FILETIME@@@Z @ 0x180039F60 (-DeferredInitializeStatic@OneCoreUAPInputHost@@SAJPEAX_NPEAU_FILETIME@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180027FE0 (-IsEdition@@YA_N_K@Z.c)
 *     ??$_Emplace_reallocate@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAPEAUInputProvider@@QEAU2@$$QEAU2@@Z @ 0x180028610 (--$_Emplace_reallocate@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@s.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DockInputProcessing@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002A550 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DockInputProcessing@@@details@wil@@QEAAX_.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x18003D04C (IsGetMPCInputPostProcessorPresent.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$construct@UInputProvider@@U1@@?$_Default_allocator_traits@V?$allocator@UInputProvider@@@std@@@std@@SAXAEAV?$allocator@UInputProvider@@@1@QEAUInputProvider@@$$QEAU3@@Z @ 0x1800896D0 (--$construct@UInputProvider@@U1@@-$_Default_allocator_traits@V-$allocator@UInputProvider@@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputProviderManager::InitializeHelper(__int64 a1, __int64 a2, int a3, const char *a4)
{
  wil::details::in1diag3 *v7; // rcx
  _DWORD *v8; // rbx
  const char *v9; // r9
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int128 v18; // [rsp+20h] [rbp-79h] BYREF
  _QWORD v19[4]; // [rsp+30h] [rbp-69h] BYREF
  bool v20; // [rsp+50h] [rbp-49h]
  _DWORD v21[3]; // [rsp+54h] [rbp-45h] BYREF
  __int64 (__fastcall *v22)(struct IRawInputClient *, __int64, struct IRawInputProvider **, const char *); // [rsp+60h] [rbp-39h]
  __int64 v23; // [rsp+68h] [rbp-31h]
  bool v24; // [rsp+70h] [rbp-29h]
  int v25; // [rsp+74h] [rbp-25h]
  int v26; // [rsp+78h] [rbp-21h]
  __int64 (__fastcall *v27)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+80h] [rbp-19h]
  __int64 v28; // [rsp+88h] [rbp-11h]
  bool v29; // [rsp+90h] [rbp-9h]
  int v30; // [rsp+94h] [rbp-5h]
  int v31; // [rsp+98h] [rbp-1h]
  __int64 (__fastcall *v32)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+A0h] [rbp+7h]
  __int64 v33; // [rsp+A8h] [rbp+Fh]
  char v34; // [rsp+B0h] [rbp+17h]
  int v35; // [rsp+B4h] [rbp+1Bh]
  int v36; // [rsp+B8h] [rbp+1Fh]
  __int64 v37; // [rsp+C0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v19[2] = GameControllerRawInputProvider::Create;
  v19[3] = 262123LL;
  v7 = retaddr;
  LODWORD(v8) = 33;
  if ( !ISMTestMode::s_instance )
    goto LABEL_19;
  v20 = *(_BYTE *)ISMTestMode::s_instance == 0;
  v21[0] = 0;
  v21[1] = 0;
  v22 = MPCRawInputProvider::Create;
  v23 = 262123LL;
  v24 = (unsigned __int8)IsGetMPCInputPostProcessorPresent(retaddr) != 0;
  v25 = 0;
  v26 = 0;
  v27 = RIMRawInputProvider::Create;
  v28 = 262123LL;
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v9);
LABEL_18:
    wil::details::in1diag3::FailFast_Hr(
      v14,
      (void *)0x75,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\manager\\lib\\inputprovidermanager.cpp",
      (const char *)(unsigned int)v13,
      v18);
LABEL_19:
    wil::details::in1diag3::_FailFast_Unexpected(
      v7,
      (void *)(unsigned int)v8,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      a4);
    JUMPOUT(0x18002746CLL);
  }
  v29 = *(_BYTE *)ISMTestMode::s_instance == 0;
  v30 = 0;
  v10 = 0;
  if ( IsEdition(0x3DDA1uLL) )
  {
    LOBYTE(v11) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DockInputProcessing>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_DockInputProcessing>::GetImpl'::`2'::impl,
      v11);
    v10 = 1048640;
  }
  v31 = v10 | ((unsigned __int8)IsGetMPCInputPostProcessorPresent(v12) != 0 ? 27776 : 18560);
  v32 = LampArrayRawInputProvider::Create;
  v33 = 262123LL;
  v34 = 1;
  v35 = 0;
  v36 = 0;
  v8 = v21;
  do
  {
    if ( IsEdition(*(_QWORD *)(v8 - 3)) && *((_BYTE *)v8 - 4) && *v8 == a3 )
    {
      v19[0] = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(v8 - 5))(a2, (unsigned int)v8[1], v19);
      v14 = retaddr;
      if ( v13 < 0 )
        goto LABEL_18;
      v18 = *(_OWORD *)(v8 - 3);
      v15 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 16) == v15 )
      {
        std::vector<InputProvider>::_Emplace_reallocate<InputProvider>(a1, v15, &v18);
      }
      else
      {
        std::_Default_allocator_traits<std::allocator<InputProvider>>::construct<InputProvider,InputProvider>(
          retaddr,
          v15,
          &v18);
        *(_QWORD *)(a1 + 8) += 24LL;
      }
      v16 = v19[0];
      if ( v19[0] )
      {
        v19[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
    v8 += 8;
  }
  while ( v8 - 5 != (_DWORD *)&v37 );
  return 0LL;
}
