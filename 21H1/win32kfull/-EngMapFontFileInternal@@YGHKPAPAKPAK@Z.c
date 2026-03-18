/*
 * XREFs of ?EngMapFontFileInternal@@YGHKPAPAKPAK@Z @ 0x1E869E
 * Callers:
 *     _EngMapFontFile@12 @ 0x1E9114 (_EngMapFontFile@12.c)
 * Callees:
 *     ?bMapRoutine@@YGHPAU_FONTFILEVIEW@@PAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x8CBA4 (-bMapRoutine@@YGHPAU_FONTFILEVIEW@@PAU_FILEVIEW@@W4_MAP_MODE@@H@Z.c)
 *     _vUnmapFile@8 @ 0xD6388 (_vUnmapFile@8.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _bMapFile@16 @ 0x1E9421 (_bMapFile@16.c)
 */

int __userpurge EngMapFontFileInternal@<eax>(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        _DWORD *a3,
        unsigned int **a4,
        unsigned int *a5)
{
  int v5; // esi
  int v7; // ebx
  void *v8; // eax
  int v9; // ecx
  int v11; // [esp+Ch] [ebp-3Ch] BYREF
  ULONG_PTR ViewSize; // [esp+10h] [ebp-38h] BYREF
  _DWORD *v13; // [esp+14h] [ebp-34h]
  _DWORD v14[12]; // [esp+18h] [ebp-30h] BYREF

  v5 = 0;
  v13 = a1;
  memset(v14, 0, sizeof(v14));
  v11 = 1;
  v7 = 1;
  GreAcquireFastMutex(_ghfmMemory);
  if ( *(_DWORD *)(a2 + 8) )
  {
    ++*(_DWORD *)(a2 + 56);
LABEL_8:
    v11 = 0;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(a2 + 48) )
  {
    v8 = *(void **)(a2 + 20);
    if ( v8 )
    {
      ViewSize = 0;
      if ( MmMapViewInSessionSpace(v8, (PVOID *)(a2 + 8), &ViewSize) < 0 )
      {
        v7 = 0;
      }
      else
      {
        v7 = 1;
        *(_DWORD *)(a2 + 56) = 1;
      }
      goto LABEL_8;
    }
  }
LABEL_9:
  GreReleaseFastMutex(_ghfmMemory);
  if ( v11 )
  {
    v9 = *(_DWORD *)(a2 + 48);
    v11 = 0;
    if ( !bMapFile(v9, v14, 0, &v11) )
      return 0;
    GreAcquireFastMutex(_ghfmMemory);
    ++*(_DWORD *)(a2 + 56);
    if ( !*(_DWORD *)(a2 + 8) )
    {
      v5 = bMapRoutine(a2, v14, 0, (struct _FILEVIEW *)v11);
      v7 = v5;
    }
    GreReleaseFastMutex(_ghfmMemory);
    if ( !v5 )
      vUnmapFile((int)v14);
  }
  if ( v7 )
  {
    if ( v13 )
      *v13 = *(_DWORD *)(a2 + 8);
    if ( a3 )
      *a3 = *(_DWORD *)(a2 + 16);
  }
  return v7;
}
