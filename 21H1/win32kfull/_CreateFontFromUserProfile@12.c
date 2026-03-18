/*
 * XREFs of _CreateFontFromUserProfile@12 @ 0xDAD68
 * Callers:
 *     _UserSetFont@16 @ 0xDAD12 (_UserSetFont@16.c)
 *     ?SPISetIconTitleFont@@YGHPAU_UNICODE_STRING@@PAUtagLOGFONTW@@H@Z @ 0x1452C0 (-SPISetIconTitleFont@@YGHPAU_UNICODE_STRING@@PAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     _GreCreateFontIndirectW@8 @ 0x89CD6 (_GreCreateFontIndirectW@8.c)
 *     _GreSetLFONTOwner@8 @ 0xDAE1E (_GreSetLFONTOwner@8.c)
 *     ?GetLogFontFromUserProfile@@YG?AUtagLOGFONTW@@PAU_UNICODE_STRING@@I@Z @ 0xDAE42 (-GetLogFontFromUserProfile@@YG-AUtagLOGFONTW@@PAU_UNICODE_STRING@@I@Z.c)
 *     _GreMarkDeletableFont@4 @ 0xDAFD8 (_GreMarkDeletableFont@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

struct HLFONT__ *__fastcall CreateFontFromUserProfile(int a1, _DWORD *a2, int a3)
{
  struct HLFONT__ *FontIndirectW; // esi
  struct _UNICODE_STRING *v6; // [esp+0h] [ebp-DCh]
  unsigned int v7; // [esp+4h] [ebp-D8h]
  _BYTE v8[96]; // [esp+10h] [ebp-CCh] BYREF
  struct tagLOGFONTW v9; // [esp+70h] [ebp-6Ch] BYREF

  memset(v8, 0, 0x5Cu);
  if ( !a2 )
  {
    qmemcpy(v8, GetLogFontFromUserProfile(&v9, v6, v7), 0x5Cu);
    a2 = v8;
  }
  FontIndirectW = (struct HLFONT__ *)GreCreateFontIndirectW((int)a2, 128);
  if ( FontIndirectW )
  {
    memset(&v9, 0, sizeof(v9));
    if ( GreExtGetObjectW(FontIndirectW, 92, &v9) && v9.lfHeight == *a2 )
    {
      GreSetLFONTOwner(FontIndirectW, 0);
    }
    else
    {
      GreMarkDeletableFont(FontIndirectW);
      GreDeleteObject(FontIndirectW);
      return 0;
    }
  }
  return FontIndirectW;
}
