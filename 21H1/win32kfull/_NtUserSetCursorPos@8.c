/*
 * XREFs of _NtUserSetCursorPos@8 @ 0xAE922
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzSetCursorPos@@YG_NHH@Z @ 0x7C9A8 (-zzzSetCursorPos@@YG_NHH@Z.c)
 *     _UserGetLastError@0 @ 0xAC854 (_UserGetLastError@0.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ @ 0xAFB6A (--1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z @ 0xF0204 (--0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z.c)
 *     _WPP_RECORDER_SF_D@24 @ 0x147D5C (_WPP_RECORDER_SF_D@24.c)
 *     _WPP_RECORDER_SF_dd@28 @ 0x147DEC (_WPP_RECORDER_SF_dd@28.c)
 */

int __thiscall NtUserSetCursorPos(void *this, struct tagPOINT *a2, LONG a3)
{
  unsigned __int8 v3; // al
  int v4; // esi
  char LastError; // al
  _BYTE v7[4]; // [esp+Ch] [ebp-4h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dd(this, 25, &WPP_8d5a59efe0a33d1aba6a7f19e91869d8_Traceguids, (char)a2, a3);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v7,
    "SetCursorPos",
    0);
  EnterCrit(0, 1);
  v3 = zzzSetCursorPos(a2, a3);
  v4 = v3;
  if ( !v3 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = (unsigned __int8)UserGetLastError();
    WPP_RECORDER_SF_D(20, 26, &WPP_8d5a59efe0a33d1aba6a7f19e91869d8_Traceguids, LastError);
  }
  UserSessionSwitchLeaveCrit();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v7);
  return v4;
}
