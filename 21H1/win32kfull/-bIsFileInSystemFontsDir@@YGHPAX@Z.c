/*
 * XREFs of ?bIsFileInSystemFontsDir@@YGHPAX@Z @ 0x8CA36
 * Callers:
 *     ?bCreateSectionFromHandle@@YGHPAXPBGPAU_FILEVIEW@@HPAHE@Z @ 0x8C790 (-bCreateSectionFromHandle@@YGHPAXPBGPAU_FILEVIEW@@HPAHE@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?QueryNameStringFromHandle@@YGJPAXPAU_OBJECT_NAME_INFORMATION@@KD@Z @ 0x8CAA8 (-QueryNameStringFromHandle@@YGJPAXPAU_OBJECT_NAME_INFORMATION@@KD@Z.c)
 */

int __usercall bIsFileInSystemFontsDir@<eax>(int a1@<ecx>, unsigned int a2@<esi>)
{
  int v2; // edi
  struct _OBJECT_NAME_INFORMATION *v3; // ecx
  const STRING *v4; // esi
  char v7; // [esp+0h] [ebp-Ch]
  int v8; // [esp+8h] [ebp-4h]

  v2 = 0;
  v8 = 1;
  if ( !a1 )
    return 0;
  v3 = &gpniScratch;
  v4 = (const STRING *)_InterlockedExchange((volatile __int32 *)&gpniScratch, 0);
  if ( v4 || (v8 = 0, (v4 = (const STRING *)PALLOCMEM2(0x190u, 1986422343, 1)) != 0) )
  {
    if ( QueryNameStringFromHandle(v3, v3, a2, v7) >= 0
      && gpniScratch.Name.Buffer
      && RtlPrefixString((const STRING *)gpniScratch.Name.Buffer, v4, 1u) )
    {
      v2 = 1;
    }
    if ( v8 )
      _InterlockedExchange((volatile __int32 *)&gpniScratch, (__int32)v4);
    else
      Win32FreePool(v4);
  }
  return v2;
}
