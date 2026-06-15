/*
 * XREFs of ??0StreamResourceConsumer@@QEAA@PEBG0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180139B84
 * Callers:
 *     ?GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18013AA10 (-GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@0KU_GUID@@W4_.c)
 *     ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18013C988 (-ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180057AD0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

StreamResourceConsumer *__fastcall StreamResourceConsumer::StreamResourceConsumer(
        StreamResourceConsumer *this,
        char *a2,
        char *a3,
        int a4,
        struct _GUID *a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &StreamResourceConsumer::`vftable';
  *((_DWORD *)this + 235) = a4;
  *((struct _GUID *)this + 59) = *a5;
  *((_DWORD *)this + 240) = a6;
  StringCchCopyW((char *)this + 16, 201LL, a2);
  StringCchCopyW((char *)this + 418, 261LL, a3);
  return this;
}
