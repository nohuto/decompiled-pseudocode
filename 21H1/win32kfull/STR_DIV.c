/*
 * XREFs of STR_DIV @ 0x93FC8
 * Callers:
 *     ?vInitStrDDAClip@@YGXPAU_RECTL@@0000@Z @ 0x93A92 (-vInitStrDDAClip@@YGXPAU_RECTL@@0000@Z.c)
 *     ?vInitStrDDA@@YGXPAU_STRDDA@@PAU_RECTL@@11@Z @ 0x93DC6 (-vInitStrDDA@@YGXPAU_STRDDA@@PAU_RECTL@@11@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall STR_DIV(int *a1, int a2, int a3)
{
  int result; // eax
  int v5; // ecx

  if ( a2 < 0 )
  {
    result = ~(~a2 / a3);
    v5 = a3 - ~a2 % a3 - 1;
  }
  else
  {
    result = a2 / a3;
    v5 = a2 % a3;
  }
  *a1 = result;
  a1[1] = v5;
  return result;
}
