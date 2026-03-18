/*
 * XREFs of ?TraceLoggingProcessUsageDataAggregationHelper@@YGXQAUtagWND@@@Z @ 0x190C2
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     _IsShellProcess@4 @ 0x1B0F4 (_IsShellProcess@4.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YGXQAUtagWND@@H@Z @ 0x25BC6 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YGXQAUtagWND@@H@Z.c)
 */

void __stdcall TraceLoggingProcessUsageDataAggregationHelper()
{
  int v0; // ecx
  struct tagWND *v1; // [esp+0h] [ebp-Ch]
  int v2; // [esp+4h] [ebp-8h]

  if ( _gptiCurrent && *(_DWORD *)(_gptiCurrent + 232) && !IsShellProcess() && *(_DWORD *)(v0 + 616) )
  {
    if ( !*(_DWORD *)(v0 + 528) )
    {
      *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 548) = PsGetThreadProcessId((PETHREAD)*_gptiCurrent);
      *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 580) &= ~1u;
      *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 580) &= ~2u;
      *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 580) &= ~4u;
      *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 576) = 0;
      *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 572) = 0;
    }
    TraceLoggingProcessMonitorInfoUpdateHelper(v1, v2);
    ++*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 528);
  }
}
