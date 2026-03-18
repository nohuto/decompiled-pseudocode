/*
 * XREFs of SeDeassignPrimaryToken @ 0x1406605E4
 * Callers:
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 *     SeAssignPrimaryToken @ 0x1407A3654 (SeAssignPrimaryToken.c)
 * Callees:
 *     ObFastReplaceObject @ 0x140233A3C (ObFastReplaceObject.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 */

void __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  ULONG_PTR v1; // rax

  v1 = ObFastReplaceObject((volatile __int64 *)(a1 + 1208), 0LL);
  *(_BYTE *)(v1 + 204) = 0;
  HalPutDmaAdapter((PADAPTER_OBJECT)v1);
}
