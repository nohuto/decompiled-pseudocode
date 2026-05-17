/*
 * XREFs of _EtwpReferenceUmGuidEntry@4 @ 0x4B2F2700
 * Callers:
 *     _EtwpFindGuidEntry@4 @ 0x4B2ADC68 (_EtwpFindGuidEntry@4.c)
 *     _EtwDeliverDataBlock@4 @ 0x4B2AE4B0 (_EtwDeliverDataBlock@4.c)
 *     _EtwpUpdateEnableInfoAndCallback@8 @ 0x4B2B0D5F (_EtwpUpdateEnableInfoAndCallback@8.c)
 * Callees:
 *     <none>
 */

char __thiscall EtwpReferenceUmGuidEntry(volatile signed __int32 *this)
{
  signed __int32 v1; // edx
  signed __int32 v2; // eax

  v1 = *((_DWORD *)this + 9);
  if ( !v1 )
    return 0;
  while ( 1 )
  {
    v2 = _InterlockedCompareExchange(this + 9, v1 + 1, v1);
    if ( v2 == v1 )
      break;
    v1 = v2;
    if ( !v2 )
      return 0;
  }
  return 1;
}
