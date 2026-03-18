/*
 * XREFs of ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x180095E7C
 * Callers:
 *     ?GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z @ 0x180005CA8 (-GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z.c)
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800956B0 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180095DE0 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1800BD030 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x18019D8EC (-PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18019DCC4 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801B1550 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CVisual::GetOpacityInternal(CVisual *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 27);
  if ( (*(_DWORD *)(v1 + 4) & 0x8000000) == 0 )
    return *(float *)&FLOAT_1_0;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0x5000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(float *)(i + 4);
}
