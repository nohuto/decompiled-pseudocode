/*
 * XREFs of PspIsSiloContext @ 0x1406A0D68
 * Callers:
 *     PsInsertSiloContext @ 0x1405CFB30 (PsInsertSiloContext.c)
 *     PsInsertPermanentSiloContextEx @ 0x1406A0B74 (PsInsertPermanentSiloContextEx.c)
 *     PsReplaceSiloContext @ 0x1409083F0 (PsReplaceSiloContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspIsSiloContext(__int64 a1)
{
  struct _DMA_ADAPTER *v1; // rax

  v1 = (struct _DMA_ADAPTER *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  return v1 == PsSiloContextNonPagedType || v1 == PsSiloContextPagedType;
}
