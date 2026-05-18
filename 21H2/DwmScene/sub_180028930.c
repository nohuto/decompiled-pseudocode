/*
 * XREFs of sub_180028930 @ 0x180028930
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CF1B0 @ 0x1800CF1B0 (sub_1800CF1B0.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180028930(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  sub_1800CF1B0();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
