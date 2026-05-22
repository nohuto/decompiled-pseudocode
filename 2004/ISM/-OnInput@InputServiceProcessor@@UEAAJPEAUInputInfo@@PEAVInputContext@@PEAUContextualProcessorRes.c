/*
 * XREFs of ?OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801019C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180028040 (-IsEdition@@YA_N_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x180033780 (-InternalAddRef@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     memcpy_s_0 @ 0x1800B6000 (memcpy_s_0.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B6E78 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?CreateKeyboardEvent@InputServiceProcessor@@SA?AUKeyboardEvent@@QEBUKeyboardInputInfo@@@Z @ 0x180101654 (-CreateKeyboardEvent@InputServiceProcessor@@SA-AUKeyboardEvent@@QEBUKeyboardInputInfo@@@Z.c)
 *     ?DeliverToInputService@Keyboard@InputTraceLogging@@SAXHK@Z @ 0x1801017B8 (-DeliverToInputService@Keyboard@InputTraceLogging@@SAXHK@Z.c)
 *     ?GetContainerIdFromInputTarget@@YA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAUCONTAINER_ID@@@Z @ 0x18010182C (-GetContainerIdFromInputTarget@@YA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAUCONTAINER_ID@@@.c)
 *     ?GetKeyboardInputData@KeyboardInputInfo@@QEAA?AU_KEYBOARD_INPUT_DATA@@XZ @ 0x180101954 (-GetKeyboardInputData@KeyboardInputInfo@@QEAA-AU_KEYBOARD_INPUT_DATA@@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardInputVirtualization@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180101CEC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardInputVirtualization@@@details@wil.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputServiceProcessor::OnInput(
        InputServiceProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  unsigned int v6; // r14d
  _OWORD *KeyboardEvent; // rax
  rsize_t v8; // r9
  _OWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // eax
  char ContainerIdFromInputTarget; // al
  int v14; // eax
  _KEYBOARD_INPUT_DATA v16; // [rsp+20h] [rbp-E0h] BYREF
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v18[74]; // [rsp+38h] [rbp-C8h] BYREF
  struct _KEYBOARD_INPUT_DATA v19; // [rsp+160h] [rbp+60h] BYREF
  int v20; // [rsp+174h] [rbp+74h]
  int v21; // [rsp+178h] [rbp+78h]
  __int64 v22; // [rsp+188h] [rbp+88h]
  _BYTE v23[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  BOOL v24; // [rsp+1A4h] [rbp+A4h]
  unsigned __int16 v25; // [rsp+1B2h] [rbp+B2h]
  _BYTE Destination[266]; // [rsp+1C6h] [rbp+C6h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    *((_DWORD *)a4 + 2) = 3;
    v6 = 1;
    if ( !*((_BYTE *)a2 + 346) )
    {
      KeyboardEvent = InputServiceProcessor::CreateKeyboardEvent(v18, (__int64)a2);
      v9 = v23;
      v10 = 2LL;
      do
      {
        *v9 = *KeyboardEvent;
        v9[1] = KeyboardEvent[1];
        v9[2] = KeyboardEvent[2];
        v9[3] = KeyboardEvent[3];
        v9[4] = KeyboardEvent[4];
        v9[5] = KeyboardEvent[5];
        v9[6] = KeyboardEvent[6];
        v9 += 8;
        *(v9 - 1) = KeyboardEvent[7];
        KeyboardEvent += 8;
        --v10;
      }
      while ( v10 );
      *v9 = *KeyboardEvent;
      v9[1] = KeyboardEvent[1];
      *((_QWORD *)v9 + 4) = *((_QWORD *)KeyboardEvent + 4);
      memcpy_s_0(Destination, 0LL, (char *)a2 + 72, v8);
      if ( IsEdition(8778LL) )
      {
        v17 = 0;
        *(_QWORD *)&v16.UnitId = 0LL;
        if ( *((_QWORD *)a3 + 2) )
        {
          if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
                      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a3 + 2,
                      (__int64 *)&v16) >= 0 )
          {
            v12 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)&v16.UnitId + 40LL))(
                    *(_QWORD *)&v16.UnitId,
                    &v17);
            if ( v12 < 0 )
            {
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                157LL,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputservice\\syste"
                         "m\\lib\\inputserviceprocessor.cpp",
                (const char *)(unsigned int)v12);
              __debugbreak();
            }
          }
          if ( v17 )
            MITSetLastInputRecipient();
        }
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v16);
      }
      if ( *((_QWORD *)a3 + 2) )
      {
        LOBYTE(v11) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_KeyboardInputVirtualization>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_KeyboardInputVirtualization>::GetImpl'::`2'::impl,
          v11);
        *(_QWORD *)&v16.UnitId = *((_QWORD *)a3 + 2);
        Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef((__int64 *)&v16);
        ContainerIdFromInputTarget = GetContainerIdFromInputTarget((__int64 *)&v16, (_DWORD *)a2 + 87);
        v24 = ContainerIdFromInputTarget != 0;
        if ( ContainerIdFromInputTarget )
        {
          if ( v25 == 3 || !v25 || v25 >= 7u )
            v6 = 3;
        }
      }
      InputTraceLogging::Keyboard::DeliverToInputService((*((_WORD *)a2 + 35) & 1) == 0, *((_DWORD *)a2 + 1));
      v14 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, _BYTE *))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                              + 32LL))(
              NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
              v23);
      if ( v14 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          178LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputservice\\system\\lib"
                   "\\inputserviceprocessor.cpp",
          (const char *)(unsigned int)v14);
        __debugbreak();
      }
    }
    memset_0(&v19, 0, 0x40uLL);
    v22 = *((unsigned int *)a2 + 1);
    v19 = *KeyboardInputInfo::GetKeyboardInputData(a2, &v16);
    v20 = 1;
    v21 = *((_DWORD *)a2 + 87);
    NtMITSynthesizeKeyboardInput(v6, &v19, 0LL);
  }
  else
  {
    *((_DWORD *)a4 + 2) = 0;
  }
  return 0LL;
}
