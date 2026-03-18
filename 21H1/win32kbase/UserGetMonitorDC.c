/*
 * XREFs of UserGetMonitorDC @ 0x1C006A2F0
 * Callers:
 *     hdcOpenDCW @ 0x1C0069E20 (hdcOpenDCW.c)
 * Callees:
 *     _ReleaseDC @ 0x1C006A3B0 (_ReleaseDC.c)
 *     LookupDC @ 0x1C006A3E0 (LookupDC.c)
 *     MonitorFromHdev @ 0x1C006A428 (MonitorFromHdev.c)
 *     GreLockVisRgn @ 0x1C0076BF0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C007A540 (GreUnlockVisRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C00908A8 (GetMonitorDC.c)
 */

__int64 UserGetMonitorDC()
{
  __int64 MonitorDC; // rbx
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 DCEx; // rsi
  __int64 v4; // rax

  MonitorDC = 0LL;
  v1 = MonitorFromHdev();
  if ( v1 )
  {
    v2 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448);
    if ( v2 )
    {
      DCEx = GetDCEx(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 24LL), 0LL, 8388611LL);
      if ( DCEx )
      {
        GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
        v4 = LookupDC(DCEx, 1LL);
        MonitorDC = GetMonitorDC(v4, v1, 1LL);
        ReleaseDC(DCEx);
        GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
      }
    }
  }
  return MonitorDC;
}
