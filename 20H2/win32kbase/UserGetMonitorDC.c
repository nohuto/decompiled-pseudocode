/*
 * XREFs of UserGetMonitorDC @ 0x1C005EB90
 * Callers:
 *     hdcOpenDCW @ 0x1C005DDD0 (hdcOpenDCW.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x1C003CF80 (GreUnlockVisRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C004D710 (GetMonitorDC.c)
 *     GreLockVisRgn @ 0x1C005E980 (GreLockVisRgn.c)
 *     _ReleaseDC @ 0x1C005EC50 (_ReleaseDC.c)
 *     LookupDC @ 0x1C005EC80 (LookupDC.c)
 *     MonitorFromHdev @ 0x1C005ECC8 (MonitorFromHdev.c)
 */

__int64 __fastcall UserGetMonitorDC(__int64 a1)
{
  __int64 MonitorDC; // rbx
  struct tagMONITOR *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r9
  int v5; // edx
  __int64 DCEx; // rsi
  int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // r8d

  MonitorDC = 0LL;
  v2 = (struct tagMONITOR *)MonitorFromHdev(a1);
  if ( v2 )
  {
    v3 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456);
    if ( v3 )
    {
      DCEx = GetDCEx(*(_QWORD **)(*(_QWORD *)(v3 + 8) + 24LL), 0LL, 8388611LL, v4);
      if ( DCEx )
      {
        GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), v5, v7);
        v8 = LookupDC(DCEx, 1LL);
        MonitorDC = GetMonitorDC(v8, v2, 1);
        ReleaseDC(DCEx);
        GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v9, v10);
      }
    }
  }
  return MonitorDC;
}
