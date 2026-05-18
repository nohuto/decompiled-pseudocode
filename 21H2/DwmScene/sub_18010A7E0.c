/*
 * XREFs of sub_18010A7E0 @ 0x18010A7E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800ACF68 @ 0x1800ACF68 (sub_1800ACF68.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_18010A7E0(_QWORD *a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  *a1 = &Spectre::Engine::ImageProcessingCamera::`vftable';
  sub_1800ACF68((__int64)a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
