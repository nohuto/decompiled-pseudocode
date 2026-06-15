/*
 * XREFs of ?GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800C8590
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x180045D10 (MIDL_user_allocate.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180062370 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_S @ 0x1800BBFB0 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetDisplayName(const wchar_t **this, unsigned __int16 **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  size_t v5; // rbp
  unsigned __int16 *v6; // rax
  int v7; // ebx

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xAu,
      (__int64)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids,
      this[40]);
  }
  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 44);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 44));
  v5 = 2LL * (*((_DWORD *)this[40] - 4) + 1);
  v6 = (unsigned __int16 *)MIDL_user_allocate(v5);
  *a2 = v6;
  if ( v6 )
  {
    v7 = StringCbCopyW((char *)v6, v5, (char *)this[40]);
    if ( v7 >= 0 )
      goto LABEL_10;
    operator delete(*a2);
    *a2 = 0LL;
  }
  else
  {
    v7 = -2147024882;
  }
  AudSrvTraceLoggingErrorHelper("CAudioSession::GetDisplayName", 164, v7);
LABEL_10:
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v7;
}
