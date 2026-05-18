/*
 * XREFs of sub_1800A1F98 @ 0x1800A1F98
 * Callers:
 *     sub_1800A467C @ 0x1800A467C (sub_1800A467C.c)
 *     sub_1800A5D20 @ 0x1800A5D20 (sub_1800A5D20.c)
 *     sub_1800A8F08 @ 0x1800A8F08 (sub_1800A8F08.c)
 *     sub_1800A90D8 @ 0x1800A90D8 (sub_1800A90D8.c)
 *     sub_1800B0380 @ 0x1800B0380 (sub_1800B0380.c)
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 *     sub_1800D4B98 @ 0x1800D4B98 (sub_1800D4B98.c)
 *     sub_1800EB050 @ 0x1800EB050 (sub_1800EB050.c)
 *     sub_1800ED8D0 @ 0x1800ED8D0 (sub_1800ED8D0.c)
 *     sub_1800EE230 @ 0x1800EE230 (sub_1800EE230.c)
 *     sub_1800EE3D4 @ 0x1800EE3D4 (sub_1800EE3D4.c)
 *     sub_1800F87B8 @ 0x1800F87B8 (sub_1800F87B8.c)
 *     sub_1800FED34 @ 0x1800FED34 (sub_1800FED34.c)
 *     sub_18010D480 @ 0x18010D480 (sub_18010D480.c)
 * Callees:
 *     sub_18006B3C4 @ 0x18006B3C4 (sub_18006B3C4.c)
 *     sub_1800A20BC @ 0x1800A20BC (sub_1800A20BC.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A1F98(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 *v6; // rbx

  v4 = *a1;
  v5 = *(__int64 **)(v4 + 8);
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      sub_1800A20BC(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_18006B3C4(v6 + 4, 0);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
