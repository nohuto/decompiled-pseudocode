/*
 * XREFs of RIMFindSiblingMouseDevice @ 0x1C01640F4
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C00AF298 (RIMAllocateHidDesc.c)
 * Callees:
 *     RawInputManagerDeviceObjectReference @ 0x1C00176A0 (RawInputManagerDeviceObjectReference.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 *     RIMIsParentCommon @ 0x1C01642CC (RIMIsParentCommon.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFindSiblingMouseDevice(int a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rbx
  unsigned int v11; // ebp
  __int64 v12; // rdx
  int v13; // eax
  char v15; // [rsp+28h] [rbp-20h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, a2, 1, 65, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v15);
  }
  RIMLockExclusive((__int64)&gObListLock);
  if ( (*(_DWORD *)(v4 + 200) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  v10 = (__int64 *)gObRimDevList;
  v11 = 0;
  *a3 = 0LL;
  while ( v10 != &gObRimDevList )
  {
    if ( !*(_BYTE *)(((unsigned __int64)(v10 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v10 - 2) >> 64))
                   + 0x30) )
    {
      v13 = *(_DWORD *)(((unsigned __int64)(v10 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v10 - 2) >> 64))
                      + 0xB8);
      if ( (v13 & 0x2000) == 0 && (v13 & 0x400) == 0 )
      {
        v12 = (unsigned __int64)(v10 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v10 - 2) >> 64);
        if ( (unsigned int)RIMIsParentCommon(v4, v12, a1, *(unsigned __int16 *)(v12 + 890), *(_WORD *)(v12 + 892)) )
        {
          RawInputManagerDeviceObjectReference(v10 - 2);
          *a3 = v10 - 2;
          v11 = 1;
          break;
        }
      }
    }
    v10 = (__int64 *)*v10;
  }
  qword_1C0250368 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return v11;
}
