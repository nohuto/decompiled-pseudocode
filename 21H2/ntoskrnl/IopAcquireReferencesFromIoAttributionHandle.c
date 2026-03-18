/*
 * XREFs of IopAcquireReferencesFromIoAttributionHandle @ 0x1403639F0
 * Callers:
 *     IoNotifyQuotaState @ 0x14025AFF0 (IoNotifyQuotaState.c)
 *     IoGetIoRateControl @ 0x140363850 (IoGetIoRateControl.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     IopFindDiskIoAttribution @ 0x140365DD0 (IopFindDiskIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x140366814 (IoDiskIoAttributionDereference.c)
 */

__int64 __fastcall IopAcquireReferencesFromIoAttributionHandle(
        __int64 a1,
        struct _EX_RUNDOWN_REF **a2,
        unsigned __int64 *a3)
{
  struct _EX_RUNDOWN_REF *DiskIoAttribution; // rax
  unsigned int v6; // ebx
  struct _EX_RUNDOWN_REF *v7; // rdi

  DiskIoAttribution = (struct _EX_RUNDOWN_REF *)IopFindDiskIoAttribution();
  v6 = 0;
  v7 = DiskIoAttribution;
  if ( DiskIoAttribution )
  {
    if ( ExAcquireRundownProtection(DiskIoAttribution + 21) )
    {
      *a3 = v7[20].Count;
      *a2 = v7;
    }
    else
    {
      v6 = -1073741431;
      IoDiskIoAttributionDereference(v7);
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v6;
}
