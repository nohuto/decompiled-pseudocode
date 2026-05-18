/*
 * XREFs of sub_1800728D0 @ 0x1800728D0
 * Callers:
 *     sub_18007240C @ 0x18007240C (sub_18007240C.c)
 *     sub_1801254DA @ 0x1801254DA (sub_1801254DA.c)
 *     sub_180125711 @ 0x180125711 (sub_180125711.c)
 * Callees:
 *     sub_1800270E0 @ 0x1800270E0 (sub_1800270E0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800728D0(__int64 *a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  __int64 *v4; // rbx
  __int64 *v5; // rcx

  v1 = a1 + 2;
  v3 = a1[2];
  v4 = *(__int64 **)(v3 + 8);
  if ( !*((_BYTE *)v4 + 25) )
  {
    do
    {
      sub_1800270E0((__int64)v1, (__int64)v1, (__int64 *)v4[2]);
      v5 = v4;
      v4 = (__int64 *)*v4;
      j_j__o_free(v5);
    }
    while ( !*((_BYTE *)v4 + 25) );
    v3 = *v1;
  }
  j_j__o_free(v3);
  return sub_18006CFE8(a1, (__int64)a1);
}
