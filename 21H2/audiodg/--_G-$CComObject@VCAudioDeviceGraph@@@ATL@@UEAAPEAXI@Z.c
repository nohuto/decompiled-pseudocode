/*
 * XREFs of ??_G?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x140001620
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x1400018A4 (--1-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCA8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAudioDeviceGraph *__fastcall ATL::CComObject<CAudioDeviceGraph>::`scalar deleting destructor'(
        CAudioDeviceGraph *Block,
        char a2)
{
  ATL::CComObject<CAudioDeviceGraph>::~CComObject<CAudioDeviceGraph>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
