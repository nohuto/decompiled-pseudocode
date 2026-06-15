/*
 * XREFs of ??_G?$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z @ 0x14001A2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x14001A2FC (--1-$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall ATL::CComObject<CProcessSubmix>::`scalar deleting destructor'(void *Block, char a2)
{
  ATL::CComObject<CProcessSubmix>::~CComObject<CProcessSubmix>();
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
