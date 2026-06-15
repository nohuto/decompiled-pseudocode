/*
 * XREFs of ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180046550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BC030 (WPP_SF_.c)
 *     WPP_SF_qdd @ 0x1800CBFE8 (WPP_SF_qdd.c)
 */

__int64 __fastcall CAudioSession::RemoveClientReference(CAudioSession *this, char a2)
{
  bool v3; // di

  v3 = 0;
  if ( a2 )
    v3 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 101, 0xFFFFFFFF) == 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 100, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 336LL))(this);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 69LL, &WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids);
    }
LABEL_6:
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
      ThreadPool,
      *((_QWORD *)this + 76));
    return 0LL;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      70LL,
      &WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids,
      this,
      *((_DWORD *)this + 100),
      *((_DWORD *)this + 101));
  }
  if ( v3 )
    goto LABEL_6;
  return 0LL;
}
