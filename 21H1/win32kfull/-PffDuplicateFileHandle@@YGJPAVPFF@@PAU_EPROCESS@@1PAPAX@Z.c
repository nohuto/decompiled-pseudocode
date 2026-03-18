/*
 * XREFs of ?PffDuplicateFileHandle@@YGJPAVPFF@@PAU_EPROCESS@@1PAPAX@Z @ 0x1D04F3
 * Callers:
 *     ?GetProcessSessionFonts@@YGJPAU_EPROCESS@@IIPAI1PAPAXPAG@Z @ 0x989AE (-GetProcessSessionFonts@@YGJPAU_EPROCESS@@IIPAI1PAPAXPAG@Z.c)
 * Callees:
 *     ?hGetHandleFromFilePath@@YGPAXPBGH@Z @ 0x8C666 (-hGetHandleFromFilePath@@YGPAXPBGH@Z.c)
 */

int __userpurge PffDuplicateFileHandle@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct PFF *a3,
        struct _EPROCESS *a4,
        struct _EPROCESS *a5,
        void **a6)
{
  int v6; // eax
  char v7; // bl
  void *HandleFromFilePath; // esi
  int v10; // edi

  v6 = *(_DWORD *)(a2 + 120);
  v7 = 0;
  HandleFromFilePath = *(void **)(*(_DWORD *)v6 + 28);
  if ( !HandleFromFilePath )
  {
    HandleFromFilePath = hGetHandleFromFilePath(*(const WCHAR **)(*(_DWORD *)v6 + 48), 0);
    if ( !HandleFromFilePath )
      return -1073741790;
    v7 = 1;
  }
  v10 = ObDuplicateObject(a3, HandleFromFilePath, a1, a4, 1179785, 0, 0, 0);
  if ( v7 )
    ZwClose(HandleFromFilePath);
  return v10;
}
