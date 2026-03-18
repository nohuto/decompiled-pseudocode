/*
 * XREFs of ?IsEotf2084Supported@EdidMonitorDescriptor@DxgMonitor@@UEBA_NXZ @ 0x1C0219BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z @ 0x1C002A760 (-EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z.c)
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C01D1EF0 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

char __fastcall DxgMonitor::EdidMonitorDescriptor::IsEotf2084Supported(
        DxgMonitor::EdidMonitorDescriptor *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // di
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int8 *v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0;
  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(this, &v7, &v6, a4);
  v8 = 0LL;
  v4 = 0;
  if ( (int)EDID_V1_GetHDRCaps(v6, v7, (struct DISPLAY_HDR_CAPS *)&v8) >= 0 )
    v4 = BYTE2(v8);
  if ( v7 )
    operator delete[](v7);
  return v4;
}
