/*
 * XREFs of DecPaintCount @ 0x1C00F0544
 * Callers:
 *     InternalInvalidate3 @ 0x1C0073974 (InternalInvalidate3.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00EFDB0 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ClrFTrueVis @ 0x1C00F0060 (ClrFTrueVis.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F0160 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DecPaintCount(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v1 + 592))-- == 1 )
  {
    *(_WORD *)(*(_QWORD *)(v1 + 440) + 6LL) &= ~0x20u;
    result = *(_QWORD *)(v1 + 440);
    *(_WORD *)(result + 4) &= ~0x20u;
  }
  return result;
}
