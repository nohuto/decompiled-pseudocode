/*
 * XREFs of rimReclaimHoldingFrame @ 0x1C01743B8
 * Callers:
 *     RIMRemoveHoldingFrame @ 0x1C005DBE8 (RIMRemoveHoldingFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C01730A0 (RIMAbandonPointerDeviceFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x1C0173BFC (rimFindAndReclaimHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C0173CBC (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     rimFreePointerRawDataListWorker @ 0x1C0173C60 (rimFreePointerRawDataListWorker.c)
 */

void __fastcall rimReclaimHoldingFrame(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a3 + 72);
  if ( v4 )
  {
    Win32FreePool(v4);
    *(_QWORD *)(a3 + 72) = 0LL;
  }
  rimFreePointerRawDataListWorker(*(_QWORD *)(a3 + 56), a2, a3, a4);
  *(_DWORD *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_DWORD *)(a3 + 40) = 0;
  *(_DWORD *)(a3 + 44) = 0;
  *(_DWORD *)(a3 + 48) = 0;
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)(a3 + 64) = 0LL;
  *(_QWORD *)(a3 + 80) = 0LL;
}
