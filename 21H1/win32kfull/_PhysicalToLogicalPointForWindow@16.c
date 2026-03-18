/*
 * XREFs of _PhysicalToLogicalPointForWindow@16 @ 0x151670
 * Callers:
 *     ?PtInsideWindowFrameBounds@@YG_NABUtagPOINT@@PBUtagWND@@@Z @ 0x19E3F7 (-PtInsideWindowFrameBounds@@YG_NABUtagPOINT@@PBUtagWND@@@Z.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AAE_NPAUtagWND@@@Z @ 0x19FC53 (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AAE_NPAUtagWND@@@Z.c)
 * Callees:
 *     _TransformVector@20 @ 0x17BC83 (_TransformVector@20.c)
 */

int __fastcall PhysicalToLogicalPointForWindow(int a1, _DWORD *a2, int a3, int a4)
{
  int v4; // ecx
  int result; // eax

  v4 = *(_DWORD *)(a1 + 120);
  *a2 = a3;
  result = a4;
  a2[1] = a4;
  if ( v4 )
    return TransformVector(a2 + 1, 0, 1);
  return result;
}
