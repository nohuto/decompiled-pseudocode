/*
 * XREFs of SdbReadGUIDTag @ 0x14096186C
 * Callers:
 *     KsepDbGetDriverShimsInternal @ 0x14074195C (KsepDbGetDriverShimsInternal.c)
 *     KsepDbGetShimInfo @ 0x1408BAFDC (KsepDbGetShimInfo.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x14073EE94 (SdbReadBinaryTag.c)
 */

_OWORD *__fastcall SdbReadGUIDTag(_OWORD *a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  *a1 = 0LL;
  if ( !(unsigned int)SdbReadBinaryTag(a2, a3, (__int64)a1, 0x10u) )
  {
    AslLogCallPrintf(1LL);
    *a1 = *a4;
  }
  return a1;
}
