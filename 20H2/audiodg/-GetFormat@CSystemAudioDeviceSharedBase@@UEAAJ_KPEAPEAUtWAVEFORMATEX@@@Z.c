/*
 * XREFs of ?GetFormat@CSystemAudioDeviceSharedBase@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x140043B20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003E95C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004D95C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetFormat(
        CSystemAudioDeviceSharedBase *this,
        __int64 a2,
        struct tWAVEFORMATEX **a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  int v6; // ebx
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF

  v8 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v8);
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 184);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct tWAVEFORMATEX **))(**((_QWORD **)this + 41) + 144LL))(
         *((_QWORD *)this + 41),
         *((_QWORD *)this + 39),
         a3);
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Au,
        (__int64)&WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids,
        v6);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::GetFormat", 0x254u, v6);
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  EtwEventActivityIdControl(4LL, &v8);
  return (unsigned int)v6;
}
