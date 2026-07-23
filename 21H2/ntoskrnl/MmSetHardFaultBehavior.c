/*
 * XREFs of MmSetHardFaultBehavior @ 0x14024FC68
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14028AD2C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     MiChargeResident @ 0x14027BBC8 (MiChargeResident.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
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
      goto LABEL_11;
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
LABEL_11:
      _InterlockedExchangeAdd64(&qword_140C529C0, v4);
LABEL_8:
    *(_BYTE *)(a1 + 1304) &= ~4u;
    KiLeaveGuardedRegionUnsafe(a1);
    return 0LL;
  }
  if ( (unsigned int)MiChargeResident(&MiSystemPartition, 26LL, 1024LL) )
  {
    --*(_WORD *)(a1 + 486);
    *(_BYTE *)(a1 + 1304) |= 4u;
    return 0LL;
  }
  return 3221225626LL;
}
