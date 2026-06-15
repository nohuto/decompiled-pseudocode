/*
 * XREFs of ?Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180069350
 * Callers:
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005F334 (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x180069340 (-Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterControlBase::Initialize(CMeterControlBase *this, struct IMMDevice *a2)
{
  int v3; // ebx

  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a2->lpVtbl->GetId)(a2, (char *)this + 16);
  if ( v3 < 0
    || (v3 = (*(__int64 (__fastcall **)(CMeterControlBase *, char *))(*(_QWORD *)this + 40LL))(this, (char *)this + 24),
        v3 < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CMeterControlBase::Initialize", 164, v3);
  }
  return (unsigned int)v3;
}
