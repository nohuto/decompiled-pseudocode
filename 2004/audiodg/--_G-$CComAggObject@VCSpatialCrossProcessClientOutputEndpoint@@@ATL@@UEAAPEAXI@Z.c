/*
 * XREFs of ??_G?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14005D0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14005CB3C (--1-$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CSpatialCrossProcessClientOutputEndpoint>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  ATL::CComAggObject<CSpatialCrossProcessClientOutputEndpoint>::~CComAggObject<CSpatialCrossProcessClientOutputEndpoint>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
