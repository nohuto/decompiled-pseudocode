/*
 * XREFs of ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x1801B2090
 * Callers:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z @ 0x1801ADF04 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x1801ADF38 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x1804619CC (--0hresult_error@winrt@@QEAA@Uhresult@1@@Z.c)
 * Callees:
 *     RoOriginateLanguageException_0 @ 0x180091E71 (RoOriginateLanguageException_0.c)
 */

__int64 winrt::hresult_error::originate()
{
  RoOriginateLanguageException_0();
  return WINRT_GetRestrictedErrorInfo();
}
