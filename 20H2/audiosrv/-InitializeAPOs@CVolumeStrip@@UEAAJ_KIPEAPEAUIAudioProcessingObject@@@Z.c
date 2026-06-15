/*
 * XREFs of ?InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180037AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800BD6CC (WPP_SF_q.c)
 */

__int64 __fastcall CVolumeStrip::InitializeAPOs(
        CVolumeStrip *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx

  v8 = -2147023537;
  if ( a4 || !a3 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_42b4fa7daad03b80922a8ee15d46dabb_Traceguids, this);
    }
    v9 = *((_QWORD *)this + 31);
    if ( v9 )
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IAudioProcessingObject **))(*(_QWORD *)v9 + 64LL))(
             v9,
             a2,
             a3,
             a4);
    v10 = *((_QWORD *)this + 33);
    if ( v10 )
    {
      if ( v8 >= 0 )
        v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IAudioProcessingObject **))(*(_QWORD *)v10 + 64LL))(
               v10,
               a2,
               a3,
               a4);
    }
    v11 = *((_QWORD *)this + 32);
    if ( v11 )
    {
      if ( v8 < 0 )
        goto LABEL_18;
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IAudioProcessingObject **))(*(_QWORD *)v11 + 88LL))(
             v11,
             a2,
             a3,
             a4);
    }
    if ( v8 >= 0 )
      return (unsigned int)v8;
LABEL_18:
    AudSrvTraceLoggingErrorHelper("CVolumeStrip::InitializeAPOs", 0x283u, v8);
    return (unsigned int)v8;
  }
  return 2147500035LL;
}
