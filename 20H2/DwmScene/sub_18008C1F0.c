/*
 * XREFs of sub_18008C1F0 @ 0x18008C1F0
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_18008C1F0(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::ResourceLoadedFnc::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
