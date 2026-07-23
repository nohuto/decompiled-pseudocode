/*
 * XREFs of MmMapViewInSessionSpaceEx @ 0x140611760
 * Callers:
 *     MmMapViewInSessionSpace @ 0x140611730 (MmMapViewInSessionSpace.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1406FFC5C (MiMapViewInSystemSpace.c)
 */

__int64 __fastcall MmMapViewInSessionSpaceEx(int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  _KPROCESS *Process; // rdx

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    return MiMapViewInSystemSpace(a1, (unsigned int)Process[1].AffinityPadding[5] + 192, a2, a3, a4, a5, 0LL);
  else
    return 3221225497LL;
}
