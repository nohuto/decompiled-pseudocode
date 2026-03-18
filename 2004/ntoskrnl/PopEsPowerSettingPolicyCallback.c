/*
 * XREFs of PopEsPowerSettingPolicyCallback @ 0x1407C1900
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopEsQueueStateEvaluation @ 0x14076D7AC (PopEsQueueStateEvaluation.c)
 */

__int64 __fastcall PopEsPowerSettingPolicyCallback(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int v3; // ebx
  char v5; // di

  v3 = 0;
  if ( a2 && a3 == 4 )
  {
    v5 = 0;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
    if ( *a2 == 1 )
    {
      if ( !byte_140C238F4 )
      {
        v5 = 1;
        byte_140C238F4 = 1;
      }
    }
    else if ( !*a2 && byte_140C238F4 )
    {
      v5 = 1;
      byte_140C238F4 = 0;
    }
    PopReleaseRwLock((ULONG_PTR)&PopEsLock);
    if ( v5 )
      PopEsQueueStateEvaluation(0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
