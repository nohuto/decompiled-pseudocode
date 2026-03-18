/*
 * XREFs of IoGetOplockFullFoExt @ 0x14029FA2C
 * Callers:
 *     FsRtlpOplockCleanup @ 0x14020B158 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockDequeueRH @ 0x14029F9C8 (FsRtlpOplockDequeueRH.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14029FA60 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockFullFoExt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 )
    return IopGetFileObjectExtension(a1, 6LL, 0LL, a4);
  else
    return 0LL;
}
