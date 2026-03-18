/*
 * XREFs of _ZwWin32CreateSection@36 @ 0x8CB02
 * Callers:
 *     ?bCreateSectionFromHandle@@YGHPAXPBGPAU_FILEVIEW@@HPAHE@Z @ 0x8C790 (-bCreateSectionFromHandle@@YGHPAXPBGPAU_FILEVIEW@@HPAHE@Z.c)
 *     ?vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z @ 0x8CD1A (-vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@@YGJPAU_UNICODE_STRING@@PAU_FILEVIEW@@PAU_OBJECT_ATTRIBUTES@@PAT_LARGE_INTEGER@@_N@Z @ 0x1E89E2 (-ObtainSectionForNetworkedFontFile@@YGJPAU_UNICODE_STRING@@PAU_FILEVIEW@@PAU_OBJECT_ATTRIBUTES@@.c)
 * Callees:
 *     _ZwWin32CreateSectionRetainHandle@40 @ 0x8CB3C (_ZwWin32CreateSectionRetainHandle@40.c)
 */

int __thiscall ZwWin32CreateSection(
        void *this,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        int a5,
        HANDLE FileHandle,
        int a7,
        int a8)
{
  int v8; // esi
  HANDLE Handle; // [esp+4h] [ebp-4h] BYREF

  Handle = 0;
  v8 = ZwWin32CreateSectionRetainHandle(
         ObjectAttributes,
         MaximumSize,
         SectionPageProtection,
         (int)this,
         FileHandle,
         (int)this,
         (int)this,
         &Handle);
  if ( v8 >= 0 )
    ZwClose(Handle);
  return v8;
}
