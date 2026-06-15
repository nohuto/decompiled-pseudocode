/*
 * XREFs of _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001E00
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000A19C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

int dynamic_initializer_for__s_HostedAppInteractivityManager__()
{
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)&unk_18004FF50);
  qword_18004FF78 = 0LL;
  dword_18004FFA0 = 10;
  xmmword_18004FF80 = 0LL;
  xmmword_18004FF90 = 0LL;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__);
}
