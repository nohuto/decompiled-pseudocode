/*
 * XREFs of _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x1800022E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000F99C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

int dynamic_initializer_for__s_HostedAppInteractivityManager__()
{
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)&unk_1800561B0);
  qword_1800561D8 = 0LL;
  dword_180056200 = 10;
  xmmword_1800561E0 = 0LL;
  xmmword_1800561F0 = 0LL;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__);
}
