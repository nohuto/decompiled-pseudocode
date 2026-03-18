/*
 * XREFs of ?ppfeNext@ENUMFHOBJ@@QAEPAVPFE@@XZ @ 0x1F4F74
 * Callers:
 *     ?bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z @ 0x1F4BAA (-bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QAEXXZ @ 0x1F4FA1 (-vAttemptDeviceMatch@MAPPER@@QAEXXZ.c)
 *     ?vEmergency@MAPPER@@QAEXXZ @ 0x1F50F6 (-vEmergency@MAPPER@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

struct PFE *__thiscall ENUMFHOBJ::ppfeNext(ENUMFHOBJ *this)
{
  int *v1; // eax
  int v2; // esi
  int v3; // edx
  int v4; // eax

  v1 = (int *)*((_DWORD *)this + 2);
  v2 = 0;
  v3 = *v1;
  *((_DWORD *)this + 2) = *v1;
  if ( v3 )
    return *(struct PFE **)(v3 + 4);
  v4 = *(_DWORD *)(*((_DWORD *)this + 3) + 28);
  *((_DWORD *)this + 3) = v4;
  if ( v4 )
  {
    v3 = *(_DWORD *)(v4 + 4);
    *((_DWORD *)this + 2) = v3;
  }
  if ( v3 )
    return *(struct PFE **)(v3 + 4);
  return (struct PFE *)v2;
}
