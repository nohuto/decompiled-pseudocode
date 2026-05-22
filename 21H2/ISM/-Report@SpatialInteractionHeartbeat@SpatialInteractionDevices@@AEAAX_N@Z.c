/*
 * XREFs of ?Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z @ 0x18016E92C
 * Callers:
 *     ??1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x18016A010 (--1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ?OnParse@SpatialInteractionHeartbeat@SpatialInteractionDevices@@QEAAXI@Z @ 0x18016D6E4 (-OnParse@SpatialInteractionHeartbeat@SpatialInteractionDevices@@QEAAXI@Z.c)
 *     ?OnPrepareParsing@SpatialInteractionHeartbeat@SpatialInteractionDevices@@QEAAXAEBUHID_HANDLE@2@@Z @ 0x18016D71C (-OnPrepareParsing@SpatialInteractionHeartbeat@SpatialInteractionDevices@@QEAAXAEBUHID_HANDLE@2@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??$Telemetry_SpatialInteractionHeartbeat_ButtonCounters@$06@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEBU_GUID@@GGGIAEAY06$$CBW4ButtonFlags@1@AEAY06$$CBI@Z @ 0x180168ACC (--$Telemetry_SpatialInteractionHeartbeat_ButtonCounters@$06@SpatialInteractionTrace@SpatialInter.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionHeartbeat::Report(
        SpatialInteractionDevices::SpatialInteractionHeartbeat *this,
        char a2)
{
  ULONGLONG TickCount64; // rax
  int v5; // edx
  unsigned __int64 i; // rcx
  __int64 v7; // [rsp+28h] [rbp-50h]
  _DWORD v8[8]; // [rsp+40h] [rbp-38h] BYREF

  TickCount64 = GetTickCount64();
  if ( a2
    || TickCount64 > SpatialInteractionDevices::SpatialInteractionHeartbeat::ReportIntervalTickCount64
                   + *((_QWORD *)this + 3) )
  {
    *((_QWORD *)this + 3) = TickCount64;
    v5 = _InterlockedExchange((volatile __int32 *)this + 8, 0);
    for ( i = 0LL; i < 7; ++i )
      v8[i] = _InterlockedExchange((volatile __int32 *)((char *)this + i * 4 + 36), 0);
    SpatialInteractionDevices::SpatialInteractionTrace::Telemetry_SpatialInteractionHeartbeat_ButtonCounters<7>(
      (__int64)this,
      *((_WORD *)this + 8),
      *((_WORD *)this + 9),
      *((_WORD *)this + 10),
      v5,
      v7,
      (__int64)v8);
  }
}
