/*
 * XREFs of ?CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140046918
 * Callers:
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14004D0C0 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140005E48 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?CreateApoEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@IPEAPEAV1@@Z @ 0x14004A5A0 (-CreateApoEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004DAEC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPipeInstance::CreateApoEndpointInstance(
        CPipeInstance *this,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IAudioProcessingObject *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  __int64 Head; // rax
  __int64 v8; // rbp
  int v9; // eax
  int v10; // ebx
  struct CEndpointInstance *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = a4;
  Head = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)this + 2);
  v8 = *(_QWORD *)Head;
  v9 = CEndpointInstance::CreateApoEndpointInstance(
         *((struct IDeviceGraphObjectCache **)this + 30),
         a2,
         a3,
         *(struct IAudioMediaType **)(*(_QWORD *)Head + 48LL),
         *((_DWORD *)this + 35),
         &v12);
  v10 = v9;
  if ( v9 < 0 )
    AudDGTraceLoggingErrorHelper("CAPOEndpointProcessNode::CreateAPOEndpointInstance", 0x354u, v9);
  else
    *(_QWORD *)(v8 + 32) = v12;
  if ( v10 < 0 )
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateApoEndpointInstance", 0x454u, v10);
  return (unsigned int)v10;
}
