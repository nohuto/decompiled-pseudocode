/*
 * XREFs of UpdateRawMouseMode @ 0x1C0090198
 * Callers:
 *     SetNewForegroundQueue @ 0x1C0033BA0 (SetNewForegroundQueue.c)
 *     LockCaptureWindow @ 0x1C0036324 (LockCaptureWindow.c)
 *     zzzAttachToQueue @ 0x1C0038AB4 (zzzAttachToQueue.c)
 *     SetWakeBit @ 0x1C008FD50 (SetWakeBit.c)
 *     EditionUpdateRawMouseMode @ 0x1C0090170 (EditionUpdateRawMouseMode.c)
 *     TransferWakeBit @ 0x1C00B3110 (TransferWakeBit.c)
 *     DestroyThreadHidObjects @ 0x1C00F7A30 (DestroyThreadHidObjects.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00F8170 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     UnlockCaptureWindow @ 0x1C0102BB0 (UnlockCaptureWindow.c)
 * Callees:
 *     PtiMouseFromQ @ 0x1C00901FC (PtiMouseFromQ.c)
 *     HasHidTable @ 0x1C0090220 (HasHidTable.c)
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
      || (v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiMouseFromQ(a1, v5) + 416) + 832LL) + 100LL),
          result = 1LL,
          (v6 & 1) == 0) )
    {
      result = 0LL;
    }
    HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) = result;
  }
  return result;
}
