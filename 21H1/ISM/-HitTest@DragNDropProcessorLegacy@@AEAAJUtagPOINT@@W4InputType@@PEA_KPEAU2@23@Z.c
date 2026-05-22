/*
 * XREFs of ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@W4InputType@@PEA_KPEAU2@23@Z @ 0x1801753A8
 * Callers:
 *     ?CancelDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z @ 0x180174B48 (-CancelDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z.c)
 *     ?OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801759C0 (-OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessor.c)
 *     ?StartDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z @ 0x1801760E0 (-StartDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180011654 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180018060 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001B624 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18003CBA6 (_CxxThrowException_0.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x180044614 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 *     ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800447C0 (-GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA-AV-$ComPtr@VInputSite@@@WRL@M.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?ScreenPointToRelative@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1800B7254 (-ScreenPointToRelative@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BD41C (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x1800F12DC (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x1801493FC (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragNDropProcessorLegacy::HitTest(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 *a5,
        __int64 *a6,
        unsigned __int64 *a7)
{
  __int64 *v8; // r13
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 WindowIdFromViewId; // r12
  unsigned __int64 v14; // rdi
  __int64 v15; // r15
  unsigned __int64 v16; // rbx
  LegacyInputSinkData *v17; // r14
  unsigned int v18; // edi
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  float *v20; // rax
  __int64 *v21; // r14
  __int64 v22; // r13
  char *CompositionInputQueue; // rax
  float *v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v30; // [rsp+48h] [rbp-B8h]
  void **pExceptionObject; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v32; // [rsp+58h] [rbp-A8h]
  _QWORD *v33; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v34; // [rsp+70h] [rbp-90h]
  unsigned __int64 *v35; // [rsp+78h] [rbp-88h]
  _BYTE v36[16]; // [rsp+80h] [rbp-80h] BYREF
  char v37[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v38; // [rsp+98h] [rbp-68h] BYREF
  __int64 *v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-50h]
  __int128 v41[4]; // [rsp+110h] [rbp+10h] BYREF

  v33 = a4;
  v27 = a2;
  v34 = a5;
  v8 = a6;
  v30 = a6;
  v35 = a7;
  v9 = HitTestHelper::ConvertInputTypeToPointerType(a3);
  (*(void (__fastcall **)(_QWORD, char *, unsigned __int64, _QWORD))(**(_QWORD **)(v10 + 24) + 32LL))(
    *(_QWORD *)(v10 + 24),
    v37,
    a2,
    v9);
  if ( v37[0] && (unsigned __int64)(v40 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    WindowIdFromViewId = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    if ( v38 != v39 )
    {
      InputSiteManager::GetInputSiteForLeafmostViewFromInputSiteList(&v29, &v38);
      if ( v29 )
      {
        v17 = (LegacyInputSinkData *)(v29 + 32);
        if ( !*(_BYTE *)(v29 + 392) )
        {
          v32 = 0LL;
          pExceptionObject = &std::bad_optional_access::`vftable';
          throw (std::bad_optional_access *)&pExceptionObject;
        }
        v18 = *LegacyInputSinkData::GetViewInstanceId((LegacyInputSinkData *)(v29 + 32));
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v18);
        LegacyInputSinkData::GetTransform(v17, v41);
        v28 = _mm_unpacklo_ps(
                (__m128)COERCE_UNSIGNED_INT((float)(int)a2),
                (__m128)COERCE_UNSIGNED_INT((float)SHIDWORD(v27))).m128_u64[0];
        v20 = (float *)CInputTransform::ScreenPointToRelative((__int64)v36, (float *)&v28, v41);
        LODWORD(v28) = (int)*v20;
        HIDWORD(v28) = (int)v20[1];
        v14 = v28;
      }
      v21 = v38;
      v28 = (unsigned __int64)v39;
      if ( v38 != v39 )
      {
        while ( 1 )
        {
          v22 = *v21;
          if ( !*(_BYTE *)(*v21 + 392) )
          {
            v32 = 0LL;
            pExceptionObject = &std::bad_optional_access::`vftable';
            throw (std::bad_optional_access *)&pExceptionObject;
          }
          CompositionInputQueue = LegacyInputSinkData::GetCompositionInputQueue((LegacyInputSinkData *)(v22 + 32), 3u);
          if ( (unsigned int)(*(_DWORD *)CompositionInputQueue - 2) <= 1 )
            break;
          if ( ++v21 == (__int64 *)v28 )
            goto LABEL_14;
        }
        v15 = *((_QWORD *)CompositionInputQueue + 1);
        LegacyInputSinkData::GetTransform((LegacyInputSinkData *)(v22 + 32), v41);
        v27 = _mm_unpacklo_ps(
                (__m128)COERCE_UNSIGNED_INT((float)(int)a2),
                (__m128)COERCE_UNSIGNED_INT((float)SHIDWORD(v27))).m128_u64[0];
        v24 = (float *)CInputTransform::ScreenPointToRelative((__int64)v36, (float *)&v27, v41);
        LODWORD(v27) = (int)*v24;
        HIDWORD(v27) = (int)v24[1];
        v16 = v27;
LABEL_14:
        v8 = v30;
      }
      v25 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      if ( v15 != WindowIdFromViewId )
      {
        *v33 = v15;
        *v34 = v16;
      }
    }
    *v8 = WindowIdFromViewId;
    *v35 = v14;
  }
  if ( (unsigned __int64)(v40 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v40);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(&v38, v11, v12);
  return 0LL;
}
