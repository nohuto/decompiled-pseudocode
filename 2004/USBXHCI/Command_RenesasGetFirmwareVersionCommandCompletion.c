/*
 * XREFs of Command_RenesasGetFirmwareVersionCommandCompletion @ 0x1C002DE90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 */

LONG __fastcall Command_RenesasGetFirmwareVersionCommandCompletion(__int64 a1)
{
  __int64 *v1; // rbx
  char v2; // cl
  __int64 v3; // rdi

  v1 = *(__int64 **)(a1 + 48);
  v2 = *((_BYTE *)v1 + 43);
  v3 = *v1;
  if ( v2 == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v3 + 16),
        4,
        7,
        17,
        (__int64)&WPP_36fa723b951d376375e8eba1d8934b4f_Traceguids,
        *((_BYTE *)v1 + 41),
        *((_DWORD *)v1 + 10));
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 328LL) = ((unsigned __int64)*((unsigned __int8 *)v1 + 41) << 8) | (unsigned __int8)*((_DWORD *)v1 + 10);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 16), 3, 7, 18, (__int64)&WPP_36fa723b951d376375e8eba1d8934b4f_Traceguids, v2);
  }
  return KeSetEvent((PRKEVENT)(v1 + 13), 0, 0);
}
