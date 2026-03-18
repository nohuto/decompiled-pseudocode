/*
 * XREFs of ?pchTranslate@RFONTOBJ@@QAEPADPBD@Z @ 0x20967F
 * Callers:
 *     ?pjTable@RFONTOBJ@@QAEPAEKPAK@Z @ 0x20988E (-pjTable@RFONTOBJ@@QAEPAEKPAK@Z.c)
 *     ?pvFile@RFONTOBJ@@QAEPAXPAK@Z @ 0x2098FD (-pvFile@RFONTOBJ@@QAEPAXPAK@Z.c)
 * Callees:
 *     ?MapFontFileInKernel@@YGJPAXPAPAX@Z @ 0x208DC1 (-MapFontFileInKernel@@YGJPAXPAPAX@Z.c)
 *     ?bAddPrintKView@@YGHKPAXKKPAU_FONTFILE_PRINTKVIEW@@@Z @ 0x208FF4 (-bAddPrintKView@@YGHKPAXKKPAU_FONTFILE_PRINTKVIEW@@@Z.c)
 *     ?bFindPrintKView@@YGHKKPAPAU_FONTFILE_PRINTKVIEW@@@Z @ 0x20922D (-bFindPrintKView@@YGHKKPAPAU_FONTFILE_PRINTKVIEW@@@Z.c)
 */

char *__thiscall RFONTOBJ::pchTranslate(RFONTOBJ *this, const char *a2)
{
  _DWORD *v3; // ebx
  _DWORD *v4; // eax
  unsigned int v5; // ecx
  _DWORD *v6; // eax
  unsigned int v7; // edi
  void *v8; // ecx
  char *v9; // eax
  unsigned int v11; // [esp+0h] [ebp-24h]
  struct _FONTFILE_PRINTKVIEW **v12; // [esp+4h] [ebp-20h]
  _DWORD *v14; // [esp+10h] [ebp-14h]
  int v15; // [esp+14h] [ebp-10h]
  _DWORD *v16; // [esp+18h] [ebp-Ch]
  unsigned int v17; // [esp+1Ch] [ebp-8h] BYREF
  PVOID MappedBase; // [esp+20h] [ebp-4h] BYREF
  const char *v19; // [esp+2Ch] [ebp+8h]

  MappedBase = 0;
  v17 = 0;
  if ( (unsigned int)a2 < 0x10000 )
    return 0;
  if ( a2 > _MmHighestUserAddress )
    return 0;
  v3 = *(_DWORD **)(*(_DWORD *)this + 84);
  if ( !v3 )
    return 0;
  v15 = v3[14];
  if ( !v15 )
    return 0;
  v4 = (_DWORD *)v3[30];
  v16 = v4;
  if ( !v4 )
    return 0;
  v5 = 0;
  v19 = 0;
  if ( !v3[5] )
    return 0;
  while ( 1 )
  {
    v6 = (_DWORD *)*v4;
    v14 = v6;
    if ( !v6 )
      goto LABEL_17;
    v7 = v6[16];
    if ( !v7 )
    {
      v7 = v6[3];
      if ( !v7 )
        goto LABEL_17;
    }
    if ( v7 > (unsigned int)a2 || (unsigned int)a2 >= v7 + v6[4] )
      goto LABEL_17;
    if ( bFindPrintKView(v5, v15, &v17, v11, v12) && *(_DWORD *)(v17 + 12) )
    {
      v9 = *(char **)(v17 + 12);
      return &v9[(_DWORD)a2 - v7];
    }
    v8 = (void *)v14[5];
    if ( v8 )
    {
      if ( MapFontFileInKernel(v8, &MappedBase) >= 0 )
        break;
    }
    v5 = (unsigned int)v19;
LABEL_17:
    v4 = v16 + 1;
    ++v5;
    ++v16;
    v19 = (const char *)v5;
    if ( v5 >= v3[5] )
      return 0;
  }
  if ( bAddPrintKView(
         (int)MappedBase,
         v15,
         (unsigned int)v19,
         *(void **)(*(_DWORD *)(*(_DWORD *)this + 80) + 48),
         v17,
         v11,
         (struct _FONTFILE_PRINTKVIEW *)v12) )
  {
    v9 = (char *)MappedBase;
    return &v9[(_DWORD)a2 - v7];
  }
  MmUnmapViewInSessionSpace(MappedBase);
  return 0;
}
