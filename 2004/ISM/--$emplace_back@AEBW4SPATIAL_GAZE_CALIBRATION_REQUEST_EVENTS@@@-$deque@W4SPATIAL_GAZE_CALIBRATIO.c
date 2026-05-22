/*
 * XREFs of ??$emplace_back@AEBW4SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS@@@?$deque@W4SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS@@V?$allocator@W4SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS@@@std@@@std@@QEAAXAEBW4SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS@@@Z @ 0x1800DB0A4
 * Callers:
 *     ?UpdateState@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAAJ_J@Z @ 0x1800DCD40 (-UpdateState@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAAJ_J.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@W4SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS@@V?$allocator@W4SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS@@@std@@@std@@AEAAX_K@Z @ 0x1800DD400 (-_Growmap@-$deque@W4SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS@@V-$allocator@W4SPATIAL_GAZE_CALIBRA.c)
 */

__int64 __fastcall std::deque<enum SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS>::emplace_back<enum SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS const &>(
        _QWORD *a1,
        unsigned int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 result; // rax

  v4 = a1[4];
  v5 = a1[3];
  if ( (((_BYTE)v4 + (_BYTE)v5) & 3) == 0 && a1[2] <= (unsigned __int64)(v4 + 4) >> 2 )
  {
    std::deque<enum SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS>::_Growmap(a1);
    v5 = a1[3];
  }
  v6 = v5 & (4LL * a1[2] - 1);
  a1[3] = v6;
  v7 = v6 + a1[4];
  v8 = a1[1];
  v9 = (v7 >> 2) & (a1[2] - 1LL);
  if ( !*(_QWORD *)(v8 + 8 * v9) )
  {
    *(_QWORD *)(a1[1] + 8 * v9) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v8 = a1[1];
  }
  result = *a2;
  *(_DWORD *)(*(_QWORD *)(v8 + 8 * v9) + 4 * (v7 & 3)) = result;
  ++a1[4];
  return result;
}
