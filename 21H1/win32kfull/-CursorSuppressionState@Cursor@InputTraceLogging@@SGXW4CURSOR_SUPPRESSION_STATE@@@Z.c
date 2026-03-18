/*
 * XREFs of ?CursorSuppressionState@Cursor@InputTraceLogging@@SGXW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x156472
 * Callers:
 *     ?InputCoreProviderCallback@@YGXPBU_GUID@@KE_K1PAU_EVENT_FILTER_DESCRIPTOR@@PAX@Z @ 0x1564C2 (-InputCoreProviderCallback@@YGXPBU_GUID@@KE_K1PAU_EVENT_FILTER_DESCRIPTOR@@PAX@Z.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@@Z @ 0x1439C9 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT.c)
 *     ?CursorSuppressionToString@InputTraceLogging@@CGPBDW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x146961 (-CursorSuppressionToString@InputTraceLogging@@CGPBDW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 */

void InputTraceLogging::Cursor::CursorSuppressionState()
{
  int v0; // [esp+4h] [ebp-4h] BYREF

  if ( (unsigned int)dword_2689E8 > 4 && _tlgKeywordOn(&dword_2689E8, 8LL) )
  {
    v0 = (int)InputTraceLogging::CursorSuppressionToString(gCursorSuppressionState);
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (int)&dword_2689E8,
      byte_255324,
      0,
      0,
      (const char **)&v0);
  }
}
