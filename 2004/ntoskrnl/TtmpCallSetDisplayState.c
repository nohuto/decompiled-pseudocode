/*
 * XREFs of TtmpCallSetDisplayState @ 0x1408F93CC
 * Callers:
 *     TtmpPushTerminalDisplayStateOntoDevice @ 0x1408F9CD8 (TtmpPushTerminalDisplayStateOntoDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     TtmpStartCallout @ 0x1408F9F5C (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1408FA048 (TtmpStopCallout.c)
 *     TtmiLogError @ 0x1408FF6C0 (TtmiLogError.c)
 */

void __fastcall TtmpCallSetDisplayState(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall *v3)(_QWORD, _QWORD, _QWORD); // rdi
  int v7; // ebx
  _OWORD v8[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  v3 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a2 + 56);
  if ( v3 )
  {
    memset(v8, 0, sizeof(v8));
    v9 = 0LL;
    TtmpStartCallout((unsigned int)v8, a1, a2, 4, (__int64)v3, a3);
    v7 = v3(*(_QWORD *)(a2 + 24), a3, *(unsigned int *)(a1 + 120));
    TtmpStopCallout(v8, (unsigned int)v7);
    if ( v7 < 0 )
      TtmiLogError("TtmpCallSetDisplayState", 2441LL, (unsigned int)v7, 0xFFFFFFFFLL);
  }
}
