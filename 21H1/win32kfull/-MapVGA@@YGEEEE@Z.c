/*
 * XREFs of ?MapVGA@@YGEEEE@Z @ 0x1FAD55
 * Callers:
 *     ?MakeITableVGA@@YGHPAE@Z @ 0x1FAD13 (-MakeITableVGA@@YGHPAE@Z.c)
 * Callees:
 *     <none>
 */

char __userpurge MapVGA@<al>(
        unsigned __int8 a1@<dl>,
        unsigned __int8 a2@<cl>,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  int v5; // edx
  char v6; // bl
  int v7; // edi
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int v13; // [esp+4h] [ebp-Ch]
  int v14; // [esp+8h] [ebp-8h]
  int v15; // [esp+Ch] [ebp-4h]
  int i; // [esp+18h] [ebp+8h]

  v13 = a3;
  v14 = a1;
  v15 = a2;
  v5 = (unsigned __int16)word_25D570[(2 * (a2 & 0x18)) | ((a1 & 0x18 | (a3 >> 2) & 6u) >> 1)];
  if ( (v5 & 0xFFF0) == 0 )
    return v5 & 0xF;
  v6 = 0;
  for ( i = 0x7FFFFFFF; v5; v5 >>= 4 )
  {
    v7 = v5 & 0xF;
    v8 = (unsigned __int8)byte_26DD62[4 * v7] - v13;
    v9 = (unsigned __int8)byte_26DD61[4 * v7] - v14;
    v10 = (unsigned __int8)byte_26DD60[4 * v7] - v15;
    v11 = v10 * v10 + v9 * v9 + v8 * v8;
    if ( v11 < i )
    {
      v6 = v5 & 0xF;
      i = v11;
    }
  }
  return v6;
}
