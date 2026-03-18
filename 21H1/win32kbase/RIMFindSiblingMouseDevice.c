/*
 * XREFs of RIMFindSiblingMouseDevice @ 0x1C016A444
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C009E724 (RIMAllocateHidDesc.c)
 * Callees:
 *     RawInputManagerDeviceObjectReference @ 0x1C005A910 (RawInputManagerDeviceObjectReference.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     RIMIsParentCommon @ 0x1C016A61C (RIMIsParentCommon.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFindSiblingMouseDevice(int a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 *v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // rdx
  int v10; // eax
  char v12; // [rsp+28h] [rbp-20h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, a2, 1, 65, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids, v12);
  }
  RIMLockExclusive((__int64)&gObListLock);
  if ( (*(_DWORD *)(v4 + 200) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  v7 = (__int64 *)gObRimDevList;
  v8 = 0;
  *a3 = 0LL;
  while ( v7 != &gObRimDevList )
  {
    if ( !*(_BYTE *)(((unsigned __int64)(v7 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v7 - 2) >> 64))
                   + 0x30) )
    {
      v10 = *(_DWORD *)(((unsigned __int64)(v7 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v7 - 2) >> 64))
                      + 0xB8);
      if ( (v10 & 0x2000) == 0 && (v10 & 0x400) == 0 )
      {
        v9 = (unsigned __int64)(v7 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v7 - 2) >> 64);
        if ( (unsigned int)RIMIsParentCommon(v4, v9, a1, *(unsigned __int16 *)(v9 + 890), *(_WORD *)(v9 + 892)) )
        {
          RawInputManagerDeviceObjectReference(v7 - 2);
          *a3 = v7 - 2;
          v8 = 1;
          break;
        }
      }
    }
    v7 = (__int64 *)*v7;
  }
  qword_1C02562F8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return v8;
}
