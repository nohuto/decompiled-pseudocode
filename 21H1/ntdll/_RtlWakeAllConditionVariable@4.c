/*
 * XREFs of _RtlWakeAllConditionVariable@4 @ 0x4B2EA460
 * Callers:
 *     _EtwpStopLoggerInstance@4 @ 0x4B2EDB7A (_EtwpStopLoggerInstance@4.c)
 *     _EtwpFlushActiveBuffers@8 @ 0x4B2EDD0E (_EtwpFlushActiveBuffers@8.c)
 *     _RtlCloneUserProcess@20 @ 0x4B335760 (_RtlCloneUserProcess@20.c)
 * Callees:
 *     _ZwAlertThreadByThreadId@4 @ 0x4B2F3080 (_ZwAlertThreadByThreadId@4.c)
 */

void __cdecl RtlWakeAllConditionVariable(PRTL_CONDITION_VARIABLE ConditionVariable)
{
  signed __int32 Ptr; // edx
  signed __int32 v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // esi

  Ptr = (signed __int32)ConditionVariable->Ptr;
  if ( ConditionVariable->Ptr )
  {
    while ( (Ptr & 7) != 7 )
    {
      if ( (Ptr & 8) != 0 )
      {
        v2 = _InterlockedCompareExchange((volatile signed __int32 *)ConditionVariable, Ptr | 7, Ptr);
        if ( v2 == Ptr )
          return;
      }
      else
      {
        v2 = _InterlockedCompareExchange((volatile signed __int32 *)ConditionVariable, 0, Ptr);
        if ( v2 == Ptr )
        {
          v3 = Ptr & 0xFFFFFFF0;
          if ( v3 )
          {
            do
            {
              v4 = *(_DWORD *)v3;
              _interlockedbittestandset((volatile signed __int32 *)(v3 + 20), 2u);
              if ( !_interlockedbittestandreset((volatile signed __int32 *)(v3 + 20), 1u) )
                ZwAlertThreadByThreadId(*(HANDLE *)(v3 + 12));
              v3 = v4;
            }
            while ( v4 );
          }
          return;
        }
      }
      Ptr = v2;
      if ( !v2 )
        return;
    }
  }
}
