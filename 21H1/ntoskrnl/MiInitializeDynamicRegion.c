/*
 * XREFs of MiInitializeDynamicRegion @ 0x140A4163C
 * Callers:
 *     MiInitializeSystemCache @ 0x140782A74 (MiInitializeSystemCache.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x140301D30 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x1403AC314 (MiBuildDynamicRegion.c)
 */

ULONG_PTR __fastcall MiInitializeDynamicRegion(int a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  v1 = MiSystemVaToDynamicBitmap(a1);
  return MiBuildDynamicRegion(v1, v2, v3);
}
