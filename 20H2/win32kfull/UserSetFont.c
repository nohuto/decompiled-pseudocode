/*
 * XREFs of UserSetFont @ 0x1C00242BC
 * Callers:
 *     SetIconMetrics @ 0x1C00237E0 (SetIconMetrics.c)
 *     xxxSetNCFonts @ 0x1C0024488 (xxxSetNCFonts.c)
 * Callees:
 *     CreateFontFromUserProfile @ 0x1C0024338 (CreateFontFromUserProfile.c)
 *     GreMarkDeletableFont @ 0x1C0025288 (GreMarkDeletableFont.c)
 */

__int64 __fastcall UserSetFont(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3, struct HLFONT__ **a4)
{
  __int64 result; // rax
  struct HLFONT__ *v6; // rdi

  result = CreateFontFromUserProfile(a1);
  v6 = (struct HLFONT__ *)result;
  if ( result )
  {
    if ( *a4
      && *a4 != *(struct HLFONT__ **)(GetSessionDpiServerInfo() + 24)
      && *a4 != *(struct HLFONT__ **)(Get96DpiServerInfo() + 24) )
    {
      GreMarkDeletableFont(*a4);
      GreDeleteObject(*a4);
    }
    *a4 = v6;
    return 1LL;
  }
  return result;
}
