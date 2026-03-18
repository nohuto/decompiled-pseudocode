/*
 * XREFs of sub_1C0053050 @ 0x1C0053050
 * Callers:
 *     sub_1C00298F8 @ 0x1C00298F8 (sub_1C00298F8.c)
 *     sub_1C002A7DC @ 0x1C002A7DC (sub_1C002A7DC.c)
 *     sub_1C0037D08 @ 0x1C0037D08 (sub_1C0037D08.c)
 * Callees:
 *     sub_1C0031CD4 @ 0x1C0031CD4 (sub_1C0031CD4.c)
 */

char __fastcall sub_1C0053050(unsigned __int8 *a1, unsigned int a2, _DWORD *a3, char a4)
{
  char v5; // di
  unsigned __int8 *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v5 = 1;
  if ( a1[1] != 2 )
  {
    v5 = 0;
    if ( a3 )
      *a3 = -1073737984;
  }
  if ( *a1 < 9u )
  {
    v5 = 0;
    if ( a3 )
      *a3 = -1073737984;
  }
  if ( a4 )
  {
    if ( (unsigned int)sub_1C0031CD4(a1, a2, (__int64)a3, &v7) )
    {
      v5 = 0;
      if ( a3 )
        *a3 = -1073737984;
    }
  }
  return v5;
}
