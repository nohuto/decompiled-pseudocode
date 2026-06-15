/*
 * XREFs of ??_ECGainStage@@MEAAPEAXI@Z @ 0x18000EF50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CGainStage *__fastcall CGainStage::`vector deleting destructor'(CGainStage *this, char a2)
{
  *(_QWORD *)this = &CGainStage::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
