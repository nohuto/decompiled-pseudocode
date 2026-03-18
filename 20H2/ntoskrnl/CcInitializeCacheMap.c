/*
 * XREFs of CcInitializeCacheMap @ 0x140330390
 * Callers:
 *     <none>
 * Callees:
 *     CcInitializeCacheMapEx @ 0x140291D10 (CcInitializeCacheMapEx.c)
 */

void __stdcall CcInitializeCacheMap(
        PFILE_OBJECT FileObject,
        PCC_FILE_SIZES FileSizes,
        BOOLEAN PinAccess,
        PCACHE_MANAGER_CALLBACKS Callbacks,
        PVOID LazyWriteContext)
{
  CcInitializeCacheMapEx(FileObject, (__int128 *)FileSizes, PinAccess, (__int64)Callbacks, (__int64)LazyWriteContext, 0);
}
