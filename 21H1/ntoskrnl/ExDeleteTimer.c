/*
 * XREFs of ExDeleteTimer @ 0x14035B430
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1407013FC (EtwpFreeLoggerContext.c)
 *     PnpDisableWatchdog @ 0x14070AEC0 (PnpDisableWatchdog.c)
 *     PnpCallDriverEntry @ 0x14075B558 (PnpCallDriverEntry.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x14097B6C4 (CancelTimerCallbacksAndDeleteTimer.c)
 * Callees:
 *     KeDisableTimer2 @ 0x14035B750 (KeDisableTimer2.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x14035BB94 (ExpCheckForFreedEnhancedTimer.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall ExDeleteTimer(ULONG_PTR a1, char a2, char a3, unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  ULONG_PTR v11; // rax
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  ExpCheckForFreedEnhancedTimer(a1);
  if ( a4 )
  {
    v11 = *a4;
    if ( (_DWORD)v11 )
      KeBugCheckEx(0xC7u, 9uLL, 1uLL, v11, 0LL);
    *(_QWORD *)(a1 + 136) = KiWaitNever ^ __ROR8__(
                                            a1 ^ _byteswap_uint64(KiWaitAlways ^ *((_QWORD *)a4 + 1)),
                                            KiWaitNever);
    v8 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ *((_QWORD *)a4 + 2)), KiWaitNever);
    *(_QWORD *)(a1 + 144) = v8;
  }
  v12[1] = a1;
  v12[0] = ExpFinalizeTimerDeletion;
  LOBYTE(v9) = a3;
  LOBYTE(v8) = a2;
  return KeDisableTimer2(a1, v8, v9, v12);
}
