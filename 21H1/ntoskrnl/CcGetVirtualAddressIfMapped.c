/*
 * XREFs of CcGetVirtualAddressIfMapped @ 0x1402FC2C0
 * Callers:
 *     CcFlushCachePriv @ 0x14022C120 (CcFlushCachePriv.c)
 * Callees:
 *     CcIncrementVacbActiveCount @ 0x14022BA38 (CcIncrementVacbActiveCount.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     CcGetVacbLargeOffset @ 0x1402FC370 (CcGetVacbLargeOffset.c)
 */

__int64 __fastcall CcGetVirtualAddressIfMapped(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  unsigned int v6; // r14d
  __int64 v8; // rbx
  __int64 VacbLargeOffset; // rax

  v6 = a2 & 0x3FFFF;
  *a4 = 0x40000 - (a2 & 0x3FFFF);
  v8 = 0LL;
  ExAcquirePushLockSharedEx(a1 + 104, 0LL);
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
    VacbLargeOffset = CcGetVacbLargeOffset(a1, a2);
  else
    VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)a2 >> 18));
  *a3 = VacbLargeOffset;
  if ( VacbLargeOffset )
  {
    CcIncrementVacbActiveCount(VacbLargeOffset);
    v8 = *(_QWORD *)*a3 + v6;
  }
  ExReleasePushLockEx(a1 + 104, 0LL);
  return v8;
}
