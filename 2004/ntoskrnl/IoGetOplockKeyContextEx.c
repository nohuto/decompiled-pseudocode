/*
 * XREFs of IoGetOplockKeyContextEx @ 0x14033C8B0
 * Callers:
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x140291E40 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockKeysEqual @ 0x1402930C0 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpAttachOplockKey @ 0x14033C7A8 (FsRtlpAttachOplockKey.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x140228AC4 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockKeyContextEx(__int64 a1)
{
  __int64 result; // rax

  result = IopGetFileObjectExtension(a1, 6, 0LL);
  if ( !result || (*(_BYTE *)(result + 2) & 3) == 0 )
    return 0LL;
  return result;
}
