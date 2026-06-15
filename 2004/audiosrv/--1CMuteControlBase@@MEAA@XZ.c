/*
 * XREFs of ??1CMuteControlBase@@MEAA@XZ @ 0x1800BE654
 * Callers:
 *     ??1CMuteHardware@@EEAA@XZ @ 0x1800BE6DC (--1CMuteHardware@@EEAA@XZ.c)
 *     ??_GCMuteControlBase@@MEAAPEAXI@Z @ 0x1800BE750 (--_GCMuteControlBase@@MEAAPEAXI@Z.c)
 *     ??1CMuteSoftware@@EEAA@XZ @ 0x1800C3644 (--1CMuteSoftware@@EEAA@XZ.c)
 * Callees:
 *     WPP_SF_q @ 0x1800BE35C (WPP_SF_q.c)
 */

void __fastcall CMuteControlBase::~CMuteControlBase(CMuteControlBase *this)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CMuteControlBase::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_a111594f2af03e3a71e6f1c2b278efda_Traceguids, this);
  }
  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
    CoTaskMemFree(v2);
  v3 = (void *)*((_QWORD *)this + 4);
  if ( v3 )
    CoTaskMemFree(v3);
}
