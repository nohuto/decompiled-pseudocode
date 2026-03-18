/*
 * XREFs of ?_EnableShellWindowManagementBehavior@@YAH_K0@Z @ 0x1C012A030
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0066514 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C00AE030 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C00BEC38 (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z.c)
 *     ?InitializeWindowGroupFunctionality@WindowGroupingFeature@@YAJ_K@Z @ 0x1C0241530 (-InitializeWindowGroupFunctionality@WindowGroupingFeature@@YAJ_K@Z.c)
 */

__int64 __fastcall _EnableShellWindowManagementBehavior()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // r10d
  int v4; // r11d
  int v5; // eax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  WindowGroupingFeature *v9; // r10

  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
    v7 = 5LL;
LABEL_9:
    UserSetLastError(v7, v0, v1);
    return 0LL;
  }
  if ( (v3 & 0xEFFFFF00) != 0 )
  {
    v7 = 87LL;
    goto LABEL_9;
  }
  v5 = v4 & v3 | v1 & ~v4;
  if ( v5 && !*(_QWORD *)(v2 + 328) )
  {
    *(_DWORD *)(v2 + 336) = 0;
    v7 = 5023LL;
    goto LABEL_9;
  }
  *(_DWORD *)(v2 + 336) = v5;
  if ( ((v5 ^ v1) & 0x80u) != 0LL )
  {
    if ( ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)v2, (const struct tagDESKTOP *)0x80) )
      WindowGroupingFeature::InitializeWindowGroupFunctionality(v9, v8);
    else
      WindowGroupingFeature::UnInitializeWindowGroupFunctionality(v9);
  }
  return 1LL;
}
