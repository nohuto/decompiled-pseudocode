/*
 * XREFs of ?NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ @ 0x180045C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BB3A0 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800BB410 (WPP_SF_S.c)
 */

void __fastcall CVolumeProvider::NotifyAudioDGTerminated(CVolumeProvider *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  CAudioSessionManager *v3; // rax
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rax

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_51079a55607f31c93829f02be353d159_Traceguids);
    v3 = WPP_GLOBAL_Control;
  }
  v4 = (_QWORD *)*((_QWORD *)this + 8);
  v5 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v5 != v4 )
  {
    while ( 1 )
    {
      if ( v3 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v3 + 7) & 0x10000) != 0
        && *((_BYTE *)v3 + 25) >= 4u )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 32LL))(*v5);
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_51079a55607f31c93829f02be353d159_Traceguids, v6);
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 272LL))(*v5);
      if ( ++v5 == v4 )
        break;
      v3 = WPP_GLOBAL_Control;
    }
  }
  if ( v1 )
    LeaveCriticalSection(v1);
}
