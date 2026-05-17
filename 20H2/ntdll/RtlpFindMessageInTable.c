/*
 * XREFs of RtlpFindMessageInTable @ 0x1800690CC
 * Callers:
 *     RtlFindMessage @ 0x180069010 (RtlFindMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFindMessageInTable(int *a1, int a2, unsigned int a3, unsigned __int16 **a4)
{
  __int64 v4; // r11
  int v5; // edx
  unsigned int *v6; // rax
  unsigned __int16 *v7; // r11
  unsigned __int16 *v9; // rcx
  unsigned int i; // r8d

  v4 = (unsigned int)(a2 - 1);
  v5 = *a1;
  v6 = (unsigned int *)(a1 + 1);
  v7 = (unsigned __int16 *)((char *)a1 + v4);
  while ( 1 )
  {
    if ( !v5 )
      return 3221225737LL;
    --v5;
    if ( a3 >= *v6 && a3 <= v6[1] )
      break;
    v6 += 3;
  }
  v9 = (unsigned __int16 *)((char *)a1 + v6[2]);
  for ( i = a3 - *v6; i; --i )
  {
    v9 = (unsigned __int16 *)((char *)v9 + *v9);
    if ( v9 > v7 )
      return 3221225737LL;
  }
  *a4 = v9;
  return 0LL;
}
