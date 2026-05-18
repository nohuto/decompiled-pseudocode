/*
 * XREFs of sub_1800C8860 @ 0x1800C8860
 * Callers:
 *     sub_18003D238 @ 0x18003D238 (sub_18003D238.c)
 *     sub_180041CE0 @ 0x180041CE0 (sub_180041CE0.c)
 *     sub_1800420BC @ 0x1800420BC (sub_1800420BC.c)
 *     sub_180042454 @ 0x180042454 (sub_180042454.c)
 *     sub_1800427F8 @ 0x1800427F8 (sub_1800427F8.c)
 * Callees:
 *     sub_180062180 @ 0x180062180 (sub_180062180.c)
 */

__int64 __fastcall sub_1800C8860(__int64 a1)
{
  sub_180062180(a1);
  *(_BYTE *)(a1 + 96) = 0;
  *(_QWORD *)a1 = &Spectre::Engine::DeviceShader::`vftable';
  return a1;
}
