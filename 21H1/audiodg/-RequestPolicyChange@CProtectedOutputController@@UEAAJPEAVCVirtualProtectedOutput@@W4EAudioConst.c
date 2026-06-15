/*
 * XREFs of ?RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConstriction@@@Z @ 0x14003E250
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14003424C (WPP_SF_D.c)
 *     ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x14003FA00 (-UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400432DC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CProtectedOutputController::RequestPolicyChange(
        CProtectedOutputController *this,
        struct CVirtualProtectedOutput *a2,
        enum EAudioConstriction a3)
{
  _QWORD *v3; // r9
  enum EAudioConstriction v5; // ebx
  struct CVirtualProtectedOutput *v6; // rcx
  int updated; // edi

  v3 = (_QWORD *)*((_QWORD *)this + 2);
  v5 = eAudioConstrictionOff;
  while ( v3 )
  {
    v6 = (struct CVirtualProtectedOutput *)v3[2];
    v3 = (_QWORD *)*v3;
    if ( v6 == a2 )
    {
      if ( v5 <= a3 )
        v5 = a3;
    }
    else if ( v5 <= *((_DWORD *)v6 + 5) )
    {
      v5 = *((_DWORD *)v6 + 5);
    }
  }
  updated = 0;
  if ( v5 != *((_DWORD *)this + 16) )
  {
    updated = CAudioDeviceGraph::UpdateLoopbackConstrictionLevel(*((CAudioDeviceGraph **)this + 1), v5);
    if ( updated < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xCu,
          (__int64)&WPP_8a78b0fe90e638a027f0a1224aa299fc_Traceguids,
          updated);
      }
      AudDGTraceLoggingErrorHelper("CProtectedOutputController::RequestPolicyChange", 0xB5u, updated);
    }
    else
    {
      *((_DWORD *)this + 16) = v5;
    }
  }
  return (unsigned int)updated;
}
