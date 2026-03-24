/*
 * XREFs of IoGetOplockKeyContextEx @ 0x1403576E0
 * Callers:
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x140354950 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockKeysEqual @ 0x140355AE0 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpAttachOplockKey @ 0x140359A7C (FsRtlpAttachOplockKey.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x1403567E0 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockKeyContextEx(__int64 a1)
{
  __int64 result; // rax

  result = IopGetFileObjectExtension(a1, 6, 0LL);
  if ( !result || (*(_BYTE *)(result + 2) & 3) == 0 )
    return 0LL;
  return result;
}
