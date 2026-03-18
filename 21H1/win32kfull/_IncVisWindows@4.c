/*
 * XREFs of _IncVisWindows@4 @ 0x1CB86
 * Callers:
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     _SetMinimize@8 @ 0xB4ABE (_SetMinimize@8.c)
 * Callees:
 *     _FVisCountable@4 @ 0x1CD18 (_FVisCountable@4.c)
 *     __GetWindowCompositionInfo@8 @ 0x6DCA6 (__GetWindowCompositionInfo@8.c)
 */

int __thiscall IncVisWindows(_DWORD *this)
{
  int result; // eax
  _DWORD *v3; // esi
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // eax
  _WORD v7[18]; // [esp+Ch] [ebp-24h] BYREF

  memset(v7, 0, sizeof(v7));
  result = FVisCountable(this);
  if ( result )
  {
    v3 = (_DWORD *)this[2];
    v4 = v3[58];
    ++v3[127];
    ++*(_DWORD *)(v4 + 616);
    if ( _GetWindowCompositionInfo(this, v7) && (v7[0] & 0xC00) != 0 )
      ++*(_DWORD *)(v3[58] + 620);
    v5 = (_DWORD *)v3[58];
    if ( v5[154] > v5[155] && (v5[116] & 0x4000) == 0 )
    {
      GreDxgkSetProcessStatus(v5, 2, 1);
      PsUpdateComponentPower(*(_DWORD *)v3[58], 5, 1, 0);
      *(_DWORD *)(v3[58] + 464) |= 0x4000u;
    }
    v6 = v3[172];
    v3[173] |= 2u;
    v3[172] = v6;
    return EtwTraceProcessWindowInfo(v3);
  }
  return result;
}
