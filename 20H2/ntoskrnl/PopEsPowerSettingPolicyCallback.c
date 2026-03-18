/*
 * XREFs of PopEsPowerSettingPolicyCallback @ 0x1407D0100
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopEsQueueStateEvaluation @ 0x14077C1DC (PopEsQueueStateEvaluation.c)
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
      if ( !byte_140C23D94 )
      {
        v5 = 1;
        byte_140C23D94 = 1;
      }
    }
    else if ( !*a2 && byte_140C23D94 )
    {
      v5 = 1;
      byte_140C23D94 = 0;
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
