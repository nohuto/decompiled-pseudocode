/*
 * XREFs of IoUpdateThreadIoRateThrottle @ 0x14050AC10
 * Callers:
 *     <none>
 * Callees:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x1402F73AC (KeAbProcessBaseIoPriorityChangeInternal.c)
 */

__int64 __fastcall IoUpdateThreadIoRateThrottle(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  signed __int32 v4; // eax
  int v5; // edx
  __int64 result; // rax

  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1368), a2);
  if ( v4 )
  {
    result = a2 + v4;
    if ( (_DWORD)result )
      return result;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  return KeAbProcessBaseIoPriorityChangeInternal(a1, v5, a3, a4);
}
