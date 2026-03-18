/*
 * XREFs of ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x1C01AA55C
 * Callers:
 *     ?W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C012D540 (-W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C0010EF0 (-EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 */

void CPTPProcessor::TraceEnvironment(void)
{
  CBaseInput *v0; // r9

  if ( gpHidInput && CBaseInput::_sessionInitialized && dword_1C024B170 && tlgKeywordOn((__int64)&dword_1C024B170, 1LL) )
    CBaseInput::EnumDevices(
      v0,
      0LL,
      (unsigned __int8 (__fastcall *)(struct DEVICEINFO *, void *))lambda_8a7876a6fd1a6f48c562081de69d6664_::_lambda_invoker_cdecl_);
}
