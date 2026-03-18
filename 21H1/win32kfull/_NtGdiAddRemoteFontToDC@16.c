/*
 * XREFs of _NtGdiAddRemoteFontToDC@16 @ 0x1E92FF
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ??0PUBLIC_PFTOBJ@@QAE@XZ @ 0xF5D45 (--0PUBLIC_PFTOBJ@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNIVERSAL_FONT_ID@@PAH@Z @ 0x1D0A09 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNI.c)
 *     ?bCreateFontFileView@@YGHPBU_FONTFILEVIEW@@PBUtagDOWNLOADFONTHEADER@@KPAPAPAU1@K@Z @ 0x1E8DAB (-bCreateFontFileView@@YGHPBU_FONTFILEVIEW@@PBUtagDOWNLOADFONTHEADER@@KPAPAPAU1@K@Z.c)
 *     _cMapRemoteFonts@16 @ 0x1E949B (_cMapRemoteFonts@16.c)
 *     _vUnmapRemoteFonts@4 @ 0x1E9844 (_vUnmapRemoteFonts@4.c)
 */

unsigned int __stdcall NtGdiAddRemoteFontToDC(
        HDC a1,
        struct _UNIVERSAL_FONT_ID *a2,
        struct _FONTFILEVIEW *a3,
        unsigned int a4)
{
  unsigned int FontFileView; // edi
  struct PFF **v5; // esi
  unsigned int v6; // ebx
  unsigned int v7; // eax
  struct _UNIVERSAL_FONT_ID *v8; // edx
  PUBLIC_PFTOBJ *v9; // ecx
  struct _FONTFILEVIEW ***v11; // [esp+0h] [ebp-8Ch]
  unsigned int v12; // [esp+4h] [ebp-88h]
  unsigned __int64 v13[9]; // [esp+10h] [ebp-7Ch] BYREF
  _DWORD v14[3]; // [esp+58h] [ebp-34h] BYREF
  struct PFF *v15; // [esp+64h] [ebp-28h] BYREF
  struct PFF *v16; // [esp+68h] [ebp-24h]
  struct PFF **v17; // [esp+6Ch] [ebp-20h]
  unsigned __int64 *v18; // [esp+70h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+74h] [ebp-18h]

  memset(v13, 0, sizeof(v13));
  FontFileView = 0;
  v15 = 0;
  v16 = 0;
  v5 = (struct PFF **)a4;
  v6 = 0;
  ms_exc.registration.TryLevel = 0;
  if ( a4 )
  {
    if ( a4 >= _MmUserProbeAddress )
      v5 = (struct PFF **)_MmUserProbeAddress;
    v15 = *v5;
    v16 = v5[1];
    v5 = &v15;
    v17 = &v15;
  }
  ms_exc.registration.TryLevel = -2;
  v14[1] = 0;
  v14[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v14, a1);
  if ( v14[0] )
  {
    a1 = 0;
    v18 = 0;
    a4 = (unsigned int)a2;
    v7 = cMapRemoteFonts(v13, 1);
    a2 = (struct _UNIVERSAL_FONT_ID *)v7;
    v8 = (struct _UNIVERSAL_FONT_ID *)a4;
    if ( a4 && v7 )
    {
      v18 = v13;
      v6 = 1;
      a4 = 1;
      FontFileView = bCreateFontFileView((int)v8, v13, a3, (const struct tagDOWNLOADFONTHEADER *)&a1, v7, v11, v12);
      if ( !FontFileView )
        goto LABEL_11;
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&a3);
      FontFileView = PUBLIC_PFTOBJ::bLoadRemoteFonts(
                       v9,
                       (struct XDCOBJ *)v14,
                       (struct _FONTFILEVIEW **)a1,
                       (unsigned int)a2,
                       0,
                       v5,
                       (int *)&a4);
      v6 = a4;
    }
    if ( FontFileView )
    {
LABEL_13:
      XDCOBJ::vUnlockFast((XDCOBJ *)v14);
      return FontFileView;
    }
LABEL_11:
    if ( v6 )
      vUnmapRemoteFonts(v18);
    goto LABEL_13;
  }
  return 0;
}
