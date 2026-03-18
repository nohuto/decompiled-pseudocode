/*
 * XREFs of _bMapFile@16 @ 0x1E9421
 * Callers:
 *     ?EngMapFontFileInternal@@YGHKPAPAKPAK@Z @ 0x1E869E (-EngMapFontFileInternal@@YGHKPAPAKPAK@Z.c)
 *     ?LoadModuleWorkHorse@@YGPAXPAGH@Z @ 0x1E888C (-LoadModuleWorkHorse@@YGPAXPAGH@Z.c)
 *     _EngMapFile@12 @ 0x1E90B9 (_EngMapFile@12.c)
 * Callees:
 *     ?bCreateSection@@YGHPBGPAU_FILEVIEW@@HPAHE@Z @ 0x8C608 (-bCreateSection@@YGHPBGPAU_FILEVIEW@@HPAHE@Z.c)
 *     ?vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z @ 0x8CD1A (-vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall bMapFile(int a1, PVOID *a2, unsigned __int16 *a3, struct _FILEVIEW *a4)
{
  int v4; // edi
  int *v7; // [esp+0h] [ebp-40h]
  unsigned __int8 v8; // [esp+4h] [ebp-3Ch]
  ULONG_PTR ViewSize; // [esp+Ch] [ebp-34h] BYREF
  PVOID v10[12]; // [esp+10h] [ebp-30h] BYREF

  v4 = 0;
  memset(v10, 0, sizeof(v10));
  if ( bCreateSection((int)v10, a3, a4, 0, v7, v8) )
  {
    ViewSize = 0;
    if ( MmMapViewInSessionSpace(v10[5], &v10[2], &ViewSize) < 0 )
    {
      vUnreferenceFileviewSection((int)v10);
    }
    else
    {
      qmemcpy(a2, v10, 0x30u);
      return 1;
    }
  }
  return v4;
}
