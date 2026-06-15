/*
 * XREFs of ?GetCurrentSessionGain@CAudioSession@@IEAAXPEA_NPEAMPEA_J@Z @ 0x180046950
 * Callers:
 *     _lambda_eb7b93c79ee7a0b64d2291cc6159d2b2_::operator() @ 0x18006E2AC (_lambda_eb7b93c79ee7a0b64d2291cc6159d2b2_--operator().c)
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
