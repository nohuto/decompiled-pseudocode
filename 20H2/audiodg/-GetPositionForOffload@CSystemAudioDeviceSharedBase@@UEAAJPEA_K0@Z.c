/*
 * XREFs of ?GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z @ 0x140043F90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003E95C (WPP_SF_D.c)
 *     ?EnableMMCSS@CSystemAudioDeviceSharedBase@@IEAAJXZ @ 0x1400437D8 (-EnableMMCSS@CSystemAudioDeviceSharedBase@@IEAAJXZ.c)
 *     WPP_SF_ii @ 0x14004471C (WPP_SF_ii.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004D95C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetPositionForOffload(
        CSystemAudioDeviceSharedBase *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // eax
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int128 v11; // [rsp+40h] [rbp-38h] BYREF

  v11 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v11);
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 184);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  CSystemAudioDeviceSharedBase::EnableMMCSS(this);
  v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)this + 41) + 48LL))(
         *((_QWORD *)this + 41),
         a2,
         a3);
  v9 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x14u,
        (__int64)&WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids,
        v7);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::GetPositionForOffload", 0x18Du, v9);
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_ii(*((_QWORD *)WPP_GLOBAL_Control + 2), &WPP_GLOBAL_Control, v8, *a2, *a3);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  EtwEventActivityIdControl(4LL, &v11);
  return v9;
}
