/*
 * XREFs of ?GetColorDataRaw@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x1C021A260
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x1C002AA90 (-EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z.c)
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C01D1EF0 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetColorDataRaw(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct DISPLAY_COLOR_DATA_RAW *a2,
        __int64 a3,
        __int64 a4)
{
  struct DISPLAY_COLOR_DATA_RAW *v5; // r8
  unsigned __int8 *v6; // rbx
  unsigned int ColorDataRaw; // edi
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int8 *v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0;
  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(this, &v10, &v9, a4);
  v5 = a2;
  v6 = v10;
  ColorDataRaw = EDID_V1_GetColorDataRaw(v9, v10, v5);
  if ( v6 )
    operator delete[](v6);
  return ColorDataRaw;
}
