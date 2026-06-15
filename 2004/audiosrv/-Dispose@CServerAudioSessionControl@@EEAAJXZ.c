/*
 * XREFs of ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180038690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BC030 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800BC0A0 (WPP_SF_S.c)
 *     WPP_SF_qqS @ 0x1800CDFB4 (WPP_SF_qqS.c)
 */

__int64 __fastcall CServerAudioSessionControl::Dispose(CServerAudioSessionControl *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r8d

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, 0LL);
  }
  v2 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, CServerAudioSessionControl *))(*(_QWORD *)v4 + 232LL))(v4, this);
    v2 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( this != (CServerAudioSessionControl *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( v2 )
  {
    LOBYTE(v3) = *((_BYTE *)this + 84);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 328LL))(v2, v3);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qqS(*((_QWORD *)WPP_GLOBAL_Control + 2), 15, v5, (_DWORD)this, v2, 0LL);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids);
  }
  return 0LL;
}
