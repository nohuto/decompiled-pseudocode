/*
 * XREFs of ?SetDelayableTimer@@YGXKK@Z @ 0xA7898
 * Callers:
 *     _InternalSetTimer@24 @ 0x2CB62 (_InternalSetTimer@24.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDelayableTimer(int a1, int a2)
{
  __int64 v3; // rax

  v3 = -10000LL * a1;
  if ( a1 == a2 )
    KeSetTimer(_gptmrMaster, (LARGE_INTEGER)v3, 0);
  else
    KeSetCoalescableTimer(_gptmrMaster, (LARGE_INTEGER)v3, 0, a2 - a1, 0);
}
