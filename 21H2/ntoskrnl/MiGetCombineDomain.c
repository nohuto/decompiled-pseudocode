/*
 * XREFs of MiGetCombineDomain @ 0x140369E6C
 * Callers:
 *     MiCapturePfnVm @ 0x140368100 (MiCapturePfnVm.c)
 *     MiSharePages @ 0x140368360 (MiSharePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetCombineDomain(int a1, __int64 a2)
{
  if ( a1 == 1 )
    return *(_QWORD *)(a2 + 864);
  if ( a1 == 2 )
    return 0LL;
  return *(_QWORD *)(a2 - 32);
}
