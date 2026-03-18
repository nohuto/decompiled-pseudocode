/*
 * XREFs of ?vLoadAndConvertRGB32ToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02C4830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLoadAndConvertRGB32ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4)
{
  unsigned int *v4; // r10
  unsigned __int64 v5; // r9
  unsigned __int8 *v6; // r8
  __int64 v7; // rdx
  unsigned __int8 *v8; // rax
  unsigned __int64 v9; // r9
  signed __int64 v10; // r8
  unsigned int v11; // [rsp+18h] [rbp+18h]

  v4 = a1;
  v5 = 4LL * a4;
  v6 = &a2[4 * a3];
  v7 = 0LL;
  v8 = &v6[v5];
  v9 = v5 >> 2;
  if ( v6 > v8 )
    v9 = 0LL;
  if ( v9 )
  {
    v10 = v6 - (unsigned __int8 *)a1;
    do
    {
      ++v7;
      BYTE2(v11) = *(unsigned int *)((char *)v4 + v10);
      BYTE1(v11) = BYTE1(*(unsigned int *)((char *)v4 + v10));
      LOBYTE(v11) = BYTE2(*(unsigned int *)((char *)v4 + v10));
      HIBYTE(v11) = -1;
      *v4++ = v11;
    }
    while ( v7 != v9 );
  }
}
