/*
 * XREFs of ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x1800BF310
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180072324 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800BE338 (WPP_SF_qd.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMuteSoftware::SetMuteValue(CMuteSoftware *this, int a2)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  int v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+64h] [rbp+Ch]
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  char *v13; // [rsp+78h] [rbp+20h]

  v4 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Bu,
      (__int64)&WPP_a111594f2af03e3a71e6f1c2b278efda_Traceguids,
      this,
      a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v13 = (char *)this + 56;
  *((_DWORD *)this + 6) = a2;
  v6 = *((_QWORD *)this + 6);
  if ( !v6 )
    goto LABEL_13;
  v12 = 50000LL;
  LOBYTE(v5) = a2 != 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v6 + 32LL))(
         v6,
         v5,
         0LL,
         1LL,
         &v12);
  v4 = v7;
  if ( v7 == -2147417848 || v7 == -2147023174 )
  {
    Microsoft::WRL::WeakRef::~WeakRef((CMuteSoftware *)((char *)this + 48));
    v4 = 0;
  }
  if ( v4 < 0 )
  {
    AudSrvTraceLoggingErrorHelper("CMuteSoftware::SetMuteValue", 884, v4);
  }
  else
  {
LABEL_13:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Cu,
        (__int64)&WPP_a111594f2af03e3a71e6f1c2b278efda_Traceguids,
        this);
    }
    *((_BYTE *)this + 104) = 1;
    v10 = -10000000;
    v11 = -1;
    if ( ThreadPool )
      (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, int *, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        *((_QWORD *)this + 12),
        &v10,
        0LL,
        0);
  }
  if ( this != (CMuteSoftware *)-56LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  return (unsigned int)v4;
}
