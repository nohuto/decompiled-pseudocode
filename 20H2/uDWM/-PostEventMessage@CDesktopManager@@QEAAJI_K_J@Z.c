/*
 * XREFs of ?PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z @ 0x180086760
 * Callers:
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x18009F678 (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 *     ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x18009F7A4 (-PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDesktopManager::PostEventMessage(HANDLE *this, UINT a2, WPARAM a3, LPARAM a4)
{
  unsigned int v4; // ebx
  DWORD ThreadId; // eax
  signed int LastError; // eax

  v4 = 0;
  if ( this[83] )
  {
    SetLastError(0);
    ThreadId = GetThreadId(this[83]);
    if ( !PostThreadMessageW(ThreadId, a2, a3, a4) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      v4 = LastError;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D1D48, 1LL, LastError, 0xA83u);
    }
  }
  else
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D1D48, 1LL, -2147467259, 0xA80u);
  }
  return v4;
}
