/*
 * XREFs of PopEsUpdateSetting @ 0x1407BF298
 * Callers:
 *     PopEsWorker @ 0x14076E9E0 (PopEsWorker.c)
 * Callees:
 *     PopTraceEsSetting @ 0x1403CA45C (PopTraceEsSetting.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PopEsUpdateSetting()
{
  __int64 v0; // rcx
  _DWORD v2[4]; // [rsp+40h] [rbp-28h] BYREF

  v2[0] = PopEsMode;
  v2[2] = (unsigned __int8)byte_140C238F5;
  v2[1] = dword_140C238F0;
  ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_SETTING, (__int64)v2);
  return PopTraceEsSetting(v0, dword_140C238F0, byte_140C238F5);
}
