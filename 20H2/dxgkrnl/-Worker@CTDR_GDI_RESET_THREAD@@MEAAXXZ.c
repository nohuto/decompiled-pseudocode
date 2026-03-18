/*
 * XREFs of ?Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ @ 0x1C02651B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z @ 0x1C0263500 (-SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C0265460 (TdrBugcheckOnTimeout.c)
 */

void __fastcall CTDR_GDI_RESET_THREAD::Worker(CTDR_GDI_RESET_THREAD *this, __int64 a2, __int64 a3)
{
  __int64 v4; // r8

  if ( (int)CTDR_GDI_RESET_THREAD::SwitchGdi(this, 0, a3) < 0 )
    TdrBugcheckOnTimeout(*((_QWORD *)this + 3));
  if ( (int)CTDR_GDI_RESET_THREAD::SwitchGdi(this, 1u, v4) < 0 )
    TdrBugcheckOnTimeout(*((_QWORD *)this + 3));
}
