/*
 * XREFs of ?vSetBest@MAPPER@@QAEXPAVPFE@@HE@Z @ 0x1F51F3
 * Callers:
 *     ?bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z @ 0x1F4BAA (-bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QAEXXZ @ 0x1F4FA1 (-vAttemptDeviceMatch@MAPPER@@QAEXXZ.c)
 *     ?vEmergency@MAPPER@@QAEXXZ @ 0x1F50F6 (-vEmergency@MAPPER@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall MAPPER::vSetBest(MAPPER *this, struct PFE *a2, int a3, unsigned __int8 a4)
{
  _DWORD *v4; // edx
  int v5; // eax

  **((_DWORD **)this + 49) = *((_DWORD *)this + 44);
  v4 = (_DWORD *)*((_DWORD *)this + 50);
  *v4 = *((_DWORD *)this + 45);
  v4[1] = *((_DWORD *)this + 46);
  **((_DWORD **)this + 51) = **((_DWORD **)this + 51) & 0xFFFFFF | (a4 << 24);
  *((_DWORD *)this + 47) = a2;
  if ( a3 )
  {
    *((_DWORD *)this + 55) |= 0x1000000u;
  }
  else
  {
    v5 = *((_DWORD *)a2 + 12);
    *((_DWORD *)this + 55) &= ~0x1000000u;
    *((_DWORD *)this + 48) = v5;
  }
}
