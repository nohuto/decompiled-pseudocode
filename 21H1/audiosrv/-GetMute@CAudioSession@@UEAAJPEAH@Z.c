/*
 * XREFs of ?GetMute@CAudioSession@@UEAAJPEAH@Z @ 0x1800471D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sd @ 0x1800BF494 (WPP_SF_Sd.c)
 */

__int64 __fastcall CAudioSession::GetMute(CAudioSession *this, int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 808);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      18,
      (unsigned int)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids,
      *((_QWORD *)this + 91),
      *((_DWORD *)this + 213));
  }
  *a2 = *((_DWORD *)this + 213);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
