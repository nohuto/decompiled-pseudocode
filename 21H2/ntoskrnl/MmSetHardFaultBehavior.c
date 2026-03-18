/*
 * XREFs of MmSetHardFaultBehavior @ 0x140238AD8
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140238330 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     MiChargeResident @ 0x1402821F4 (MiChargeResident.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall MmSetHardFaultBehavior(__int64 a1, int a2)
{
  bool v2; // zf
  unsigned __int64 v4; // rdx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // r8
  signed __int32 v8; // eax

  v2 = a2 == 0;
  v4 = 26LL;
  if ( v2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_13;
    if ( (unsigned __int64)(CachedResidentAvailable + 26) <= 0x100 )
    {
      do
      {
        v8 = _InterlockedCompareExchange(
               (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
               CachedResidentAvailable + 26,
               CachedResidentAvailable);
        v2 = (_DWORD)CachedResidentAvailable == v8;
        LODWORD(CachedResidentAvailable) = v8;
        if ( v2 )
          goto LABEL_8;
      }
      while ( v8 != -1 && (unsigned __int64)(v8 + 26LL) <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v4 = (int)CachedResidentAvailable - 192 + 26LL;
    }
    if ( v4 )
LABEL_13:
      _InterlockedExchangeAdd64(&qword_140C591C0, v4);
LABEL_8:
    *(_BYTE *)(a1 + 1384) &= ~4u;
    v2 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
    if ( v2 && *(_QWORD *)(a1 + 152) != a1 + 152 )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  if ( (unsigned int)MiChargeResident(&MiSystemPartition, 26LL, 1024LL) )
  {
    --*(_WORD *)(a1 + 486);
    *(_BYTE *)(a1 + 1384) |= 4u;
    return 0LL;
  }
  return 3221225626LL;
}
