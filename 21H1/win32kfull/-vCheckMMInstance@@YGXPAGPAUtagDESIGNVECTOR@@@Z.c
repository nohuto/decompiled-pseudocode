/*
 * XREFs of ?vCheckMMInstance@@YGXPAGPAUtagDESIGNVECTOR@@@Z @ 0xD7352
 * Callers:
 *     ?xxxbEnumerateRegistryFontsInternal@@YGHPAXK@Z @ 0xD7046 (-xxxbEnumerateRegistryFontsInternal@@YGHPAXK@Z.c)
 * Callees:
 *     ?RtlStringCchCopyNW@@YGJPAGIPBGI@Z @ 0xAC102 (-RtlStringCchCopyNW@@YGJPAGIPBGI@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _GreGetCannonicalName@16 @ 0x1F526B (_GreGetCannonicalName@16.c)
 */

void __fastcall vCheckMMInstance(size_t a1, int a2)
{
  const wchar_t *v4; // esi
  int v5; // eax
  const unsigned __int16 *v6; // [esp+0h] [ebp-424h]
  unsigned int v7; // [esp+4h] [ebp-420h]
  int v8; // [esp+Ch] [ebp-418h] BYREF
  _BYTE Src[520]; // [esp+218h] [ebp-20Ch] BYREF

  v4 = (const wchar_t *)a1;
  *(_DWORD *)(a2 + 4) = 0;
  while ( 1 )
  {
    v5 = *v4;
    if ( !(_WORD)v5 )
      break;
    ++v4;
    if ( v5 == 40 )
    {
      if ( *v4
        && !__wcsicmp(v4, L"OpenType)")
        && RtlStringCchCopyNW(a1, (size_t *)(((int)((int)v4 - a1) >> 1) - 1), v6, v7) >= 0 )
      {
        GreGetCannonicalName(Src, (int)&v8, a2);
      }
      return;
    }
  }
}
