/*
 * XREFs of MmMapViewInSystemSpaceEx @ 0x14061F000
 * Callers:
 *     <none>
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1406FFC5C (MiMapViewInSystemSpace.c)
 */

__int64 __fastcall MmMapViewInSystemSpaceEx(int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  return MiMapViewInSystemSpace(a1, (unsigned int)&unk_140C4CDA8, a2, a3, a4, a5, 0LL);
}
