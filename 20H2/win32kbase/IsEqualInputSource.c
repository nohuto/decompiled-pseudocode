/*
 * XREFs of IsEqualInputSource @ 0x1C0032D10
 * Callers:
 *     GetCoalesceableMouseMessage @ 0x1C00315B0 (GetCoalesceableMouseMessage.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C0033190 (CoalesceInputSourceMouseMoves.c)
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C0035B88 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsEqualInputSource(_DWORD *a1, _DWORD *a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a1 || !a2 )
    return 0;
  if ( *a1 == *a2 )
    return a1[1] == a2[1];
  return v2;
}
