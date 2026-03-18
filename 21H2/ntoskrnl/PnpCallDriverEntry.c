/*
 * XREFs of PnpCallDriverEntry @ 0x140747DDC
 * Callers:
 *     IopLoadDriver @ 0x14074A178 (IopLoadDriver.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     PnpFreeWatchdog @ 0x1402D3C18 (PnpFreeWatchdog.c)
 *     ExDeleteTimer @ 0x1402D3D40 (ExDeleteTimer.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PnpEnableWatchdog @ 0x14074ECA8 (PnpEnableWatchdog.c)
 *     PnpRecordBlackbox @ 0x14074ED04 (PnpRecordBlackbox.c)
 *     PnpWatchdogEtwWrite @ 0x140950084 (PnpWatchdogEtwWrite.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCallDriverEntry(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rdx
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  v9[0] = 0LL;
  v9[1] = a1;
  v9[2] = KeGetCurrentThread();
  v4 = PnpEnableWatchdog(5LL, v9);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 88))(a1, a2);
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 8);
    ExDeleteTimer(*(_QWORD *)(v6 + 56), 1, 1, 0LL);
    *(_QWORD *)(v6 + 56) = 0LL;
    if ( *(int *)(v6 + 96) > 0 )
      KeWaitForSingleObject((PVOID)(v6 + 104), Executive, 0, 0, 0LL);
    ExFreePoolWithTag((PVOID)v6, 0x54645750u);
    v7 = *(unsigned int *)(v4 + 16);
    *(_QWORD *)(v4 + 8) = 0LL;
    PnpRecordBlackbox(0LL, v7);
    if ( *(_BYTE *)(v4 + 32) )
      PnpWatchdogEtwWrite(v4, 0LL);
    PnpFreeWatchdog((void *)v4);
  }
  return v5;
}
