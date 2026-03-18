/*
 * XREFs of CmpIsHiveLoadingOnOtherThread @ 0x14061CAC0
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x14061C460 (CmpPerformCompleteKcbCacheLookup.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsHiveLoadingOnOtherThread(__int64 a1)
{
  return (*(_DWORD *)(a1 + 160) & 0x20) != 0 && *(struct _KTHREAD **)(a1 + 4208) != KeGetCurrentThread();
}
