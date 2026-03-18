/*
 * XREFs of HalpDmaLinkDeviceObjectByToken @ 0x140761510
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaInsertDeviceObjectByToken @ 0x1403794D4 (HalpDmaInsertDeviceObjectByToken.c)
 *     HalpDmaFindDeviceObjectByToken @ 0x1403795D0 (HalpDmaFindDeviceObjectByToken.c)
 */

__int64 __fastcall HalpDmaLinkDeviceObjectByToken(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
    return (unsigned int)HalpDmaInsertDeviceObjectByToken(a1, a2, 0);
  else
    HalpDmaFindDeviceObjectByToken(a1, 1, 0);
  return v2;
}
