/*
 * XREFs of ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800C8740
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x180045D10 (MIDL_user_allocate.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180062370 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_S @ 0x1800BBFB0 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetIconPath(CAudioSession *this, unsigned __int16 **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  const wchar_t *v5; // r9
  size_t v6; // rbx
  unsigned __int16 *v7; // rax
  int v8; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 352);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
  v5 = (const wchar_t *)*((_QWORD *)this + 41);
  v6 = 2LL * (*((_DWORD *)v5 - 4) + 1);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids, v5);
  }
  v7 = (unsigned __int16 *)MIDL_user_allocate(v6);
  *a2 = v7;
  if ( v7 )
  {
    v8 = StringCbCopyW((char *)v7, v6, *((char **)this + 41));
    if ( v8 >= 0 )
      goto LABEL_10;
    operator delete(*a2);
    *a2 = 0LL;
  }
  else
  {
    v8 = -2147024882;
  }
  AudSrvTraceLoggingErrorHelper("CAudioSession::GetIconPath", 303, v8);
LABEL_10:
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v8;
}
