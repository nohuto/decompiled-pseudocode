/*
 * XREFs of sub_180019AE8 @ 0x180019AE8
 * Callers:
 *     sub_180019B7C @ 0x180019B7C (sub_180019B7C.c)
 *     sub_180019BE4 @ 0x180019BE4 (sub_180019BE4.c)
 *     sub_18002FEBC @ 0x18002FEBC (sub_18002FEBC.c)
 *     sub_180030498 @ 0x180030498 (sub_180030498.c)
 *     sub_18003056C @ 0x18003056C (sub_18003056C.c)
 *     sub_1800307D0 @ 0x1800307D0 (sub_1800307D0.c)
 *     sub_18003CA5F @ 0x18003CA5F (sub_18003CA5F.c)
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

BOOL __fastcall sub_180019AE8(void **a1)
{
  void **v1; // rbx
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  BOOL result; // eax

  v1 = (void **)*a1;
  *a1 = 0LL;
  if ( v1 )
  {
    v2 = v1[3];
    v1[3] = 0LL;
    if ( v2 )
      sub_180039D98(v2);
    v3 = v1[2];
    if ( v3 )
      CoTaskMemFree(v3);
    v4 = v1[1];
    v1[1] = 0LL;
    if ( v4 )
      sub_180039D98(v4);
    v5 = *v1;
    *v1 = 0LL;
    if ( v5 )
      sub_180039D98(v5);
    return sub_180039D98(v1);
  }
  return result;
}
