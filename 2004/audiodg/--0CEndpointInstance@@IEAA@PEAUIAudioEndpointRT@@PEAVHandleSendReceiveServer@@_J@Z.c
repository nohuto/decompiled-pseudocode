/*
 * XREFs of ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z @ 0x14003FB90
 * Callers:
 *     ?CreateApoEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@IPEAPEAV1@@Z @ 0x14003FD40 (-CreateApoEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_.c)
 *     ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x14003FE80 (-CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400072E0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

CEndpointInstance *__fastcall CEndpointInstance::CEndpointInstance(
        CEndpointInstance *this,
        struct IUnknown *a2,
        struct HandleSendReceiveServer *a3,
        __int64 a4)
{
  CEndpointInstance *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  if ( *(struct IUnknown **)this != a2 )
    ATL::AtlComPtrAssign((struct IUnknown **)this, a2);
  *((_QWORD *)this + 2) = a3;
  result = this;
  *((_QWORD *)this + 1) = a4;
  return result;
}
