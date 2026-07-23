/*
 * XREFs of RtlpHpStackTraceHeapDisable @ 0x180109490
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpPerHeapStackTraceCleanup @ 0x180108710 (RtlpHpPerHeapStackTraceCleanup.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapDisable(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  v2 = 28LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v2 = 208LL;
  v3 = 104LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v3 = 368LL;
  RtlpHpPerHeapStackTraceCleanup((_RTL_RUN_ONCE *)(a1 + v3), *(_WORD *)(v2 + a1) == 0xFFFF, 1);
  return 0LL;
}
