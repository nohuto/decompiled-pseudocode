/*
 * XREFs of IoGetOplockFullFoExt @ 0x140361508
 * Callers:
 *     FsRtlpOplockCleanup @ 0x14022B930 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockDequeueRH @ 0x1403617F0 (FsRtlpOplockDequeueRH.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x140361530 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockFullFoExt(__int64 a1)
{
  if ( a1 )
    return IopGetFileObjectExtension(a1, 6LL);
  else
    return 0LL;
}
