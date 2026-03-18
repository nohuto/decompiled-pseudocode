/*
 * XREFs of RIMFindSiblingPointerDeviceForMouse @ 0x1C006F364
 * Callers:
 *     RIMCreateDev @ 0x1C0027880 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C0150BC8 (RIMVirtCreateDev.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C017FD08 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     RawInputManagerDeviceObjectReference @ 0x1C0021BF0 (RawInputManagerDeviceObjectReference.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     RIMIsParentCommon @ 0x1C0161D6C (RIMIsParentCommon.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFindSiblingPointerDeviceForMouse(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r14
  __int64 *v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rdx
  int v10; // eax

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, (_DWORD)a2, 1, 66, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, a1);
  }
  if ( *(_BYTE *)(a1 + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  RIMLockExclusive((__int64)&gObListLock);
  v6 = (__int64 *)gObRimDevList;
  v7 = 0;
  *v4 = 0LL;
  while ( v6 != &gObRimDevList )
  {
    if ( *(_BYTE *)(((unsigned __int64)(v6 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v6 - 2) >> 64))
                  + 0x30) == 2 )
    {
      v10 = *(_DWORD *)(((unsigned __int64)(v6 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v6 - 2) >> 64))
                      + 0xB8);
      if ( (v10 & 0x2000) == 0
        && (v10 & 0x400) == 0
        && (*(_DWORD *)(((unsigned __int64)(v6 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v6 - 2) >> 64))
                      + 0xC8) & 0x80u) != 0 )
      {
        v8 = (unsigned __int64)(v6 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v6 - 2) >> 64);
        if ( (unsigned int)RIMIsParentCommon(
                             a1,
                             v8,
                             *(_QWORD *)(v8 + 464),
                             *(unsigned __int16 *)(*(_QWORD *)(v8 + 464) + 110LL),
                             *(_WORD *)(*(_QWORD *)(v8 + 464) + 112LL)) )
        {
          RawInputManagerDeviceObjectReference(v6 - 2);
          *v4 = v6 - 2;
          v7 = 1;
          break;
        }
      }
    }
    v6 = (__int64 *)*v6;
  }
  qword_1C024E368 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return v7;
}
