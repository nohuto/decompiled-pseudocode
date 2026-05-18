/*
 * XREFs of sub_180023060 @ 0x180023060
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C98E0 @ 0x1800C98E0 (sub_1800C98E0.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_180023060(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  sub_1800C98E0();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
