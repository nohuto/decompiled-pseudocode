/*
 * XREFs of mov_first_3_wide_unrotated @ 0x1C02D9AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall mov_first_3_wide_unrotated(int a1, __int64 a2, int a3, char *a4, __int64 a5)
{
  __int64 v5; // r11
  char *v6; // r10
  _BYTE *v7; // r8
  char v8; // cl
  char v9; // dl
  char result; // al

  v5 = a3;
  v6 = &a4[3 * a1];
  v7 = (_BYTE *)(a5 + 2);
  do
  {
    v8 = a4[1];
    v9 = a4[2];
    result = *a4;
    a4 += 3;
    *(v7 - 2) = result;
    *(v7 - 1) = v8;
    *v7 = v9;
    v7 += v5;
  }
  while ( a4 != v6 );
  return result;
}
