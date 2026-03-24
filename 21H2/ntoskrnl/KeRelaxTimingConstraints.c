/*
 * XREFs of KeRelaxTimingConstraints @ 0x140511F98
 * Callers:
 *     KdEnableDebugger @ 0x140510D40 (KdEnableDebugger.c)
 *     KeInitSystem @ 0x140A4C33C (KeInitSystem.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402940C8 (KiResetGlobalDpcWatchdogProfiler.c)
 */

bool __fastcall KeRelaxTimingConstraints(int a1)
{
  bool v1; // di
  char v2; // bl
  __int64 *v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rcx
  bool result; // al

  v1 = KeEnableWatchdogTimeout == 0;
  if ( a1 )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    if ( !KeEnableWatchdogTimeout && (_DWORD)KeNumberProcessors_0 )
    {
      v3 = KiProcessorBlock;
      v4 = (unsigned int)KeNumberProcessors_0;
      do
      {
        v5 = *v3;
        *(_DWORD *)(v5 + 31724) = 0;
        *(_DWORD *)(v5 + 32412) = 0;
        KiResetGlobalDpcWatchdogProfiler(v5);
        ++v3;
        --v4;
      }
      while ( v4 );
    }
  }
  result = v1;
  KeEnableWatchdogTimeout = v2;
  return result;
}
