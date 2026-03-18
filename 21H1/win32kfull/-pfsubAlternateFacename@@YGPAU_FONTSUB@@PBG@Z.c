/*
 * XREFs of ?pfsubAlternateFacename@@YGPAU_FONTSUB@@PBG@Z @ 0x886E4
 * Callers:
 *     ?EnumEngineOnly@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2PAVDCOBJ@@PAKPAX@Z @ 0x88A46 (-EnumEngineOnly@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2PAVDCOBJ@@PAKPAX@Z.c)
 *     ?bFindBitmapFont@MAPPER@@QAEHPBG@Z @ 0x8ADEA (-bFindBitmapFont@MAPPER@@QAEHPBG@Z.c)
 *     ?EnumDeviceAndEngine@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2AAVPFFOBJ@@AAVPDEVOBJ@@PAVDCOBJ@@PAKPAX@Z @ 0x21F000 (-EnumDeviceAndEngine@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2AAVPFFOBJ@@AAVPDEVOBJ@@PAVD.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _cCapString@12 @ 0x89EC2 (_cCapString@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

struct _FONTSUB *__cdecl pfsubAlternateFacename()
{
  struct _FONTSUB *v0; // esi
  struct _FONTSUB *v1; // edi
  _WORD *v2; // ecx
  char *v3; // eax
  bool v4; // cf
  unsigned __int16 v5; // dx
  int v6; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v10; // eax
  char v11; // [esp+Ch] [ebp-44h] BYREF

  v0 = gpfsTable;
  v1 = (struct _FONTSUB *)((char *)gpfsTable + 196 * gcfsTable);
  cCapString(32);
  if ( v0 >= v1 )
    return 0;
  while ( 1 )
  {
    v2 = (_WORD *)((char *)v0 + 64);
    v3 = &v11;
    while ( 1 )
    {
      v4 = *(_WORD *)v3 < *v2;
      if ( *(_WORD *)v3 != *v2 )
        break;
      if ( !*(_WORD *)v3 )
        goto LABEL_7;
      v5 = *((_WORD *)v3 + 1);
      v4 = v5 < v2[1];
      if ( v5 != v2[1] )
        break;
      v3 += 4;
      v2 += 2;
      if ( !v5 )
      {
LABEL_7:
        v6 = 0;
        goto LABEL_8;
      }
    }
    v6 = v4 ? -1 : 1;
LABEL_8:
    if ( !v6 && ((*((_BYTE *)v0 + 129) & 1) != 0 || *((_BYTE *)v0 + 128) == *((_BYTE *)v0 + 194)) )
    {
      if ( v0 != gpfsTable )
        return v0;
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      if ( *(_DWORD *)(ThreadWin32Thread + 340) <= 0x400u )
        v10 = *(_DWORD *)(ThreadWin32Thread + 352);
      else
        LOWORD(v10) = 0;
      if ( (v10 & 0x400) != 0 )
        return v0;
    }
    v0 = (struct _FONTSUB *)((char *)v0 + 196);
    if ( v0 >= v1 )
      return 0;
  }
}
