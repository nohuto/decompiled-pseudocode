/*
 * XREFs of MiLockNestedVad @ 0x1408D9A78
 * Callers:
 *     MiDeletePartialVad @ 0x1402FD8DC (MiDeletePartialVad.c)
 *     MiFreeVadRange @ 0x1403185C4 (MiFreeVadRange.c)
 *     MiUpControlAreaRefs @ 0x14052AB70 (MiUpControlAreaRefs.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockNestedVad(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
}
