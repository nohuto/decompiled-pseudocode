/*
 * XREFs of IoGetOplockKeyContextEx @ 0x1402FFFB0
 * Callers:
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1402555C0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockKeysEqual @ 0x140256840 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpAttachOplockKey @ 0x1402FFEA8 (FsRtlpAttachOplockKey.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x140281B14 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockKeyContextEx(__int64 a1)
{
  __int64 result; // rax

  result = IopGetFileObjectExtension(a1, 6, 0LL);
  if ( !result || (*(_BYTE *)(result + 2) & 3) == 0 )
    return 0LL;
  return result;
}
