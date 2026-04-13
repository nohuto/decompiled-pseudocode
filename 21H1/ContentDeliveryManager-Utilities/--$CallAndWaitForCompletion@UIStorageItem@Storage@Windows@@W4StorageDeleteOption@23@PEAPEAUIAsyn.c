/*
 * XREFs of ??$CallAndWaitForCompletion@UIStorageItem@Storage@Windows@@W4StorageDeleteOption@23@PEAPEAUIAsyncAction@Foundation@3@$$ZW4423@@wil@@YAXPEAUIStorageItem@Storage@Windows@@P8123@EAAJW4StorageDeleteOption@23@PEAPEAUIAsyncAction@Foundation@3@@Z$$QEAW4423@@Z @ 0x18007B2F8
 * Callers:
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18007AD80 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004E758 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ??_9IStorageItem@Storage@Windows@@$BEI@AA @ 0x18004F004 (--_9IStorageItem@Storage@Windows@@$BEI@AA.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___CallAndWaitForCompletion_UIStorageItem_Storage_Windows__W4StorageDeleteOption_23_PEAPEAUIAsyncAction_Foundation_3___ZW4423__wil__YAXPEAUIStorageItem_Storage_Windows__P8123_EAAJW4StorageDeleteOption_23_PEAPEAUIAsyncAction_Foundation_3__Z__QEAW4423__Z(
        __int64 a1)
{
  int v1; // eax
  DWORD v2; // edx
  int v3; // r8d
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 =  Windows::Storage::IStorageItem::`vcall'{72,{flat}}(a1);
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x652,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v1);
    JUMPOUT(0x18007B384LL);
  }
  result = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(0LL, v2, v3);
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x632,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)result);
    __debugbreak();
  }
  return result;
}
