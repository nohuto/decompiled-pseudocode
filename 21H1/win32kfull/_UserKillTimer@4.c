/*
 * XREFs of _UserKillTimer@4 @ 0x1A5A1D
 * Callers:
 *     ?vDisableTimers@@YGXK@Z @ 0xAD16A (-vDisableTimers@@YGXK@Z.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QAE@XZ @ 0x6FC2E (--0ReEnterLeaveCrit@@QAE@XZ.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 */

int UserKillTimer()
{
  int v0; // esi
  int result; // eax
  int v2; // [esp+4h] [ebp-4h] BYREF

  v0 = gidSynchronizeTimer;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v2);
  result = FindTimer(0, v0, 4u, 1, 0);
  if ( !v2 )
    return UserSessionSwitchLeaveCrit();
  return result;
}
