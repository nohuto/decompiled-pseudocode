/*
 * XREFs of ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x1800736A0
 * Callers:
 *     ?GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z @ 0x1800132F4 (-GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z.c)
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180072840 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180073604 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1800C3610 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801990BC (-PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180199494 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801ACCF0 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
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
