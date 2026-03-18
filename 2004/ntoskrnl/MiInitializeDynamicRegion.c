/*
 * XREFs of MiInitializeDynamicRegion @ 0x140A46E98
 * Callers:
 *     MiInitializeSystemCache @ 0x1407883F8 (MiInitializeSystemCache.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x14033E878 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x1403B1F94 (MiBuildDynamicRegion.c)
 */

ULONG_PTR __fastcall MiInitializeDynamicRegion(int a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  v1 = MiSystemVaToDynamicBitmap(a1);
  return MiBuildDynamicRegion(v1, v2, v3);
}
