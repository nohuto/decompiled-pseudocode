/*
 * XREFs of ?GetMeteringChannelCount@CMeterControlBase@@UEAAJPEAI@Z @ 0x1800BDF30
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qd @ 0x1800BE428 (WPP_SF_qd.c)
 */

__int64 __fastcall CMeterControlBase::GetMeteringChannelCount(CMeterControlBase *this, unsigned int *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax
  unsigned int v5; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( a2 )
  {
    v3 = *((_DWORD *)this + 6);
    *a2 = v3;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v5 = v3;
      WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_b909e168dacd373727fcf23ad3479388_Traceguids, this, v5);
    }
  }
  else
  {
    v2 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CMeterControlBase::GetMeteringChannelCount", 223, -2147467261);
  }
  return v2;
}
