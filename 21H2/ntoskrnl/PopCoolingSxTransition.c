/*
 * XREFs of PopCoolingSxTransition @ 0x14038AE58
 * Callers:
 *     PopThermalSxEntry @ 0x14038AA3C (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x14038AB60 (PopThermalSxExit.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14038AF44 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1405D4150 (PopTraceThermalRequestActiveActivity.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1407FD7A8 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x14081CEB4 (PopThermalUpdateActiveTimeTracking.c)
 */

void __fastcall PopCoolingSxTransition(char a1)
{
  __int64 i; // rdi
  __int64 v3; // rdx
  __int64 *j; // rbx
  __int64 v5; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  for ( i = PopCoolingExtensionList; (__int64 *)i != &PopCoolingExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) )
    {
      PopAcquireRwLockExclusive(i + 32);
      for ( j = *(__int64 **)(i + 16); j != (__int64 *)(i + 16); j = (__int64 *)*j )
      {
        if ( *((_BYTE *)j + 18) )
        {
          if ( a1 )
          {
            if ( *(_QWORD *)(i + 136) )
            {
              LOBYTE(v3) = *((_BYTE *)j + 16);
              PopThermalUpdatePassiveTimeTracking(j + 5, v3);
              PopTraceThermalRequestPassiveHistogram(j);
            }
            if ( *(_QWORD *)(i + 128) )
            {
              LOBYTE(v3) = *((_BYTE *)j + 17) == 0;
              PopThermalUpdateActiveTimeTracking(j + 5, v3);
              PopTraceThermalRequestActiveActivity(j);
            }
            *((_BYTE *)j + 40) = 1;
          }
          else
          {
            v5 = MEMORY[0xFFFFF78000000008];
            j[6] = MEMORY[0xFFFFF78000000008];
            j[7] = v5;
            *((_BYTE *)j + 40) = 0;
          }
        }
      }
      PopReleaseRwLock(i + 32);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
}
