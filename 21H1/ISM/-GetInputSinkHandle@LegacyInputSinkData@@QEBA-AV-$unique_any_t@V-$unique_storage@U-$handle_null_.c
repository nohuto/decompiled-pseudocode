/*
 * XREFs of ?GetInputSinkHandle@LegacyInputSinkData@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@XZ @ 0x180044574
 * Callers:
 *     ?CreateOwningRefOfInputSink@LegacyInputSinkData@@QEAAXXZ @ 0x180044528 (-CreateOwningRefOfInputSink@LegacyInputSinkData@@QEAAXXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180017974 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800F136C (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall LegacyInputSinkData::GetInputSinkHandle(LegacyInputSinkData *this, __int64 *a2)
{
  void *WeakInputSinkHandle; // rax
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::reset(
    a2,
    0LL);
  WeakInputSinkHandle = LegacyInputSinkData::GetWeakInputSinkHandle(this);
  if ( (int)NtDuplicateCompositionInputSink(WeakInputSinkHandle) < 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      64LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\legacyinputsinkdata.cpp",
      v5);
    __debugbreak();
  }
  return a2;
}
