/*
 * XREFs of ValidatePccEntry @ 0x1C002AA00
 * Callers:
 *     InitAcpiLegacyPcc @ 0x1C0034A74 (InitAcpiLegacyPcc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall ValidatePccEntry(_DWORD *a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v2; // r9

  v1 = -1073741811;
  if ( !qword_1C00138E0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x30u,
        (__int64)&WPP_ba3a613378173fc61268b8e1c1c8ad8d_Traceguids);
    return v1;
  }
  if ( *a1 > (unsigned int)(dword_1C00138E8 - 4) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v1;
    v2 = 49;
LABEL_7:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v2,
      (__int64)&WPP_ba3a613378173fc61268b8e1c1c8ad8d_Traceguids,
      KeGetPcr()->Prcb.Number);
    return v1;
  }
  if ( a1[1] <= (unsigned int)(dword_1C00138E8 - 4) )
    return 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v2 = 50;
    goto LABEL_7;
  }
  return v1;
}
