/*
 * XREFs of MiLockNestedVad @ 0x1408DC2B8
 * Callers:
 *     MiFreeVadRange @ 0x1402308B8 (MiFreeVadRange.c)
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     MiUpControlAreaRefs @ 0x140529070 (MiUpControlAreaRefs.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockNestedVad(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
}
