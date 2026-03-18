/*
 * XREFs of ?CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C006BCDC
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C006CF88 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CitpGetForegroundWindowInfo(
        struct _CIT_WINDOW_INFO *a1,
        struct tagPROCESSINFO *a2,
        struct tagWND *a3)
{
  int v6; // eax
  __int64 v7; // rbx

  if ( qword_1C0252350 )
    v6 = qword_1C0252350();
  else
    v6 = -1073741637;
  if ( v6 < 0 )
    return 0LL;
  if ( !a3 )
  {
    if ( !gptiForeground )
      return 0LL;
    if ( *((struct tagPROCESSINFO **)gptiForeground + 52) != a2 )
      return 0LL;
    v7 = *((_QWORD *)gptiForeground + 53);
    if ( !v7 )
      return 0LL;
    a3 = *(struct tagWND **)(v7 + 120);
    if ( !a3 )
      return 0LL;
  }
  if ( qword_1C0252358 )
    qword_1C0252358(a3, a1);
  return 1LL;
}
