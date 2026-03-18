/*
 * XREFs of ViWdBeforeCancelIrp @ 0x1409DDD40
 * Callers:
 *     IovCancelIrp @ 0x1409C1F3C (IovCancelIrp.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     ViWdInsertSortIrp @ 0x1409DDDEC (ViWdInsertSortIrp.c)
 */

void __fastcall ViWdBeforeCancelIrp(__int64 *a1)
{
  __int16 v1; // di
  unsigned int v3; // esi
  __int64 *v4; // rax
  __int64 **v5; // rcx

  v1 = VfWdCancelTimeoutTicks;
  if ( VfWdCancelTimeoutTicks )
  {
    ++ViWdCancelIrpCount;
    v3 = VfWdCancelTimeoutTicks + ViWdTickCount;
    KxAcquireSpinLock(&VfWdIrpListLock);
    if ( *((_BYTE *)a1 + 28) )
    {
      if ( *((_DWORD *)a1 + 6) <= v3 )
      {
LABEL_8:
        KxReleaseSpinLock(&VfWdIrpListLock);
        return;
      }
      v4 = (__int64 *)*a1;
      if ( *(__int64 **)(*a1 + 8) != a1 || (v5 = (__int64 **)a1[1], *v5 != a1) )
        __fastfail(3u);
      *v5 = v4;
      v4[1] = (__int64)v5;
      --ViWdIrpListLength;
    }
    *((_DWORD *)a1 + 6) = v3;
    *((_WORD *)a1 + 15) = v1;
    ViWdInsertSortIrp(a1);
    goto LABEL_8;
  }
}
