/*
 * XREFs of FsRtlNotifyCleanupOneEntry @ 0x1406B8D9C
 * Callers:
 *     FsRtlNotifyCleanup @ 0x1406B89C0 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyCleanupAll @ 0x14088FFA0 (FsRtlNotifyCleanupAll.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140230470 (PsReturnProcessPagedPoolQuota.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1406B87B4 (FsRtlNotifyCompleteIrpList.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlNotifyCleanupOneEntry(char *P, _QWORD *a2)
{
  char **v4; // rcx
  PVOID *v5; // rdx
  __int64 v6; // rdi

  *((_WORD *)P + 36) |= 4u;
  if ( *((char **)P + 6) != P + 48 )
    FsRtlNotifyCompleteIrpList((__int64)P, 267);
  v4 = (char **)*((_QWORD *)P + 4);
  if ( v4[1] != P + 32 || (v5 = (PVOID *)*((_QWORD *)P + 5), *v5 != P + 32) )
    __fastfail(3u);
  *v5 = v4;
  v6 = 0LL;
  v4[1] = (char *)v5;
  _InterlockedDecrement((volatile signed __int32 *)P + 28);
  if ( !*((_DWORD *)P + 28) )
  {
    if ( *((_QWORD *)P + 10) )
    {
      PsReturnProcessPagedPoolQuota(*((_QWORD *)P + 15), *((unsigned int *)P + 25));
      ExFreePoolWithTag(*((PVOID *)P + 10), 0);
    }
    if ( (P[72] & 0x40) != 0 || *((_QWORD *)P + 17) )
      v6 = *((_QWORD *)P + 3);
    *a2 = v6;
    ExFreePoolWithTag(P, 0);
  }
}
