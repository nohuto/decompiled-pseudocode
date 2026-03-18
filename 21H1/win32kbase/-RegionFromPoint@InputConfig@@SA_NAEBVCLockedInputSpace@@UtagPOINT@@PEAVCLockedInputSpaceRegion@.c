/*
 * XREFs of ?RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C00A61A8
 * Callers:
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C00A6138 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     NtInputSpaceRegionFromPoint @ 0x1C0133DC0 (NtInputSpaceRegionFromPoint.c)
 * Callees:
 *     PtInRect @ 0x1C00A649C (PtInRect.c)
 */

char __fastcall InputConfig::RegionFromPoint(
        const struct CLockedInputSpace *a1,
        struct tagPOINT a2,
        struct CLockedInputSpaceRegion *a3)
{
  _QWORD *v5; // rsi
  char v6; // di
  _QWORD *i; // r9
  __int64 v8; // rcx
  _QWORD *v9; // r9

  *(_QWORD *)a3 = 0LL;
  v5 = (_QWORD *)(*(_QWORD *)a1 + 1424LL);
  KeEnterCriticalRegion();
  v6 = 1;
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  for ( i = (_QWORD *)*v5; i != v5 && i != (_QWORD *)-16LL; i = (_QWORD *)*v9 )
  {
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(i + 2, a2) )
    {
      *(_QWORD *)a3 = v8;
      goto LABEL_6;
    }
  }
  v6 = 0;
LABEL_6:
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  return v6;
}
