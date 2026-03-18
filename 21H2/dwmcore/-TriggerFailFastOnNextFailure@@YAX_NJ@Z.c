/*
 * XREFs of ?TriggerFailFastOnNextFailure@@YAX_NJ@Z @ 0x18026BD68
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18007CB4C (-ProcessComposition@CComposition@@IEAAXPEA_N@Z.c)
 *     ??1CFailFastInScope@@QEAA@XZ @ 0x18007CD98 (--1CFailFastInScope@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall TriggerFailFastOnNextFailure(char a1, int a2)
{
  DWORD CurrentThreadId; // eax

  CurrentThreadId = 0;
  if ( a1 )
    CurrentThreadId = GetCurrentThreadId();
  else
    a2 = 0;
  g_dwFailFastForThreadId = CurrentThreadId;
  g_hrFailFastExpectedError = a2;
}
