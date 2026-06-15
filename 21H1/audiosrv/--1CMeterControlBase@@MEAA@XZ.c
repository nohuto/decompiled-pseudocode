/*
 * XREFs of ??1CMeterControlBase@@MEAA@XZ @ 0x180061438
 * Callers:
 *     ??1CMeterHardware@@EEAA@XZ @ 0x1800613EC (--1CMeterHardware@@EEAA@XZ.c)
 *     ??_GCMeterControlBase@@MEAAPEAXI@Z @ 0x1800BDB60 (--_GCMeterControlBase@@MEAAPEAXI@Z.c)
 *     ??1CMeterSoftware@@EEAA@XZ @ 0x1800C3504 (--1CMeterSoftware@@EEAA@XZ.c)
 * Callees:
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 */

void __fastcall CMeterControlBase::~CMeterControlBase(CMeterControlBase *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CMeterControlBase::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_b909e168dacd373727fcf23ad3479388_Traceguids, this);
  }
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
}
