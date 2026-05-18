/*
 * XREFs of sub_1800CE160 @ 0x1800CE160
 * Callers:
 *     sub_1800268EC @ 0x1800268EC (sub_1800268EC.c)
 * Callees:
 *     sub_180067A50 @ 0x180067A50 (sub_180067A50.c)
 */

_QWORD *__fastcall sub_1800CE160(_QWORD *a1)
{
  sub_180067A50((__int64)a1);
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
