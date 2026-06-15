/*
 * XREFs of ??_E?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z @ 0x1400451C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x14004503C (--1CSystemAudioDeviceOffloadGraph@@UEAA@XZ.c)
 */

CSystemAudioDeviceOffloadGraph *__fastcall ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vector deleting destructor'(
        CSystemAudioDeviceOffloadGraph *Block,
        char a2)
{
  CSystemAudioDeviceOffloadGraph::~CSystemAudioDeviceOffloadGraph(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
