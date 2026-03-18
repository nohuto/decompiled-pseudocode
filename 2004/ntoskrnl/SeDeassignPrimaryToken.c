/*
 * XREFs of SeDeassignPrimaryToken @ 0x14061AEC4
 * Callers:
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 *     SeAssignPrimaryToken @ 0x1407A5EA4 (SeAssignPrimaryToken.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObFastReplaceObject @ 0x1402C686C (ObFastReplaceObject.c)
 */

void __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  ULONG_PTR v1; // rax

  v1 = ObFastReplaceObject((volatile __int64 *)(a1 + 1208), 0LL);
  *(_BYTE *)(v1 + 204) = 0;
  HalPutDmaAdapter((PADAPTER_OBJECT)v1);
}
