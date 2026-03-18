/*
 * XREFs of sub_1C000C888 @ 0x1C000C888
 * Callers:
 *     sub_1C000E0B0 @ 0x1C000E0B0 (sub_1C000E0B0.c)
 * Callees:
 *     sub_1C0004AFC @ 0x1C0004AFC (sub_1C0004AFC.c)
 */

void sub_1C000C888()
{
  if ( qword_1C0007238 )
  {
    sub_1C0004AFC((void *)qword_1C0007238);
    qword_1C0007238 = 0LL;
  }
}
