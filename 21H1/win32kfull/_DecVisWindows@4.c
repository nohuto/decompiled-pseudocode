/*
 * XREFs of _DecVisWindows@4 @ 0x1CC58
 * Callers:
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     _SetMinimize@8 @ 0xB4ABE (_SetMinimize@8.c)
 * Callees:
 *     _FVisCountable@4 @ 0x1CD18 (_FVisCountable@4.c)
 *     __GetWindowCompositionInfo@8 @ 0x6DCA6 (__GetWindowCompositionInfo@8.c)
 */

unsigned int __thiscall DecVisWindows(_DWORD *this)
{
  unsigned int result; // eax
  int v3; // esi
  int v4; // eax
  _DWORD *v5; // ecx
  _WORD v6[18]; // [esp+Ch] [ebp-24h] BYREF

  memset(v6, 0, sizeof(v6));
  result = FVisCountable(this);
  if ( result )
  {
    v3 = this[2];
    v4 = *(_DWORD *)(v3 + 232);
    --*(_DWORD *)(v3 + 508);
    --*(_DWORD *)(v4 + 616);
    if ( _GetWindowCompositionInfo(this, v6) && (v6[0] & 0xC00) != 0 )
      --*(_DWORD *)(*(_DWORD *)(v3 + 232) + 620);
    v5 = *(_DWORD **)(v3 + 232);
    result = v5[154];
    if ( result <= v5[155] && (v5[116] & 0x4000) != 0 )
    {
      PsUpdateComponentPower(*v5, 5, 0, 0);
      GreDxgkSetProcessStatus(*(_DWORD *)(v3 + 232), 2, 0);
      result = *(_DWORD *)(v3 + 232);
      *(_DWORD *)(result + 464) &= ~0x4000u;
    }
  }
  return result;
}
