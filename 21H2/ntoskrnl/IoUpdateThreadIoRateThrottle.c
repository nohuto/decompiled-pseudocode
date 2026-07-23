/*
 * XREFs of IoUpdateThreadIoRateThrottle @ 0x14050AE50
 * Callers:
 *     <none>
 * Callees:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x1403020FC (KeAbProcessBaseIoPriorityChangeInternal.c)
 */

__int64 __fastcall IoUpdateThreadIoRateThrottle(__int64 a1, unsigned int a2)
{
  signed __int32 v2; // eax
  int v3; // edx
  __int64 result; // rax

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1368), a2);
  if ( v2 )
  {
    result = a2 + v2;
    if ( (_DWORD)result )
      return result;
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  return KeAbProcessBaseIoPriorityChangeInternal(a1, v3);
}
