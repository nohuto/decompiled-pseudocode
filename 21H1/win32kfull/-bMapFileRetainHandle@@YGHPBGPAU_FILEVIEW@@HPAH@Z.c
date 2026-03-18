/*
 * XREFs of ?bMapFileRetainHandle@@YGHPBGPAU_FILEVIEW@@HPAH@Z @ 0xDFAC4
 * Callers:
 *     _InitFNTCache@0 @ 0xDF48C (_InitFNTCache@0.c)
 *     bReAllocCacheFile @ 0xECE5E (bReAllocCacheFile.c)
 *     bInitCacheTable @ 0xED634 (bInitCacheTable.c)
 * Callees:
 *     ?hGetHandleFromFilePath@@YGPAXPBGH@Z @ 0x8C666 (-hGetHandleFromFilePath@@YGPAXPBGH@Z.c)
 *     ?bCreateSectionFromHandle@@YGHPAXPBGPAU_FILEVIEW@@HPAHE@Z @ 0x8C790 (-bCreateSectionFromHandle@@YGHPAXPBGPAU_FILEVIEW@@HPAHE@Z.c)
 *     ?vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z @ 0x8CD1A (-vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __userpurge bMapFileRetainHandle@<eax>(
        _DWORD *a1@<edx>,
        unsigned __int16 *a2,
        struct _FILEVIEW *a3,
        int a4,
        int *a5)
{
  int v5; // esi
  void *v7; // edi
  int result; // eax
  int *v9; // [esp+0h] [ebp-48h]
  unsigned __int8 v10; // [esp+4h] [ebp-44h]
  PVOID v11[13]; // [esp+10h] [ebp-38h] BYREF
  ULONG_PTR ViewSize; // [esp+44h] [ebp-4h] BYREF

  v5 = 0;
  memset(v11, 0, 0x30u);
  v7 = (void *)a1[7];
  if ( v7
    || (result = (int)hGetHandleFromFilePath(L"\\SystemRoot\\system32\\FNTCACHE.DAT", a2 != 0),
        (v7 = (void *)result) != 0) )
  {
    if ( bCreateSectionFromHandle(L"\\SystemRoot\\system32\\FNTCACHE.DAT", v7, v11, a2, 0, 0, v9, v10) )
    {
      ViewSize = 0;
      if ( MmMapViewInSessionSpace(v11[5], &v11[2], &ViewSize) < 0 )
      {
        vUnreferenceFileviewSection((int)v11);
      }
      else
      {
        qmemcpy(a1, v11, 0x30u);
        return 1;
      }
    }
    else if ( !a1[7] )
    {
      ZwClose(v7);
    }
    return v5;
  }
  return result;
}
