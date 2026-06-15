/*
 * XREFs of ??_GCVirtualProtectedOutput@@QEAAPEAXI@Z @ 0x14003DBE4
 * Callers:
 *     ?CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14003DD60 (-CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPE.c)
 *     ?Release@CVirtualProtectedOutput@@UEAAKXZ @ 0x14003E1F0 (-Release@CVirtualProtectedOutput@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CVirtualProtectedOutput *__fastcall CVirtualProtectedOutput::`scalar deleting destructor'(
        CVirtualProtectedOutput *this)
{
  *(_QWORD *)this = &CVirtualProtectedOutput::`vftable';
  operator delete(this);
  return this;
}
