/*
 * XREFs of CmpTransReferenceTransaction @ 0x1406A1680
 * Callers:
 *     CmpCreateKeyBody @ 0x14060E320 (CmpCreateKeyBody.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1406A1534 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x14076383C (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x140763ACC (CmpTransInitializeTransaction.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 */

__int64 __fastcall CmpTransReferenceTransaction(__int64 a1)
{
  struct _DMA_ADAPTER *v1; // rbx
  bool v2; // zf
  void *v3; // rcx
  unsigned int v4; // edi

  v1 = (struct _DMA_ADAPTER *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  v2 = (a1 & 1) == 0;
  v3 = (void *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( v2 )
  {
    v4 = 0;
    ObfReferenceObject(v3);
    if ( !TmIsTransactionActive((PKTRANSACTION)v1) )
    {
      HalPutDmaAdapter(v1);
      return (unsigned int)-1072103421;
    }
  }
  else
  {
    ObfReferenceObject(v3);
    return *(_DWORD *)&v1->Version != 0 ? 0xC0190003 : 0;
  }
  return v4;
}
