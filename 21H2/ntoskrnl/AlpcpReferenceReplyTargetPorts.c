/*
 * XREFs of AlpcpReferenceReplyTargetPorts @ 0x1406D30D0
 * Callers:
 *     AlpcpDispatchReplyToPort @ 0x1406D2D1C (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x140212AE0 (ObReferenceObjectSafe.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
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
