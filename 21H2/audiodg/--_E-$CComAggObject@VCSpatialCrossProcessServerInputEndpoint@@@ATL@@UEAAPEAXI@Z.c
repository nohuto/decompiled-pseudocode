/*
 * XREFs of ??_E?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140065D70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCA8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x14006580C (--1-$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CSpatialCrossProcessServerInputEndpoint>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  ATL::CComAggObject<CSpatialCrossProcessServerInputEndpoint>::~CComAggObject<CSpatialCrossProcessServerInputEndpoint>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
