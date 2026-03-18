/*
 * XREFs of UserSetTimer @ 0x1C024926C
 * Callers:
 *     RawInputThread @ 0x1C00C62E0 (RawInputThread.c)
 *     vEnableSynchronize @ 0x1C0124A50 (vEnableSynchronize.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0026584 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     InternalSetTimer @ 0x1C0089420 (InternalSetTimer.c)
 */

__int64 __fastcall UserSetTimer(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rbx
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v6);
  if ( gptmrMaster )
    v4 = InternalSetTimer(0LL, 0LL, 0x32u, (__int64)GreSynchronizeTimer, 0, 132);
  else
    v4 = 0LL;
  if ( !v6 )
    UserSessionSwitchLeaveCrit(v2, v1, v3);
  return v4;
}
