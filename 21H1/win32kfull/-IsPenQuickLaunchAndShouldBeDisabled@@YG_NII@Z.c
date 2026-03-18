/*
 * XREFs of ?IsPenQuickLaunchAndShouldBeDisabled@@YG_NII@Z @ 0xC5696
 * Callers:
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 * Callees:
 *     ?IsPenQuickLaunchHotKey@@YG_NII@Z @ 0xC5744 (-IsPenQuickLaunchHotKey@@YG_NII@Z.c)
 *     ?Feature_QuickLaunchInvocation__private_IsEnabledPreCheck@@YGHXZ @ 0x155D05 (-Feature_QuickLaunchInvocation__private_IsEnabledPreCheck@@YGHXZ.c)
 *     ?TraceLoggingSuppressQuickLaunch@@YGXXZ @ 0x18706D (-TraceLoggingSuppressQuickLaunch@@YGXXZ.c)
 */

char __stdcall IsPenQuickLaunchAndShouldBeDisabled()
{
  char v0; // bl
  int v1; // edx
  int v2; // edx
  unsigned int v3; // ecx
  unsigned int v4; // edi
  unsigned int v6; // [esp+0h] [ebp-18h]
  unsigned int v7; // [esp+4h] [ebp-14h]
  __int64 v8; // [esp+10h] [ebp-8h]

  v0 = 0;
  if ( IsPenQuickLaunchHotKey(v6, v7) )
  {
    Feature_QuickLaunchInvocation__private_IsEnabledPreCheck();
    LODWORD(v8) = RIMGetLastInvertedPenTime();
    HIDWORD(v8) = v1;
    v2 = MEMORY[0xFFDF0004];
    v3 = MEMORY[0xFFDF0324];
    v4 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v3 = MEMORY[0xFFDF0324];
        v4 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v2 = MEMORY[0xFFDF0004];
      v0 = 0;
    }
    if ( (((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)v4) >> 24)
       + (((unsigned int)v2 * (unsigned __int64)v3) << 8)
       - v8 < 0xFA )
    {
      v0 = 1;
      TraceLoggingSuppressQuickLaunch();
    }
  }
  return v0;
}
