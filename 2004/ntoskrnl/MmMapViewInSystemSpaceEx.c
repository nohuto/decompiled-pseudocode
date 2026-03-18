/*
 * XREFs of MmMapViewInSystemSpaceEx @ 0x14070DCE0
 * Callers:
 *     <none>
 * Callees:
 *     MiMapViewInSystemSpace @ 0x14060B094 (MiMapViewInSystemSpace.c)
 */

__int64 __fastcall MmMapViewInSystemSpaceEx(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        __int64 a5)
{
  return MiMapViewInSystemSpace(a1, (__int64)qword_140C4CB68, a2, a3, a4, a5, 0LL);
}
