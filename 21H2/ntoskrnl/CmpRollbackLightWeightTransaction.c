/*
 * XREFs of CmpRollbackLightWeightTransaction @ 0x1406216F0
 * Callers:
 *     CmpCloseLightWeightTransaction @ 0x1406216D0 (CmpCloseLightWeightTransaction.c)
 *     NtRollbackRegistryTransaction @ 0x1407338F0 (NtRollbackRegistryTransaction.c)
 *     CmpAbortRollbackPacket @ 0x14077AA8C (CmpAbortRollbackPacket.c)
 *     CmpRollbackTransactionArray @ 0x1408751D8 (CmpRollbackTransactionArray.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140213E80 (ExBlockOnAddressPushLock.c)
 *     CmpAbortLightWeightTransaction @ 0x1407711A4 (CmpAbortLightWeightTransaction.c)
 */

__int64 __fastcall CmpRollbackLightWeightTransaction(volatile signed __int32 *a1)
{
  signed __int32 v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = _InterlockedCompareExchange(a1, 3, 0);
  LODWORD(v5) = v2;
  if ( v2 == 1 )
  {
    if ( _InterlockedCompareExchange(a1, 4, 1) != 1 )
      return (unsigned int)-1072103421;
    v3 = 0;
    LODWORD(v5) = 4;
    ExBlockOnAddressPushLock((__int64)(a1 + 2), a1, &v5, 4uLL, 0LL);
    goto LABEL_3;
  }
  v3 = 0;
  if ( !v2 )
  {
LABEL_3:
    CmpAbortLightWeightTransaction(a1);
    return v3;
  }
  v3 = -1072103421;
  if ( v2 == 3 )
    return (unsigned int)-1072103403;
  return v3;
}
