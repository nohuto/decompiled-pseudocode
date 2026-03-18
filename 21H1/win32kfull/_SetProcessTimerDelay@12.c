/*
 * XREFs of _SetProcessTimerDelay@12 @ 0x156204
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SG_NXZ @ 0xA98AC (-SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SG_NXZ.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall SetProcessTimerDelay(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  int v4; // eax
  int v5; // edx
  _DWORD *v6; // esi
  _DWORD *v7; // ecx
  _DWORD *v8; // esi
  int v9; // ecx
  _DWORD *v10; // eax

  if ( a2 > (unsigned int)&loc_1B7740 )
    return -1073741584;
  if ( a3 > (unsigned int)&loc_927C0 )
    return -1073741583;
  if ( *a1 == _gpepCSRSS )
    return -1073741637;
  v4 = a1[159];
  v5 = a2 - a1[157];
  a1[159] = v5;
  a1[158] = a3;
  if ( v4 )
  {
    if ( v5 )
      goto LABEL_11;
    v8 = a1 + 161;
    v9 = a1[161];
    if ( *(_DWORD **)(*v8 + 4) == v8 )
    {
      v10 = (_DWORD *)a1[162];
      if ( (_DWORD *)*v10 == v8 )
      {
        *v10 = v9;
        *(_DWORD *)(v9 + 4) = v10;
        goto LABEL_11;
      }
    }
    goto LABEL_20;
  }
  if ( v5 )
  {
    v6 = a1 + 161;
    v7 = (_DWORD *)_gtmrAdjustmentListHead[1];
    if ( *v7 == _gtmrAdjustmentListHead[0] )
    {
      *v6 = _gtmrAdjustmentListHead[0];
      a1[162] = v7;
      *v7 = v6;
      _gtmrAdjustmentListHead[1] = v6;
      goto LABEL_11;
    }
LABEL_20:
    __fastfail(3u);
  }
LABEL_11:
  if ( !gbTimersProcActive )
  {
    gbRITAlerted = CRitTimerScanWakeSystem::SignalRitTimerScanWakeEvent();
    if ( gbRITAlerted != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  return 0;
}
