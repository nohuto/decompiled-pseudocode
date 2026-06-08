/*
 * XREFs of InitAcpiIdleDomain @ 0x1C002A0EC
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1C0024710 (AcpiCStateNotifyWorker.c)
 *     InitAcpiProcessorDomains @ 0x1C002A3A4 (InitAcpiProcessorDomains.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     Display_CSD @ 0x1C0005D84 (Display_CSD.c)
 *     AcpiEval_CSD @ 0x1C00250B0 (AcpiEval_CSD.c)
 *     ValidateAcpiIdleDomain @ 0x1C002AE48 (ValidateAcpiIdleDomain.c)
 */

__int64 __fastcall InitAcpiIdleDomain(__int64 a1, unsigned int **a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int *v9; // rdi
  int v10; // eax
  unsigned int *v11; // rcx
  unsigned int *v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  v6 = AcpiEval_CSD(a1, &v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = a3;
    v9 = v13;
    v10 = ValidateAcpiIdleDomain(v13, v8);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v7 = 0;
      Display_CSD(v9);
      v11 = 0LL;
      *a2 = v9;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x10u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0xCu,
          (__int64)&WPP_6ae0cf8577b33ee5b85cfe3be672fd7c_Traceguids,
          v10);
      v11 = v13;
    }
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
  }
  else if ( v6 == -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0xAu,
        (__int64)&WPP_6ae0cf8577b33ee5b85cfe3be672fd7c_Traceguids);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_6ae0cf8577b33ee5b85cfe3be672fd7c_Traceguids,
      v6);
  }
  return v7;
}
