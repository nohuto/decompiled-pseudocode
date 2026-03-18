/*
 * XREFs of HasForegroundActivateRight @ 0x1C00AE0A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall HasForegroundActivateRight(__int64 a1)
{
  int v2; // edx
  __int128 *v3; // rax
  unsigned int v4; // ebx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&gForegroundActivateRightLock, 0LL);
  v3 = &xmmword_1C024C700;
  while ( *(_QWORD *)v3 != a1 )
  {
    v3 = (__int128 *)((char *)v3 + 8);
    if ( (__int64)v3 >= (__int64)&qword_1C024C728 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v2) = 4;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v2,
          13,
          13,
          (__int64)&WPP_15558b1eb0723b696cc38695125fa388_Traceguids,
          a1);
      }
      v4 = 0;
      goto LABEL_7;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v2,
      13,
      12,
      (__int64)&WPP_15558b1eb0723b696cc38695125fa388_Traceguids,
      a1);
  }
  v4 = 1;
LABEL_7:
  ExReleasePushLockExclusiveEx(&gForegroundActivateRightLock, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
