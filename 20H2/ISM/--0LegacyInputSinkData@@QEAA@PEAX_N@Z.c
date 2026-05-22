/*
 * XREFs of ??0LegacyInputSinkData@@QEAA@PEAX_N@Z @ 0x180043D60
 * Callers:
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x180017200 (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x1800F1084 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 * Callees:
 *     ExceptionSafeNtDuplicateCompositionInputSink @ 0x180002D48 (ExceptionSafeNtDuplicateCompositionInputSink.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800179A4 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     ??$?4V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@$0A@@?$variant@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x180043CD4 (--$-4V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompos.c)
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F0E44 (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
LegacyInputSinkData *__fastcall LegacyInputSinkData::LegacyInputSinkData(LegacyInputSinkData *this, __int64 a2)
{
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 16) = 0;
  *((_BYTE *)this + 20) = 0;
  *((_WORD *)this + 12) = 0;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 9) = 0;
  *((_BYTE *)this + 28) = 0;
  *((_BYTE *)this + 36) = 0;
  memset_0((char *)this + 40, 0, 0x40uLL);
  *((_BYTE *)this + 40) = 0;
  *((_BYTE *)this + 96) = 0;
  memset_0((char *)this + 104, 0, 0x40uLL);
  *((_BYTE *)this + 104) = 0;
  *((_BYTE *)this + 160) = 0;
  memset_0((char *)this + 168, 0, 0x40uLL);
  *((_BYTE *)this + 168) = 0;
  *((_BYTE *)this + 224) = 0;
  memset_0((char *)this + 232, 0, 0x40uLL);
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 288) = 0;
  memset_0((char *)this + 296, 0, 0x40uLL);
  *((_BYTE *)this + 296) = 0;
  *((_BYTE *)this + 352) = 0;
  v8 = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::reset(
    &v8,
    0LL);
  v4 = ExceptionSafeNtDuplicateCompositionInputSink(a2);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0x2B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\legacyinputsinkdata.cpp",
      (const char *)(unsigned int)v4,
      v6);
    __debugbreak();
  }
  std::variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>,0>(
    (__int64)this,
    &v8);
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v8);
  return this;
}
