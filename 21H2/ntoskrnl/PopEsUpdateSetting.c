/*
 * XREFs of PopEsUpdateSetting @ 0x1407D1F48
 * Callers:
 *     PopEsWorker @ 0x1407813B0 (PopEsWorker.c)
 * Callees:
 *     PopTraceEsSetting @ 0x1403CDBEC (PopTraceEsSetting.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PopEsUpdateSetting()
{
  __int64 v0; // rcx
  _DWORD Buffer[4]; // [rsp+40h] [rbp-28h] BYREF

  Buffer[0] = PopEsMode;
  Buffer[2] = (unsigned __int8)byte_140C23375;
  Buffer[1] = dword_140C23370;
  ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_SETTING, Buffer, 0xCu, 0LL, 0LL, 0, 0);
  return PopTraceEsSetting(v0, dword_140C23370, byte_140C23375);
}
