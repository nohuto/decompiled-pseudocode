/*
 * XREFs of ?GetChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x1800C81C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sd @ 0x1800BF494 (WPP_SF_Sd.c)
 */

__int64 __fastcall CAudioSession::GetChannelCount(const wchar_t **this, unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 101);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 101));
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x15u,
      (__int64)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids,
      this[91]);
  }
  *a2 = *((_DWORD *)this + 240);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
