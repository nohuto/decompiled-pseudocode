/*
 * XREFs of ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x14003AD80
 * Callers:
 *     ??_G?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x1400216B8 (--_G-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x140025044 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14001B7B0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::SemaphoreValue::~SemaphoreValue(wil::details_abi::SemaphoreValue *this, void *a2)
{
  wil::details *v3; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 1);
  if ( v3 )
    wil::details::CloseHandle(v3, a2);
  if ( *(_QWORD *)this )
    wil::details::CloseHandle(*(wil::details **)this, a2);
}
