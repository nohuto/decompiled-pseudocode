/*
 * XREFs of ??_E?$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x140013460
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x14001327C (--1-$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall ATL::CComObject<CStreamGroup>::`vector deleting destructor'(void *Block, char a2)
{
  ATL::CComObject<CStreamGroup>::~CComObject<CStreamGroup>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
