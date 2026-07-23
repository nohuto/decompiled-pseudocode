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

void __stdcall RtlpWnfCalculateAndSetNextTimer()
{
  unsigned int Value; // edi
  unsigned int v1; // ebx
  _RTL_SRWLOCK *v2; // ecx
  _RTL_SRWLOCK *v3; // esi
  int v4; // [esp+Ch] [ebp-4h]

  Value = 0;
  v1 = 0;
  v4 = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(dword_4B3A664C + 4));
  v2 = (_RTL_SRWLOCK *)dword_4B3A664C;
  v3 = *(_RTL_SRWLOCK **)(dword_4B3A664C + 8);
  if ( v3 != (_RTL_SRWLOCK *)(dword_4B3A664C + 8) )
  {
    do
    {
      RtlAcquireSRWLockShared(v3 + 3);
      if ( v3[16].Value == 2 && (!(v1 | Value) || *(_QWORD *)&v3[17].0 < __PAIR64__(v1, Value)) )
      {
        Value = v3[17].Value;
        v1 = v3[18].Value;
        v4 = 1;
      }
      RtlReleaseSRWLockShared(v3 + 3);
      v2 = (_RTL_SRWLOCK *)dword_4B3A664C;
      v3 = (_RTL_SRWLOCK *)v3->Value;
    }
    while ( v3 != (_RTL_SRWLOCK *)(dword_4B3A664C + 8) );
    if ( v4 )
    {
      RtlpWnfSetRetryTimer(Value, v1);
      v2 = (_RTL_SRWLOCK *)dword_4B3A664C;
    }
  }
  RtlReleaseSRWLockShared(v2 + 1);
}
