/*
 * XREFs of CmpTransReferenceTransaction @ 0x1406A3280
 * Callers:
 *     CmpTransSearchAddLightWeightTrans @ 0x1406A3134 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpCreateKeyBody @ 0x1406FC690 (CmpCreateKeyBody.c)
 *     CmpTransSearchAddTrans @ 0x140766E2C (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1407670BC (CmpTransInitializeTransaction.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
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
