/*
 * XREFs of AlpcpReferenceReplyTargetPorts @ 0x1405EAF10
 * Callers:
 *     AlpcpDispatchReplyToPort @ 0x1405EAB5C (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObReferenceObjectSafe @ 0x1402FB390 (ObReferenceObjectSafe.c)
 */

__int64 __fastcall AlpcpReferenceReplyTargetPorts(__int64 DmaAdapter, signed __int64 a2)
{
  PADAPTER_OBJECT v3; // rdi

  v3 = (PADAPTER_OBJECT)DmaAdapter;
  if ( DmaAdapter )
    v3 = (PADAPTER_OBJECT)(-(__int64)(ObReferenceObjectSafe(DmaAdapter) != 0) & DmaAdapter);
  if ( a2 )
    a2 &= -(__int64)(ObReferenceObjectSafe(a2) != 0);
  if ( v3 )
  {
    if ( a2 )
    {
      if ( (*(_DWORD *)&v3[26].Version & 0x20) == 0 && (*(_DWORD *)(a2 + 416) & 0x20) == 0 )
        return 0LL;
      HalPutDmaAdapter(v3);
      goto LABEL_13;
    }
    HalPutDmaAdapter(v3);
  }
  if ( a2 )
LABEL_13:
    HalPutDmaAdapter((PADAPTER_OBJECT)a2);
  return 3221225527LL;
}
