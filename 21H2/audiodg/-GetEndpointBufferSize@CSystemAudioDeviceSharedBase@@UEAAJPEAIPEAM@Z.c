/*
 * XREFs of ?GetEndpointBufferSize@CSystemAudioDeviceSharedBase@@UEAAJPEAIPEAM@Z @ 0x140043B50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003EAEC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004DAEC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetEndpointBufferSize(
        CSystemAudioDeviceSharedBase *this,
        unsigned int *a2,
        float *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF

  v10 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v10);
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 184);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, float *))(**((_QWORD **)this + 41) + 40LL))(
         *((_QWORD *)this + 41),
         a2,
         a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x12u,
        (__int64)&WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids,
        v7);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::GetEndpointBufferSize", 0x107u, v8);
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, (__int64)&WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids, *a2);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  EtwEventActivityIdControl(4LL, &v10);
  return v8;
}
