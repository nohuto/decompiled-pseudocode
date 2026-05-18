/*
 * XREFs of sub_180031AA0 @ 0x180031AA0
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_100 @ 0x180010C5C (unknown_libname_100.c)
 *     ?_Syserror_map@std@@YAPEBDH@Z @ 0x180125288 (-_Syserror_map@std@@YAPEBDH@Z.c)
 */

__int64 *__fastcall sub_180031AA0(__int64 a1, __int64 *a2, int a3)
{
  char *v4; // rax

  v4 = (char *)std::_Syserror_map(a3);
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  unknown_libname_100(a2, v4);
  return a2;
}
