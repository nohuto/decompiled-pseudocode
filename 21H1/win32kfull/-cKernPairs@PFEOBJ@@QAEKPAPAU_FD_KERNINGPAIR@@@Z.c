/*
 * XREFs of ?cKernPairs@PFEOBJ@@QAEKPAPAU_FD_KERNINGPAIR@@@Z @ 0x229413
 * Callers:
 *     _GreGetKerningPairs@12 @ 0x1EBB0B (_GreGetKerningPairs@12.c)
 * Callees:
 *     ?QueryFontTree@PFFOBJ@@QAEPAXPAUDHPDEV__@@KKKPAK@Z @ 0x85878 (-QueryFontTree@PFFOBJ@@QAEPAXPAUDHPDEV__@@KKKPAK@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __thiscall PFEOBJ::cKernPairs(PFEOBJ *this, struct _FD_KERNINGPAIR **a2)
{
  struct _FD_KERNINGPAIR *v3; // edx
  _DWORD *v4; // edi
  int result; // eax
  int FontTree; // eax
  int v7; // ecx
  _WORD *v8; // eax
  _DWORD v9[4]; // [esp+10h] [ebp-28h] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v9[3] = this;
  v3 = *(struct _FD_KERNINGPAIR **)(*(_DWORD *)this + 28);
  *a2 = v3;
  v4 = *(_DWORD **)this;
  if ( v3 )
    return v4[9];
  v9[0] = *v4;
  FontTree = PFFOBJ::QueryFontTree(
               (PFFOBJ *)v9,
               *(struct DHPDEV__ **)(v9[0] + 64),
               *(_DWORD *)(v9[0] + 56),
               v4[1],
               2u,
               v4 + 8);
  *(_DWORD *)(*(_DWORD *)this + 28) = FontTree;
  v7 = *(_DWORD *)this;
  if ( FontTree )
  {
    v8 = *(_WORD **)(v7 + 28);
    ms_exc.registration.TryLevel = 0;
    while ( *v8 || v8[1] || v8[2] )
    {
      v8 += 3;
      v9[2] = v8;
    }
    ms_exc.registration.TryLevel = -2;
    *a2 = *(struct _FD_KERNINGPAIR **)(*(_DWORD *)this + 28);
    result = ((int)v8 - *(_DWORD *)(*(_DWORD *)this + 28)) / 6;
    *(_DWORD *)(*(_DWORD *)this + 36) = result;
  }
  else
  {
    *(_DWORD *)(v7 + 28) = &gkpNothing;
    *(_DWORD *)(*(_DWORD *)this + 36) = 0;
    return 0;
  }
  return result;
}
