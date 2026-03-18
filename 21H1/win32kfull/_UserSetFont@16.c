/*
 * XREFs of _UserSetFont@16 @ 0xDAD12
 * Callers:
 *     ?SetIconFonts@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@@Z @ 0xDA45C (-SetIconFonts@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@@Z.c)
 *     _xxxSetNCFonts@8 @ 0xDA4C2 (_xxxSetNCFonts@8.c)
 * Callees:
 *     _CreateFontFromUserProfile@12 @ 0xDAD68 (_CreateFontFromUserProfile@12.c)
 *     _GreMarkDeletableFont@4 @ 0xDAFD8 (_GreMarkDeletableFont@4.c)
 */

int __stdcall UserSetFont(int a1, struct HLFONT__ **a2)
{
  int FontFromUserProfile; // edi

  FontFromUserProfile = CreateFontFromUserProfile(a1);
  if ( !FontFromUserProfile )
    return 0;
  if ( *a2
    && *a2 != *(struct HLFONT__ **)(GetSessionDpiServerInfo() + 20)
    && *a2 != *(struct HLFONT__ **)(Get96DpiServerInfo() + 20) )
  {
    GreMarkDeletableFont(*a2);
    GreDeleteObject(*a2);
  }
  *a2 = (struct HLFONT__ *)FontFromUserProfile;
  return 1;
}
