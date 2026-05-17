/*
 * XREFs of _RtlpIsLFHZoneAllocation@8 @ 0x4B371060
 * Callers:
 *     _RtlpWalkLFHBlock@12 @ 0x4B371E16 (_RtlpWalkLFHBlock@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

char __fastcall RtlpIsLFHZoneAllocation(int a1, unsigned int a2)
{
  _DWORD *i; // esi
  char v5; // bl

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
  for ( i = *(_DWORD **)(a1 + 4); ; i = (_DWORD *)*i )
  {
    if ( i == (_DWORD *)(a1 + 4) )
    {
      v5 = 0;
      goto LABEL_7;
    }
    if ( a2 >= (unsigned int)i && a2 < (unsigned int)(i + 254) )
      break;
  }
  v5 = 1;
LABEL_7:
  RtlReleaseSRWLockExclusive((volatile signed __int32 *)a1);
  return v5;
}
