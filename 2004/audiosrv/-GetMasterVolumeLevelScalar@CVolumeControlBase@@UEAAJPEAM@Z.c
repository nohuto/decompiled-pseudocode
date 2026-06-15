/*
 * XREFs of ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180054C00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180054CA0 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qdg @ 0x1800C3104 (WPP_SF_qdg.c)
 */

__int64 __fastcall CVolumeControlBase::GetMasterVolumeLevelScalar(CVolumeControlBase *this, float *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned __int64 v5; // rcx
  float Wiper; // xmm0_4
  unsigned int v7; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( a2 )
  {
    v5 = *((unsigned int *)this + 30);
    if ( v5 >= *((_QWORD *)this + 12) )
      ATL::AtlThrowImpl(-2147024809);
    Wiper = CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 11) + (v5 << 6)));
    *a2 = Wiper;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        21LL,
        &WPP_0837af417b5438e10b8c3569af41ec07_Traceguids,
        this,
        *((_DWORD *)this + 30),
        Wiper);
    }
    v7 = 0;
  }
  else
  {
    v7 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetMasterVolumeLevelScalar", 0x1C0u, -2147467261);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
