/*
 * XREFs of ?bCreateSection@@YGHPBGPAU_FILEVIEW@@HPAHE@Z @ 0x8C608
 * Callers:
 *     _EngMapFontFileFDInternal@16 @ 0x8BDE8 (_EngMapFontFileFDInternal@16.c)
 *     _bMapFile@16 @ 0x1E9421 (_bMapFile@16.c)
 * Callees:
 *     ?hGetHandleFromFilePath@@YGPAXPBGH@Z @ 0x8C666 (-hGetHandleFromFilePath@@YGPAXPBGH@Z.c)
 *     ?bCreateSectionFromHandle@@YGHPAXPBGPAU_FILEVIEW@@HPAHE@Z @ 0x8C790 (-bCreateSectionFromHandle@@YGHPAXPBGPAU_FILEVIEW@@HPAHE@Z.c)
 */

int __userpurge bCreateSection@<eax>(
        int a1@<edx>,
        unsigned __int16 *a2,
        struct _FILEVIEW *a3,
        int a4,
        int *a5,
        unsigned __int8 a6)
{
  void *HandleFromFilePath; // edi
  const unsigned __int16 *v9; // [esp+0h] [ebp-Ch]
  int *v10; // [esp+0h] [ebp-Ch]
  int v11; // [esp+4h] [ebp-8h]
  unsigned __int8 v12; // [esp+4h] [ebp-8h]

  HandleFromFilePath = hGetHandleFromFilePath(v9, v11);
  if ( !HandleFromFilePath )
    return 0;
  if ( !bCreateSectionFromHandle((void *)a1, a2, a3, a4, v10, v12) )
  {
    ZwClose(HandleFromFilePath);
    return 0;
  }
  if ( (*(_BYTE *)(a1 + 24) & 0x10) != 0 )
  {
    ZwClose(*(HANDLE *)(a1 + 28));
    *(_DWORD *)(a1 + 28) = 0;
  }
  return 1;
}
