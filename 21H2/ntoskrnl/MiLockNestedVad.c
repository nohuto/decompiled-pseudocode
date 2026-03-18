/*
 * XREFs of MiLockNestedVad @ 0x14097EE0C
 * Callers:
 *     MiFreeVadRange @ 0x1402ECEB0 (MiFreeVadRange.c)
 *     MiPerformVadSplitting @ 0x1402ED194 (MiPerformVadSplitting.c)
 *     MiUpControlAreaRefs @ 0x14058C330 (MiUpControlAreaRefs.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockNestedVad(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
}
