/*
 * XREFs of ConvertMonitorModeTimingType @ 0x1C0169CE4
 * Callers:
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C0169960 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseDisplayIDForMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C02F6104 (-_ParseDisplayIDForMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertMonitorModeTimingType(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rax

  v2 = (int)a1;
  switch ( (_DWORD)a1 )
  {
    case 1:
      *a2 = 1;
      return 0LL;
    case 2:
      *a2 = 2;
      return 0LL;
    case 3:
      *a2 = 3;
      return 0LL;
    case 4:
      *a2 = 4;
      return 0LL;
  }
  v5 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v5 + 24) = v2;
  WdLogEvent5_WdError(v5);
  *a2 = 0;
  return 3223192354LL;
}
