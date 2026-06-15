/*
 * XREFs of ?GetVolume@CAudioSession@@UEAAJPEAM@Z @ 0x180046A80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sg @ 0x1800CB180 (WPP_SF_Sg.c)
 */

__int64 __fastcall CAudioSession::GetVolume(CAudioSession *this, float *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v5; // r8d

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 808);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      15,
      v5,
      *((_QWORD *)this + 91),
      *(_OWORD *)&_mm_cvtps_pd((__m128)*((unsigned int *)this + 212)));
  }
  *a2 = *((float *)this + 212);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
