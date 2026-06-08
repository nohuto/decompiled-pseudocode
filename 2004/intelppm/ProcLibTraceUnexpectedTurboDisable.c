/*
 * XREFs of ProcLibTraceUnexpectedTurboDisable @ 0x1C0008534
 * Callers:
 *     SetGV3PerfState @ 0x1C00019F0 (SetGV3PerfState.c)
 *     SetGV3PerfStateAndTurbo @ 0x1C0007590 (SetGV3PerfStateAndTurbo.c)
 *     SetTurboDisablePolicy @ 0x1C00077A0 (SetTurboDisablePolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0004280 (__security_check_cookie.c)
 *     _tlgKeywordOn @ 0x1C00085A8 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00085D4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void __fastcall ProcLibTraceUnexpectedTurboDisable(__int64 a1)
{
  int v1; // ecx
  int v2; // r8d
  int v3; // r9d
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C0017038 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(a1, 0x200000000000LL) )
      tlgWriteTransfer_EtwWriteTransfer(v1, (int)&dword_1C00133C4, v2, v3, 2u, &v4);
  }
}
