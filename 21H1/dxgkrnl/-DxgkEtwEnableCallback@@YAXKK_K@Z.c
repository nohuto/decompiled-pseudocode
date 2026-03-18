/*
 * XREFs of ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C00232EC
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C00231F0 (McGenControlCallbackV2.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0qxq_EtwWriteTransfer @ 0x1C0042D6C (McTemplateK0qxq_EtwWriteTransfer.c)
 *     ?CaptureSchedulerLogs@DXGGLOBAL@@QEAAXXZ @ 0x1C0264318 (-CaptureSchedulerLogs@DXGGLOBAL@@QEAAXXZ.c)
 *     ?DxgkDisableStablePowerState@@YAXXZ @ 0x1C0264AE4 (-DxgkDisableStablePowerState@@YAXXZ.c)
 *     ?DxgkEnableClockCalibration@@YAXE@Z @ 0x1C0264B04 (-DxgkEnableClockCalibration@@YAXE@Z.c)
 *     ?DxgkEnableFormattingBuffer@@YAXH@Z @ 0x1C0264B28 (-DxgkEnableFormattingBuffer@@YAXH@Z.c)
 *     ?DxgkEnableStablePowerState@@YAXXZ @ 0x1C0264B4C (-DxgkEnableStablePowerState@@YAXXZ.c)
 *     ?DxgkReportGlobalState@@YAXXZ @ 0x1C0264B6C (-DxgkReportGlobalState@@YAXXZ.c)
 *     DpiControlEtwLogging @ 0x1C02C1A6C (DpiControlEtwLogging.c)
 */

void __fastcall DxgkEtwEnableCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // di
  char v5; // bl
  bool v6; // cl
  __int64 v7; // rcx
  __int64 v8; // r8
  DXGGLOBAL *Global; // rax
  unsigned __int8 v10; // cl

  v4 = a2;
  v5 = 1;
  if ( (_DWORD)a1 != 2 || !bTracingEnabled )
  {
    if ( qword_1C00AE9B0 == g_OldAnyKeywords )
      goto LABEL_11;
    v6 = (qword_1C00AE9B0 & 0x1000) != 0 && (qword_1C00AE9B0 & 0x2000) == 0;
    if ( (g_OldAnyKeywords & 0x1000) != 0 )
    {
      if ( (qword_1C00AE9B0 & 0x1000) == 0 )
        DxgkDisableStablePowerState();
    }
    else if ( (qword_1C00AE9B0 & 0x1000) != 0 && v6 )
    {
      DxgkEnableStablePowerState();
    }
    v7 = qword_1C00AE9B0;
    v8 = 1024LL;
    if ( (g_OldAnyKeywords & 0x400) != 0 )
    {
      if ( (qword_1C00AE9B0 & 0x400) != 0 )
        goto LABEL_9;
      v7 = 0LL;
    }
    else
    {
      if ( (qword_1C00AE9B0 & 0x400) == 0 )
        goto LABEL_9;
      LOBYTE(v7) = 1;
    }
    LOBYTE(v8) = v4;
    DpiControlEtwLogging(v7, qword_1C00AE9B0 & 0x3000, v8);
LABEL_9:
    if ( (g_OldAnyKeywords & 0x4000) != 0 )
    {
      if ( (qword_1C00AE9B0 & 0x4000) != 0 )
        goto LABEL_11;
      DxgkEnableFormattingBuffer(0);
      v10 = 0;
    }
    else
    {
      if ( (qword_1C00AE9B0 & 0x4000) == 0 )
        goto LABEL_11;
      DxgkEnableFormattingBuffer(1);
      v10 = 1;
    }
    DxgkEnableClockCalibration(v10);
    goto LABEL_11;
  }
  if ( a3 == 0x4000000 )
  {
    Global = DXGGLOBAL::GetGlobal(a1, a2);
    DXGGLOBAL::CaptureSchedulerLogs(Global);
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qxq_EtwWriteTransfer(2, a2, a3, a4, qword_1C00AE9B0, a2);
    DxgkReportGlobalState();
  }
LABEL_11:
  if ( (qword_1C00AE9B0 & 0x61C8ED7) == 0 || (qword_1C00AE9B8 & 0xFFFFFFFFF9E37128uLL) != 0 )
    v5 = 0;
  bTracingEnabled = v5;
  g_OldAnyKeywords = qword_1C00AE9B0;
}
