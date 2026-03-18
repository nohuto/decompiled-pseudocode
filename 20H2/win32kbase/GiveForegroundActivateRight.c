/*
 * XREFs of GiveForegroundActivateRight @ 0x1C00637B0
 * Callers:
 *     DestroyProcessInfo @ 0x1C00620F8 (DestroyProcessInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 */

void __fastcall GiveForegroundActivateRight(__int64 a1)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&gForegroundActivateRightLock, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v2,
      13,
      11,
      (__int64)&WPP_15558b1eb0723b696cc38695125fa388_Traceguids,
      a1);
  }
  v3 = dword_1C024A7C0;
  *((_QWORD *)&xmmword_1C024A6F8 + dword_1C024A7C0) = a1;
  v4 = v3 + 1;
  if ( v4 == 5 )
    v4 = 0;
  dword_1C024A7C0 = v4;
  ExReleasePushLockExclusiveEx(&gForegroundActivateRightLock, 0LL);
  KeLeaveCriticalRegion();
}
