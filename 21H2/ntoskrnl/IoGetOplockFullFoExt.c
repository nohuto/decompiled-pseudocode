/*
 * XREFs of IoGetOplockFullFoExt @ 0x1402A39EC
 * Callers:
 *     FsRtlpOplockCleanup @ 0x1402A30D0 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockDequeueRH @ 0x1402A386C (FsRtlpOplockDequeueRH.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x1402A3A14 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockFullFoExt(__int64 a1)
{
  if ( a1 )
    return IopGetFileObjectExtension(a1, 6LL);
  else
    return 0LL;
}
