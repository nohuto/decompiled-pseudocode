/*
 * XREFs of sub_1800B6AF8 @ 0x1800B6AF8
 * Callers:
 *     sub_18001A380 @ 0x18001A380 (sub_18001A380.c)
 *     unknown_libname_3 @ 0x180020CA0 (unknown_libname_3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B6AF8(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Engine::RenderDeviceGeneric::`vftable';
  return sub_18006F860(a1);
}
