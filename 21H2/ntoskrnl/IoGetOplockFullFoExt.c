/*
 * XREFs of IoGetOplockFullFoExt @ 0x1403567B8
 * Callers:
 *     FsRtlpOplockCleanup @ 0x1402AD5D0 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockDequeueRH @ 0x140356AA0 (FsRtlpOplockDequeueRH.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x1403567E0 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockFullFoExt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 )
    return IopGetFileObjectExtension(a1, 6LL, 0LL, a4);
  else
    return 0LL;
}
