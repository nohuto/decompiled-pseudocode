/*
 * XREFs of sub_18002C1D0 @ 0x18002C1D0
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_98 @ 0x180010B7C (unknown_libname_98.c)
 *     ?_Syserror_map@std@@YAPEBDH@Z @ 0x18011F9B8 (-_Syserror_map@std@@YAPEBDH@Z.c)
 */

__int64 *__fastcall sub_18002C1D0(__int64 a1, __int64 *a2, int a3)
{
  char *v4; // rax

  v4 = (char *)std::_Syserror_map(a3);
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  unknown_libname_98(a2, v4);
  return a2;
}
