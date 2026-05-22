/*
 * XREFs of ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@@Z @ 0x1800487C4
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800167F0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x180138310 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?HitTestForPoint@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@@Z @ 0x1801384C0 (-HitTestForPoint@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@@Z.c)
 *     ?HitTestForPointAndType@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@K@Z @ 0x180138530 (-HitTestForPointAndType@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@K@Z.c)
 *     ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x180139010 (-RequestUIAHitTest@DWMInputRouter@@QEAA-AU_GUID@@II@Z.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x180139304 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180011654 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x1800171D0 (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180017974 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180029D80 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180040E78 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045464 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     ??0HitTestResult@@QEAA@$$QEAU0@@Z @ 0x180048058 (--0HitTestResult@@QEAA@$$QEAU0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??0?$vector@PEAXV?$allocator@PEAX@std@@@std@@QEAA@_KAEBV?$allocator@PEAX@1@@Z @ 0x180148E10 (--0-$vector@PEAXV-$allocator@PEAX@std@@@std@@QEAA@_KAEBV-$allocator@PEAX@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HitTestHelper::HitTestRequestWithRetry(
        __int64 a1,
        __int128 *a2,
        __int64 (__fastcall ***a3)(_QWORD, __int128 *),
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 *InputSiteListFromDITCallbackStruct; // rbx
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // rdx
  __int128 v18; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+30h] [rbp-D0h]
  __int64 v20; // [rsp+38h] [rbp-C8h]
  _QWORD v21[4]; // [rsp+40h] [rbp-C0h] BYREF
  char v22; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[8]; // [rsp+380h] [rbp+280h] BYREF
  __int64 v24; // [rsp+388h] [rbp+288h] BYREF
  __int128 v25; // [rsp+390h] [rbp+290h]
  __int64 v26; // [rsp+3A0h] [rbp+2A0h] BYREF
  _OWORD v27[4]; // [rsp+3A8h] [rbp+2A8h] BYREF
  __int64 v28; // [rsp+3E8h] [rbp+2E8h]
  char v29; // [rsp+3F0h] [rbp+2F0h]
  int v30; // [rsp+3F4h] [rbp+2F4h]
  __int128 v31; // [rsp+400h] [rbp+300h] BYREF
  __int128 v32; // [rsp+410h] [rbp+310h]
  _BYTE v33[80]; // [rsp+420h] [rbp+320h]
  __int128 v34; // [rsp+470h] [rbp+370h]
  __int64 v35; // [rsp+480h] [rbp+380h]
  _BYTE v36[48]; // [rsp+490h] [rbp+390h] BYREF

  v4 = a4;
  v20 = a4;
  v21[3] = a1;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v36, "ISMHitTest", 0LL);
  v23[0] = 0;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  memset_0(v27, 0, 0x50uLL);
  v31 = *a2;
  v32 = a2[1];
  *(_OWORD *)v33 = a2[2];
  *(_OWORD *)&v33[16] = a2[3];
  *(_OWORD *)&v33[32] = a2[4];
  *(_OWORD *)&v33[48] = a2[5];
  *(_OWORD *)&v33[64] = a2[6];
  v34 = a2[7];
  v35 = *((_QWORD *)a2 + 16);
  v18 = 0LL;
  v19 = 0LL;
  *(_QWORD *)v33 = &v22;
  *(_DWORD *)&v33[8] = 100;
  v23[0] = (**a3)(a3, &v31);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::reset(
    &v26,
    *((__int64 *)&v32 + 1));
  if ( *(_DWORD *)&v33[8] > 0x64u )
  {
    v8 = std::vector<void *>::vector<void *>(v21, *(unsigned int *)&v33[8]);
    v9 = 0LL;
    v10 = 0LL;
    if ( &v18 == (__int128 *)v8 )
    {
      v11 = v18;
    }
    else
    {
      std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)&v18);
      v10 = *(_QWORD *)v8;
      v11 = *(_QWORD *)v8;
      *(_QWORD *)&v18 = *(_QWORD *)v8;
      v9 = *(_QWORD *)(v8 + 8);
      *((_QWORD *)&v18 + 1) = v9;
      v19 = *(_QWORD *)(v8 + 16);
      *(_QWORD *)v8 = 0LL;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = 0LL;
    }
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)v21);
    v31 = *a2;
    v32 = a2[1];
    *(_OWORD *)v33 = a2[2];
    *(_OWORD *)&v33[16] = a2[3];
    *(_OWORD *)&v33[32] = a2[4];
    *(_OWORD *)&v33[48] = a2[5];
    *(_OWORD *)&v33[64] = a2[6];
    v34 = a2[7];
    v35 = *((_QWORD *)a2 + 16);
    *(_QWORD *)v33 = v11;
    *(_DWORD *)&v33[8] = (v9 - v10) >> 3;
    v23[0] = (**a3)(a3, &v31);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::reset(
      &v26,
      *((__int64 *)&v32 + 1));
    v4 = v20;
  }
  if ( v23[0] )
  {
    InputSiteListFromDITCallbackStruct = InputSiteManager::GetInputSiteListFromDITCallbackStruct(v4, v21, (__int64)&v31);
    if ( &v24 != InputSiteListFromDITCallbackStruct )
    {
      std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(&v24, v12, v14);
      v24 = *InputSiteListFromDITCallbackStruct;
      v25 = *(_OWORD *)(InputSiteListFromDITCallbackStruct + 1);
      *InputSiteListFromDITCallbackStruct = 0LL;
      InputSiteListFromDITCallbackStruct[1] = 0LL;
      InputSiteListFromDITCallbackStruct[2] = 0LL;
    }
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(v21, v12, v14);
    v27[0] = *(_OWORD *)&v33[12];
    v27[1] = *(_OWORD *)&v33[28];
    v27[2] = *(_OWORD *)&v33[44];
    v27[3] = *(_OWORD *)&v33[60];
    v28 = v32;
    v29 = v34 & 1;
    v30 = *(_DWORD *)&v33[76];
  }
  HitTestResult::HitTestResult(a1, (__int64)v23);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)&v18);
  v16 = v26 - 1;
  if ( (unsigned __int64)(v26 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v26);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(&v24, v16, v15);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v36);
  return a1;
}
