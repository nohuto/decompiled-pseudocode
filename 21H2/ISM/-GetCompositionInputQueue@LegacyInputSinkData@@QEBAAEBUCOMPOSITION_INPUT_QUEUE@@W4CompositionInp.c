/*
 * XREFs of ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180017D40
 * Callers:
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180017B90 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@@Z @ 0x18001CCCC (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800B6608 (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800B6980 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@W4InputType@@PEA_KPEAU2@23@Z @ 0x180175308 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@W4InputType@@PEA_KPEAU2@23@Z.c)
 *     ?GetInputForwardInputSite@InputForwardProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputType@@PEAUHitTestResult@@@Z @ 0x180176AC8 (-GetInputForwardInputSite@InputForwardProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4I.c)
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800C6198 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800F127C (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 */

char *__fastcall LegacyInputSinkData::GetCompositionInputQueue(LegacyInputSinkData *a1, unsigned int a2)
{
  __int64 v4; // rax
  char *v5; // rbx
  char v6; // al
  bool v7; // cl
  void *WeakInputSinkHandle; // rax
  char v10; // al
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  const char *pExceptionObject; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v14; // [rsp+28h] [rbp-A0h]
  __int128 v15; // [rsp+38h] [rbp-90h] BYREF
  __int128 v16; // [rsp+48h] [rbp-80h]
  __int128 v17; // [rsp+58h] [rbp-70h]
  __int64 v18; // [rsp+68h] [rbp-60h]
  _BYTE v19[64]; // [rsp+70h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  switch ( a2 )
  {
    case 1u:
      v4 = 40LL;
      break;
    case 2u:
      v4 = 104LL;
      break;
    case 3u:
      v4 = 168LL;
      break;
    case 4u:
      v4 = 232LL;
      break;
    case 5u:
      v4 = 296LL;
      break;
    default:
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0x7F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\legacyinputsinkdata.cpp",
        "Invalid input type provided.",
        pExceptionObject);
      __debugbreak();
  }
  v5 = (char *)a1 + v4;
  v6 = *((_BYTE *)a1 + v4 + 56);
  v7 = v6 == 0;
  if ( a2 == 5 )
    v7 = 1;
  if ( v7 )
  {
    v15 = 0LL;
    v18 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    memset_0(v19, 0, sizeof(v19));
    WeakInputSinkHandle = LegacyInputSinkData::GetWeakInputSinkHandle(a1);
    NtQueryCompositionInputQueueAndTransform(WeakInputSinkHandle, a2, &v15, v19);
    v10 = v5[56];
    v11 = v16;
    *(_OWORD *)v5 = v15;
    v12 = v17;
    *((_OWORD *)v5 + 1) = v11;
    *(_QWORD *)&v11 = v18;
    *((_OWORD *)v5 + 2) = v12;
    *((_QWORD *)v5 + 6) = v11;
    if ( !v10 )
      v5[56] = 1;
  }
  else if ( !v6 )
  {
    pExceptionObject = (const char *)&std::bad_optional_access::`vftable';
    v14 = 0LL;
    throw (std::bad_optional_access *)&pExceptionObject;
  }
  return v5;
}
