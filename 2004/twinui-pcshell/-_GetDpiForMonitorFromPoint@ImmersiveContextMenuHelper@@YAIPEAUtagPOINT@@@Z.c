/*
 * XREFs of ?_GetDpiForMonitorFromPoint@ImmersiveContextMenuHelper@@YAIPEAUtagPOINT@@@Z @ 0x18047D8B4
 * Callers:
 *     ?_GetRenderingDataForMenuItem@ImmersiveContextMenuHelper@@YAJW4ScaleType@DPIToPPIHelpers@@UtagMENUITEMINFOW@@PEBGPEAUtagPOINT@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@PEAUContextMenuRenderingData@@W4ImmersiveContextMenuOptions@@PEAPEAU7@@Z @ 0x18047D930 (-_GetRenderingDataForMenuItem@ImmersiveContextMenuHelper@@YAJW4ScaleType@DPIToPPIHelpers@@UtagME.c)
 * Callees:
 *     ?SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z @ 0x18047B4D8 (-SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z.c)
 */

__int64 __fastcall ImmersiveContextMenuHelper::_GetDpiForMonitorFromPoint(POINT *this, struct tagPOINT *a2)
{
  HMONITOR v2; // rax
  HWND v3; // rcx
  POINT pt; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF
  char v7; // [rsp+40h] [rbp+18h] BYREF
  int v8; // [rsp+48h] [rbp+20h] BYREF

  if ( this )
  {
    pt = *this;
  }
  else
  {
    pt.y = 0;
    pt.x = 0;
  }
  v2 = MonitorFromPoint(pt, 2u);
  if ( (int)GetDpiForMonitor(v2, 0LL, &v6, &v7) >= 0 )
    return v6;
  SHComputeDPI(v3, (int *)&pt, &v8);
  return (unsigned int)pt.x;
}
