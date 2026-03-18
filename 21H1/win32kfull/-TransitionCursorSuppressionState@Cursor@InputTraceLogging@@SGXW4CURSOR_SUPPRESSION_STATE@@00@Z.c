/*
 * XREFs of ?TransitionCursorSuppressionState@Cursor@InputTraceLogging@@SGXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0xB026A
 * Callers:
 *     _TransitionCursorSuppressionState@8 @ 0xB0178 (_TransitionCursorSuppressionState@8.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@33@Z @ 0x1467BC (--$Write@U-$_tlgWrapSz@D@@U1@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU.c)
 *     ?CursorSuppressionToString@InputTraceLogging@@CGPBDW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x146961 (-CursorSuppressionToString@InputTraceLogging@@CGPBDW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 */

void __fastcall InputTraceLogging::Cursor::TransitionCursorSuppressionState(int a1, int a2, int a3)
{
  int v5; // ecx
  int v6; // [esp+Ch] [ebp-Ch] BYREF
  int v7; // [esp+10h] [ebp-8h] BYREF
  int v8; // [esp+14h] [ebp-4h] BYREF

  if ( (unsigned int)dword_2689E8 > 4 )
  {
    if ( (unsigned __int8)_tlgKeywordOn(8, 0) )
    {
      v6 = InputTraceLogging::CursorSuppressionToString(gCursorSuppressionState);
      v7 = InputTraceLogging::CursorSuppressionToString(a2);
      v8 = InputTraceLogging::CursorSuppressionToString(a1);
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        (int)&dword_2689E8,
        v5,
        v5,
        (int)&v8,
        (int)&v7,
        (int)&v6);
    }
  }
}
