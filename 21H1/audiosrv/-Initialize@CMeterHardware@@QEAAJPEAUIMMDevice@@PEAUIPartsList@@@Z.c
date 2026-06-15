/*
 * XREFs of ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005F234
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180060E5C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?FindMeterControlForEndpoint@CMeterHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005EF04 (-FindMeterControlForEndpoint@CMeterHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180069250 (-Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 */

__int64 __fastcall CMeterHardware::Initialize(CMeterHardware *this, struct IUnknown *a2, struct IPartsList *a3)
{
  int MeterControlForEndpoint; // ebx

  MeterControlForEndpoint = CMeterHardware::FindMeterControlForEndpoint(this, a2, a3);
  if ( MeterControlForEndpoint < 0
    || (MeterControlForEndpoint = CMeterControlBase::Initialize(this, (struct IMMDevice *)a2),
        MeterControlForEndpoint < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CMeterHardware::Initialize", 381, MeterControlForEndpoint);
  }
  return (unsigned int)MeterControlForEndpoint;
}
