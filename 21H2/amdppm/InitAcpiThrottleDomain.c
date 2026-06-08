/*
 * XREFs of InitAcpiThrottleDomain @ 0x1C00327EC
 * Callers:
 *     InitAcpiProcessorDomains @ 0x1C00326BC (InitAcpiProcessorDomains.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003B54 (WPP_RECORDER_SF_D.c)
 *     Display_xSD @ 0x1C000767C (Display_xSD.c)
 *     AcpiEval_PSD_TSD @ 0x1C0027430 (AcpiEval_PSD_TSD.c)
 *     ValidateAcpi_PSD_TSD @ 0x1C002BEC4 (ValidateAcpi_PSD_TSD.c)
 */

__int64 __fastcall InitAcpiThrottleDomain(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  unsigned int *v4; // rdi
  int v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+28h] [rbp-10h]
  unsigned int *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v2 = AcpiEval_PSD_TSD(a1, 1146311775, &v8);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = v8;
    v3 = ValidateAcpi_PSD_TSD(v8, 0);
    if ( v3 >= 0 )
    {
      v3 = 0;
      Display_xSD(v4, "_TSD");
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x2000u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = v3;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x12u,
          (__int64)&WPP_6ae0cf8577b33ee5b85cfe3be672fd7c_Traceguids,
          v7);
      }
      v4 = v8;
    }
  }
  else
  {
    v4 = 0LL;
    if ( v2 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0x10u,
          (__int64)&WPP_6ae0cf8577b33ee5b85cfe3be672fd7c_Traceguids);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = v2;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x11u,
        (__int64)&WPP_6ae0cf8577b33ee5b85cfe3be672fd7c_Traceguids,
        v6);
    }
  }
  *(_QWORD *)(a1 + 504) = v4;
  return (unsigned int)v3;
}
