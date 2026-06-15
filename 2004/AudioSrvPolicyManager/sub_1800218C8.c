/*
 * XREFs of sub_1800218C8 @ 0x1800218C8
 * Callers:
 *     sub_180021710 @ 0x180021710 (sub_180021710.c)
 *     HHOSTEDAPPMANAGERCONTEXTRundown @ 0x180023F40 (HHOSTEDAPPMANAGERCONTEXTRundown.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_180022584 @ 0x180022584 (sub_180022584.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800218C8(__int64 *a1)
{
  __int64 *v2; // rcx
  LPVOID *v3; // rdi
  __int64 v4; // rax

  while ( a1[2] )
  {
    v2 = (__int64 *)*a1;
    if ( !*a1 )
      sub_18000A174(-2147467259);
    v3 = (LPVOID *)v2[2];
    v4 = *v2;
    *a1 = *v2;
    if ( v4 )
      *(_QWORD *)(v4 + 8) = 0LL;
    else
      a1[1] = 0LL;
    *v2 = a1[4];
    a1[4] = (__int64)v2;
    if ( a1[2]-- == 1 )
      sub_180022584(a1);
    if ( v3 )
    {
      if ( *v3 )
      {
        CoTaskMemFree(*v3);
        *v3 = 0LL;
      }
      sub_180039D98(v3);
    }
  }
  sub_180022584(a1);
  sub_180039D98(a1);
  return a1;
}
