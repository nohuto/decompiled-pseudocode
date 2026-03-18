/*
 * XREFs of ?vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z @ 0x8CD1A
 * Callers:
 *     _EngMapFontFileFDInternal@16 @ 0x8BDE8 (_EngMapFontFileFDInternal@16.c)
 *     ?vUnmapFileFD@@YGXPAU_FILEVIEW@@E@Z @ 0x8CCEA (-vUnmapFileFD@@YGXPAU_FILEVIEW@@E@Z.c)
 *     _FreeFileView@8 @ 0xCE1EE (_FreeFileView@8.c)
 *     _vUnmapFile@8 @ 0xD6388 (_vUnmapFile@8.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 *     ?bMapFileRetainHandle@@YGHPBGPAU_FILEVIEW@@HPAH@Z @ 0xDFAC4 (-bMapFileRetainHandle@@YGHPBGPAU_FILEVIEW@@HPAH@Z.c)
 *     _EngUnmapFile@4 @ 0x1E916A (_EngUnmapFile@4.c)
 *     _bMapFile@16 @ 0x1E9421 (_bMapFile@16.c)
 *     _GreMakeFontDir@12 @ 0x221195 (_GreMakeFontDir@12.c)
 * Callees:
 *     _ZwWin32CreateSection@36 @ 0x8CB02 (_ZwWin32CreateSection@36.c)
 *     ?bCopySection@@YGHPAX0K@Z @ 0x1E8BF7 (-bCopySection@@YGHPAX0K@Z.c)
 *     ?bUnreferenceNetworkedFontFileNode@@YG_NPAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z @ 0x1E8F4E (-bUnreferenceNetworkedFontFileNode@@YG_NPAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z.c)
 */

void __thiscall vUnreferenceFileviewSection(int this)
{
  void *v2; // ecx
  void *v3; // ecx
  int v4; // [esp-4h] [ebp-34h]
  struct _NETWORKED_FONT_FONT_FILE_NODE *v5; // [esp+0h] [ebp-30h]
  void *v6; // [esp+0h] [ebp-30h]
  unsigned int v7; // [esp+4h] [ebp-2Ch]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+8h] [ebp-28h] BYREF
  union _LARGE_INTEGER MaximumSize; // [esp+20h] [ebp-10h] BYREF
  PVOID Object; // [esp+2Ch] [ebp-4h] BYREF

  if ( (*(_BYTE *)(this + 24) & 2) != 0 )
  {
    if ( *(_DWORD *)(this + 32) )
    {
      if ( bUnreferenceNetworkedFontFileNode(v5) )
      {
        v3 = *(void **)(this + 28);
        if ( v3 )
        {
          if ( (*(_BYTE *)(this + 24) & 4) != 0 )
          {
            v4 = *(_DWORD *)(this + 28);
            MaximumSize.QuadPart = *(unsigned int *)(this + 16);
            Object = 0;
            ObjectAttributes.Length = 24;
            ObjectAttributes.RootDirectory = 0;
            ObjectAttributes.Attributes = 576;
            ObjectAttributes.ObjectName = 0;
            ObjectAttributes.SecurityDescriptor = 0;
            ObjectAttributes.SecurityQualityOfService = 0;
            if ( ZwWin32CreateSection(&Object, &ObjectAttributes, &MaximumSize, 4u, (int)v3, v3, (int)v3, v4) >= 0 )
            {
              bCopySection(*(void **)(this + 16), v6, v7);
              ObfDereferenceObject(Object);
            }
          }
        }
      }
    }
  }
  v2 = *(void **)(this + 20);
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *(_DWORD *)(this + 20) = 0;
  }
  if ( *(_DWORD *)(this + 28) )
  {
    ZwClose(*(HANDLE *)(this + 28));
    *(_DWORD *)(this + 28) = 0;
  }
}
