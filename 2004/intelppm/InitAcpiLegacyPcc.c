/*
 * XREFs of InitAcpiLegacyPcc @ 0x1C002177C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0021A14 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0009C90 (WPP_RECORDER_SF_dd.c)
 *     AcquirePccInterface @ 0x1C00224A8 (AcquirePccInterface.c)
 *     ValidatePccEntry @ 0x1C002EF18 (ValidatePccEntry.c)
 *     AcpiEval_PCCP @ 0x1C00318FC (AcpiEval_PCCP.c)
 */

__int64 __fastcall InitAcpiLegacyPcc(_QWORD *a1)
{
  int v2; // eax
  int v3; // ebx
  int v5; // eax

  v2 = AcquirePccInterface();
  v3 = v2;
  if ( v2 >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      a1[26],
      0LL);
    v5 = AcpiEval_PCCP(a1, a1 + 71);
    v3 = v5;
    if ( v5 < 0 )
    {
      if ( v5 == -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            2u,
            0xCu,
            (__int64)&WPP_a7fcec84f9fd3f3e4a2bc8763d50651d_Traceguids);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xDu,
          (__int64)&WPP_a7fcec84f9fd3f3e4a2bc8763d50651d_Traceguids,
          v5);
      }
      goto LABEL_20;
    }
    v3 = ValidatePccEntry(a1[71]);
    if ( v3 >= 0 )
    {
      if ( (unsigned int)(dword_1C001C8FC - 1) > 0x26 )
      {
LABEL_20:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, a1[26]);
        return (unsigned int)v3;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0xEu,
          (__int64)&WPP_a7fcec84f9fd3f3e4a2bc8763d50651d_Traceguids,
          dword_1C001C8FC,
          40);
      v3 = -1073741823;
    }
    a1[34] &= ~0x80000000uLL;
    goto LABEL_20;
  }
  if ( v2 == -1073741637 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0xAu,
        (__int64)&WPP_a7fcec84f9fd3f3e4a2bc8763d50651d_Traceguids);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_a7fcec84f9fd3f3e4a2bc8763d50651d_Traceguids,
      v2);
  }
  return (unsigned int)v3;
}
