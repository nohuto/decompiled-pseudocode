/*
 * XREFs of ObpFastReplenishReference @ 0x1402F339C
 * Callers:
 *     ObFastReferenceObject @ 0x14027A950 (ObFastReferenceObject.c)
 *     MiReferenceControlAreaFile @ 0x140281750 (MiReferenceControlAreaFile.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     MiLogPageAccess @ 0x140333040 (MiLogPageAccess.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 * Callees:
 *     ObpIncrPointerCountEx @ 0x1402F3424 (ObpIncrPointerCountEx.c)
 */

signed __int64 __fastcall ObpFastReplenishReference(signed __int64 *a1, __int64 a2)
{
  signed __int64 result; // rax
  signed __int64 v5; // rtt

  ObpIncrPointerCountEx(a2 - 48, 15LL);
  _m_prefetchw(a1);
  result = *a1;
  while ( (result & 0xF) == 0 )
  {
    if ( a2 != (result & 0xFFFFFFFFFFFFFFF0uLL) )
      break;
    v5 = result;
    result = _InterlockedCompareExchange64(a1, result + 15, result);
    if ( v5 == result )
      return result;
  }
  return _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 - 48), 0xFFFFFFFFFFFFFFF1uLL);
}
