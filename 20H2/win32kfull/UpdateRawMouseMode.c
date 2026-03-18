/*
 * XREFs of UpdateRawMouseMode @ 0x1C00D5378
 * Callers:
 *     LockCaptureWindow @ 0x1C00397E4 (LockCaptureWindow.c)
 *     SetNewForegroundQueue @ 0x1C00BF270 (SetNewForegroundQueue.c)
 *     zzzAttachToQueue @ 0x1C00BFE38 (zzzAttachToQueue.c)
 *     SetWakeBit @ 0x1C00D4F30 (SetWakeBit.c)
 *     EditionUpdateRawMouseMode @ 0x1C00D5350 (EditionUpdateRawMouseMode.c)
 *     TransferWakeBit @ 0x1C00D76A0 (TransferWakeBit.c)
 *     DestroyThreadHidObjects @ 0x1C00FEC90 (DestroyThreadHidObjects.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00FF340 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     UnlockCaptureWindow @ 0x1C0103550 (UnlockCaptureWindow.c)
 * Callees:
 *     PtiMouseFromQ @ 0x1C00D53DC (PtiMouseFromQ.c)
 *     HasHidTable @ 0x1C00D5400 (HasHidTable.c)
 */

__int64 __fastcall UpdateRawMouseMode(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // ecx

  result = gpqForeground;
  if ( a1 == gpqForeground )
  {
    v4 = PtiMouseFromQ(a1, a2);
    if ( !(unsigned int)HasHidTable(v4)
      || (v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiMouseFromQ(a1, v5) + 424) + 832LL) + 100LL),
          result = 1LL,
          (v6 & 1) == 0) )
    {
      result = 0LL;
    }
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy = result;
  }
  return result;
}
