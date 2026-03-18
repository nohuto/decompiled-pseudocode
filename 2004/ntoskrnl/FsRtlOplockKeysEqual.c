/*
 * XREFs of FsRtlOplockKeysEqual @ 0x140392C30
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpOplockKeysEqual @ 0x1402930C0 (FsRtlpOplockKeysEqual.c)
 */

BOOLEAN __stdcall FsRtlOplockKeysEqual(PFILE_OBJECT Fo1, PFILE_OBJECT Fo2)
{
  return FsRtlpOplockKeysEqual((__int64)Fo1, (__int64)Fo2, 0);
}
