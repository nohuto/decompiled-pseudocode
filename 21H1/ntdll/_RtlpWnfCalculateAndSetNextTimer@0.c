/*
 * XREFs of _RtlpWnfCalculateAndSetNextTimer@0 @ 0x4B33C27B
 * Callers:
 *     _RtlpWnfNotificationThread@16 @ 0x4B2DEA10 (_RtlpWnfNotificationThread@16.c)
 *     _RtlpWnfRetryTimerCallback@12 @ 0x4B33C760 (_RtlpWnfRetryTimerCallback@12.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlpWnfSetRetryTimer@8 @ 0x4B33C90E (_RtlpWnfSetRetryTimer@8.c)
 */

int __stdcall RtlpWnfCalculateAndSetNextTimer()
{
  unsigned int v0; // edi
  unsigned int v1; // ebx
  int v2; // ecx
  int *v3; // esi
  int v5; // [esp+Ch] [ebp-4h]

  v0 = 0;
  v1 = 0;
  v5 = 0;
  RtlAcquireSRWLockShared((volatile signed __int32 *)(dword_4B3A664C + 4));
  v2 = dword_4B3A664C;
  v3 = *(int **)(dword_4B3A664C + 8);
  if ( v3 != (int *)(dword_4B3A664C + 8) )
  {
    do
    {
      RtlAcquireSRWLockShared(v3 + 3);
      if ( v3[16] == 2 && (!(v1 | v0) || *(_QWORD *)(v3 + 17) < __PAIR64__(v1, v0)) )
      {
        v0 = v3[17];
        v1 = v3[18];
        v5 = 1;
      }
      RtlReleaseSRWLockShared(v3 + 3);
      v2 = dword_4B3A664C;
      v3 = (int *)*v3;
    }
    while ( v3 != (int *)(dword_4B3A664C + 8) );
    if ( v5 )
    {
      RtlpWnfSetRetryTimer(v0, v1);
      v2 = dword_4B3A664C;
    }
  }
  return RtlReleaseSRWLockShared((volatile signed __int32 *)(v2 + 4));
}
