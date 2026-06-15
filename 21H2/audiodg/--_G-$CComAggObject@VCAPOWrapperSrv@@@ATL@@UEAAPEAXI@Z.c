/*
 * XREFs of ??_G?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x140051B70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCA8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x140051B14 (--1-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CAPOWrapperSrv>::`scalar deleting destructor'(void *Block, char a2)
{
  ATL::CComAggObject<CAPOWrapperSrv>::~CComAggObject<CAPOWrapperSrv>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
