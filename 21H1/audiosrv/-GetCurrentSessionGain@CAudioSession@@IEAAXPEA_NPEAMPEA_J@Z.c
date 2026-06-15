/*
 * XREFs of ?GetCurrentSessionGain@CAudioSession@@IEAAXPEA_NPEAMPEA_J@Z @ 0x180046960
 * Callers:
 *     _lambda_4ee4a630d91b577e4d31f4c6e0d18ad2_::operator() @ 0x18006D9C0 (_lambda_4ee4a630d91b577e4d31f4c6e0d18ad2_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioSession::GetCurrentSessionGain(CAudioSession *this, bool *a2, float *a3, __int64 *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 808);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
  *a4 = 50000LL;
  *a3 = *((float *)this + 212);
  *a2 = *((_DWORD *)this + 213) != 0;
  if ( v4 )
    LeaveCriticalSection(v4);
}
