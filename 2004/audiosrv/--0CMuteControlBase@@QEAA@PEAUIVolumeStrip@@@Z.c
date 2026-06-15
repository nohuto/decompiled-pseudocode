/*
 * XREFs of ??0CMuteControlBase@@QEAA@PEAUIVolumeStrip@@@Z @ 0x1800615DC
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180060F5C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x1800BE35C (WPP_SF_q.c)
 */

CMuteControlBase *__fastcall CMuteControlBase::CMuteControlBase(CMuteControlBase *this, struct IVolumeStrip *a2)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CMuteControlBase::`vftable';
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_a111594f2af03e3a71e6f1c2b278efda_Traceguids, this);
  }
  return this;
}
