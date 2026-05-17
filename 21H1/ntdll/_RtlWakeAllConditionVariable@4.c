/*
 * XREFs of _RtlWakeAllConditionVariable@4 @ 0x4B2EA460
 * Callers:
 *     _EtwpStopLoggerInstance@4 @ 0x4B2EDB7A (_EtwpStopLoggerInstance@4.c)
 *     _EtwpFlushActiveBuffers@8 @ 0x4B2EDD0E (_EtwpFlushActiveBuffers@8.c)
 *     _RtlCloneUserProcess@20 @ 0x4B335760 (_RtlCloneUserProcess@20.c)
 * Callees:
 *     _ZwAlertThreadByThreadId@4 @ 0x4B2F3080 (_ZwAlertThreadByThreadId@4.c)
 */

void __stdcall RtlWakeAllConditionVariable(volatile signed __int32 *a1)
{
  signed __int32 v1; // edx
  signed __int32 v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // esi

  v1 = *a1;
  if ( *a1 )
  {
    while ( (v1 & 7) != 7 )
    {
      if ( (v1 & 8) != 0 )
      {
        v2 = _InterlockedCompareExchange(a1, v1 | 7, v1);
        if ( v2 == v1 )
          return;
      }
      else
      {
        v2 = _InterlockedCompareExchange(a1, 0, v1);
        if ( v2 == v1 )
        {
          v3 = v1 & 0xFFFFFFF0;
          if ( v3 )
          {
            do
            {
              v4 = *(_DWORD *)v3;
              _interlockedbittestandset((volatile signed __int32 *)(v3 + 20), 2u);
              if ( !_interlockedbittestandreset((volatile signed __int32 *)(v3 + 20), 1u) )
                ZwAlertThreadByThreadId(*(_DWORD *)(v3 + 12));
              v3 = v4;
            }
            while ( v4 );
          }
          return;
        }
      }
      v1 = v2;
      if ( !v2 )
        return;
    }
  }
}
