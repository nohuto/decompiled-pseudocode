/*
 * XREFs of MonitorFromHdev @ 0x1C005ECC8
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C001E6D0 (-UpdateUserScreen@@YAJXZ.c)
 *     UserGetMonitorDC @ 0x1C005EB90 (UserGetMonitorDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorFromHdev(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(_QWORD *)(gpDispInfo + 104); result && *(_QWORD *)(result + 232) != a1; result = *(_QWORD *)(result + 56) )
    ;
  return result;
}
