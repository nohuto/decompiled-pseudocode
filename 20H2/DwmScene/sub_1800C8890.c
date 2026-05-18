/*
 * XREFs of sub_1800C8890 @ 0x1800C8890
 * Callers:
 *     sub_18002101C @ 0x18002101C (sub_18002101C.c)
 * Callees:
 *     sub_180062180 @ 0x180062180 (sub_180062180.c)
 */

_QWORD *__fastcall sub_1800C8890(_QWORD *a1)
{
  sub_180062180((__int64)a1);
  *a1 = &Spectre::Engine::DeviceShaderPipeline::`vftable';
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  a1[17] = 0LL;
  a1[18] = 0LL;
  a1[19] = 0LL;
  a1[20] = 0LL;
  a1[21] = 0LL;
  return a1;
}
