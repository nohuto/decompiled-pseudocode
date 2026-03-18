/*
 * XREFs of UserKillTimer @ 0x1C0249214
 * Callers:
 *     ?vDisableTimers@@YAXK@Z @ 0x1C011DC10 (-vDisableTimers@@YAXK@Z.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0026584 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     FindTimer @ 0x1C00C0ABC (FindTimer.c)
 */

__int64 __fastcall UserKillTimer(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1;
  v1 = gidSynchronizeTimer;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v6);
  result = FindTimer(0LL, v1, 4u, 1, 0LL);
  if ( !(_DWORD)v6 )
    return UserSessionSwitchLeaveCrit(v4, v3, v5);
  return result;
}
