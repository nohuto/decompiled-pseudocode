/*
 * XREFs of ?WeWereNotHungAfterAll@CAudioHealthMonitor@@UEAAXXZ @ 0x1800B71A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioHealthMonitor::WeWereNotHungAfterAll(CAudioHealthMonitor *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  int v3; // eax

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v3 = *((_DWORD *)this + 2);
  if ( v3 )
    *((_DWORD *)this + 2) = v3 - 1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
