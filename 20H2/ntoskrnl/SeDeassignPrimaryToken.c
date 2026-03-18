/*
 * XREFs of SeDeassignPrimaryToken @ 0x1406614F4
 * Callers:
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 *     SeAssignPrimaryToken @ 0x1407B6F70 (SeAssignPrimaryToken.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObFastReplaceObject @ 0x140248084 (ObFastReplaceObject.c)
 */

void __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  ULONG_PTR v1; // rax

  v1 = ObFastReplaceObject((volatile __int64 *)(a1 + 1208), 0LL);
  *(_BYTE *)(v1 + 204) = 0;
  HalPutDmaAdapter((PADAPTER_OBJECT)v1);
}
