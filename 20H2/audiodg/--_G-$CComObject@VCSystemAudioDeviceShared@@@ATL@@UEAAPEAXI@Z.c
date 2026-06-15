/*
 * XREFs of ??_G?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x140013460
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x14001331C (--1-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CSystemAudioDeviceSharedBase *__fastcall ATL::CComObject<CSystemAudioDeviceShared>::`scalar deleting destructor'(
        CSystemAudioDeviceSharedBase *Block,
        char a2)
{
  ATL::CComObject<CSystemAudioDeviceShared>::~CComObject<CSystemAudioDeviceShared>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
