/*
 * XREFs of MiLockNestedVad @ 0x1408D5128
 * Callers:
 *     MiDeletePartialVad @ 0x1402AA764 (MiDeletePartialVad.c)
 *     MiFreeVadRange @ 0x1402AB094 (MiFreeVadRange.c)
 *     MiUpControlAreaRefs @ 0x140525050 (MiUpControlAreaRefs.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockNestedVad(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
}
