/*
 * XREFs of ?RefreshMiPIdleNotificationTimer@@YGXPAUtagWND@@@Z @ 0x14D989
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YGHPAUtagQMSG@@I0PAUtagWND@@H@Z @ 0x14CF17 (-GeneratePointerMessageFromMouse@@YGHPAUtagQMSG@@I0PAUtagWND@@H@Z.c)
 * Callees:
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     __SetSystemTimer@20 @ 0xCA7A8 (__SetSystemTimer@20.c)
 */

void __thiscall RefreshMiPIdleNotificationTimer(_DWORD *this)
{
  int v2; // ecx
  int v3; // edi
  int v4; // esi
  int v5; // edi
  unsigned int v6; // edx
  int v7; // edx
  int v8; // ecx
  unsigned int v9; // eax

  v2 = MEMORY[0xFFDF0004];
  v3 = this[2];
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v5 = MEMORY[0xFFDF0324];
    v6 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v5 = MEMORY[0xFFDF0324];
        v6 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v2 = MEMORY[0xFFDF0004];
    }
    v4 = v2 * (v5 << 8) + (((unsigned int)v2 * (unsigned __int64)v6) >> 24);
    v3 = this[2];
  }
  else
  {
    v4 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  v7 = *(_DWORD *)(v3 + 720);
  v8 = *(_DWORD *)(v7 + 4);
  if ( *this != v8 )
  {
    v9 = ValidateHwnd(v8);
    if ( v9 )
      FindTimer(v9, 65523, 2u, 1, 0);
    *(_DWORD *)(*(_DWORD *)(v3 + 720) + 4) = *this;
    *(_DWORD *)(*(_DWORD *)(v3 + 720) + 8) = v4 - 101;
    v7 = *(_DWORD *)(v3 + 720);
  }
  if ( (unsigned int)(v4 - *(_DWORD *)(v7 + 8)) > 0x64 )
  {
    *(_DWORD *)(v7 + 8) = v4;
    _SetSystemTimer((unsigned int)this, (char *)0xFFF3, 0x47Eu, (int)MiPIdleTimerFunc, 1);
  }
}
