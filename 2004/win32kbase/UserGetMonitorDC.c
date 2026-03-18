/*
 * XREFs of UserGetMonitorDC @ 0x1C00A52E8
 * Callers:
 *     hdcOpenDCW @ 0x1C0079530 (hdcOpenDCW.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x1C00811B0 (GreUnlockVisRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0093FA0 (GetMonitorDC.c)
 *     _ReleaseDC @ 0x1C00A53A0 (_ReleaseDC.c)
 *     LookupDC @ 0x1C00A53D0 (LookupDC.c)
 *     GreLockVisRgn @ 0x1C00A5B80 (GreLockVisRgn.c)
 *     MonitorFromHdev @ 0x1C00A5D50 (MonitorFromHdev.c)
 */

__int64 __fastcall UserGetMonitorDC(__int64 a1)
{
  __int64 MonitorDC; // rbx
  struct tagMONITOR *v2; // rdi
  __int64 v3; // rax
  __int64 DCEx; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // r8d

  MonitorDC = 0LL;
  v2 = (struct tagMONITOR *)MonitorFromHdev(a1);
  if ( v2 )
  {
    v3 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448);
    if ( v3 )
    {
      DCEx = GetDCEx(*(_QWORD **)(*(_QWORD *)(v3 + 8) + 24LL), 0LL, 0x800003u);
      if ( DCEx )
      {
        GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
        v5 = LookupDC(DCEx, 1LL);
        MonitorDC = GetMonitorDC(v5, v2, 1);
        ReleaseDC(DCEx);
        GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v6, v7);
      }
    }
  }
  return MonitorDC;
}
