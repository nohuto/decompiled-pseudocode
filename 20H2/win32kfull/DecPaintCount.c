/*
 * XREFs of DecPaintCount @ 0x1C001B304
 * Callers:
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C001AB6C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ClrFTrueVis @ 0x1C001AE1C (ClrFTrueVis.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C001AF20 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     InternalInvalidate3 @ 0x1C0044D64 (InternalInvalidate3.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DecPaintCount(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v1 + 600))-- == 1 )
  {
    *(_WORD *)(*(_QWORD *)(v1 + 448) + 6LL) &= ~0x20u;
    result = *(_QWORD *)(v1 + 448);
    *(_WORD *)(result + 4) &= ~0x20u;
  }
  return result;
}
