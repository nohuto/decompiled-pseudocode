/*
 * XREFs of IoGetOplockKeyContextEx @ 0x14030F590
 * Callers:
 *     FsRtlpOplockKeysEqual @ 0x14020C450 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x14020D430 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpAttachOplockKey @ 0x14030F488 (FsRtlpAttachOplockKey.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14029FA60 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockKeyContextEx(__int64 a1)
{
  __int64 result; // rax

  result = IopGetFileObjectExtension(a1, 6, 0LL);
  if ( !result || (*(_BYTE *)(result + 2) & 3) == 0 )
    return 0LL;
  return result;
}
