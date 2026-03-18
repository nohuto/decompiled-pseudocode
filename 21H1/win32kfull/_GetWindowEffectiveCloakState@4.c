/*
 * XREFs of _GetWindowEffectiveCloakState@4 @ 0xF3D09
 * Callers:
 *     _NtUserGetWindowCompositionAttribute@8 @ 0x80AF0 (_NtUserGetWindowCompositionAttribute@8.c)
 * Callees:
 *     ?GetCloakFlags@@YGKPBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C972 (-GetCloakFlags@@YGKPBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     __GetWindowCompositionInfo@8 @ 0x6DCA6 (__GetWindowCompositionInfo@8.c)
 */

int __thiscall GetWindowEffectiveCloakState(void *this)
{
  unsigned int v2; // esi
  int v3; // edi
  unsigned int CloakFlags; // eax
  unsigned int v6[9]; // [esp+Ch] [ebp-24h] BYREF

  v2 = 0;
  memset(v6, 0, sizeof(v6));
  v3 = (int)this;
  while ( 1 )
  {
    if ( _GetWindowCompositionInfo(v3, v6) )
    {
      CloakFlags = GetCloakFlags((int *)v6);
      v2 = CloakFlags;
      if ( CloakFlags )
        break;
    }
    v3 = *(_DWORD *)(v3 + 56);
    if ( !v3 )
      return v2;
  }
  if ( (void *)v3 != this )
    return CloakFlags | 4;
  return v2;
}
