/*
 * XREFs of PnpCallDriverEntry @ 0x14075B558
 * Callers:
 *     IopLoadDriver @ 0x140725EF8 (IopLoadDriver.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     PnpFreeWatchdog @ 0x14035B3E4 (PnpFreeWatchdog.c)
 *     ExDeleteTimer @ 0x14035B430 (ExDeleteTimer.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PnpEnableWatchdog @ 0x14070AF34 (PnpEnableWatchdog.c)
 *     PnpRecordBlackbox @ 0x14070AF90 (PnpRecordBlackbox.c)
 *     PnpWatchdogEtwWrite @ 0x1408A7474 (PnpWatchdogEtwWrite.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCallDriverEntry(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // rbx
  int v7; // edx
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  v9[0] = 0LL;
  v9[1] = a1;
  v9[2] = KeGetCurrentThread();
  v4 = PnpEnableWatchdog(5, (__int64)v9);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 88))(a1, a2);
  if ( v4 )
  {
    v6 = v4[1];
    ExDeleteTimer(*(_QWORD *)(v6 + 56), 1, 1, 0LL);
    *(_QWORD *)(v6 + 56) = 0LL;
    if ( *(int *)(v6 + 96) > 0 )
      KeWaitForSingleObject((PVOID)(v6 + 104), Executive, 0, 0, 0LL);
    ExFreePoolWithTag((PVOID)v6, 0x54645750u);
    v7 = *((_DWORD *)v4 + 4);
    v4[1] = 0LL;
    PnpRecordBlackbox(0LL, v7);
    if ( *((_BYTE *)v4 + 32) )
      PnpWatchdogEtwWrite(v4, 0LL);
    PnpFreeWatchdog(v4);
  }
  return v5;
}
