/*
 * XREFs of ?ResetEndpoint@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x1400444B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003E95C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004D95C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::ResetEndpoint(CSystemAudioDeviceSharedBase *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // ebx
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v5 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v5);
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 184);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 41) + 104LL))(*((_QWORD *)this + 41));
  if ( v3 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x18u,
        (__int64)&WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids,
        v3);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::ResetEndpoint", 0x20Cu, v3);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  EtwEventActivityIdControl(4LL, &v5);
  return (unsigned int)v3;
}
