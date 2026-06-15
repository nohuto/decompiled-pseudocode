/*
 * XREFs of ??0CMeterControlBase@@QEAA@XZ @ 0x180061488
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180060E5C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 */

CMeterControlBase *__fastcall CMeterControlBase::CMeterControlBase(CMeterControlBase *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &CMeterControlBase::`vftable';
  *((_DWORD *)this + 2) = 1;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_b909e168dacd373727fcf23ad3479388_Traceguids, this);
  }
  return this;
}
