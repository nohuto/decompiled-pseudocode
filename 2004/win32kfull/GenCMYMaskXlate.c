/*
 * XREFs of GenCMYMaskXlate @ 0x1C02635A4
 * Callers:
 *     pDCIAdjClr @ 0x1C00D6484 (pDCIAdjClr.c)
 * Callees:
 *     <none>
 */

char __fastcall GenCMYMaskXlate(_BYTE *a1, int a2, int a3, int a4, int a5)
{
  char result; // al
  int v6; // ebp
  int v7; // r10d
  int v8; // edi
  int v9; // esi
  int v10; // r8d
  int v12; // r10d
  int v13; // eax
  int v14; // r14d
  int v15; // ebx
  int v16; // eax
  int v17; // r10d
  int v18; // r15d
  int v19; // eax
  bool v20; // cc
  int v21; // edi
  int v22; // esi
  int i; // r9d
  int v24; // eax
  int v25; // r12d
  int v26; // r13d
  int v27; // edi
  int v28; // eax
  int v29; // edx
  char v30; // cl
  char v31; // al
  char v32; // [rsp+0h] [rbp-48h]
  int v33; // [rsp+4h] [rbp-44h]
  int v34; // [rsp+8h] [rbp-40h]

  result = a4 + 1;
  v6 = a5 + 1;
  v7 = (a5 + 1) * (a3 + 1);
  v8 = (a4 + 1) * (a5 + 1);
  v9 = a3;
  v10 = 0;
  v12 = (a4 + 1) * v7;
  v33 = v8;
  if ( v12 >= 1 && v12 <= 256 && a2 )
  {
    if ( (v12 & 1) != 0 )
    {
      v13 = v12 / 2;
      ++v12;
      v14 = v13;
    }
    else
    {
      v14 = 512;
    }
    v15 = -v8;
    v16 = v12 - 1 + (256 - v12) / 2;
    v17 = 0;
    v18 = -v6;
    v32 = v16;
    v34 = -v6;
    do
    {
      v19 = v15 + v8;
      v20 = v17 <= v9;
      v21 = a4;
      v22 = v18;
      if ( !v20 )
        v19 = v15;
      v15 = v19;
      for ( i = 0; i <= 7; ++i )
      {
        v24 = v22 + v6;
        v25 = 0;
        if ( i > v21 )
          v24 = v22;
        v26 = -1;
        v22 = v24;
        v27 = v15 + v24;
        do
        {
          v28 = v26 + 1;
          if ( v25 > a5 )
            v28 = v26;
          v26 = v28;
          v29 = v27 + v28;
          v30 = v27 + v28 + 1;
          v31 = v27 + v28;
          if ( v29 <= v14 )
            v30 = v31;
          result = v32 - v30;
          ++v25;
          *a1++ = v32 - v30;
        }
        while ( v25 <= 3 );
        v21 = a4;
        v6 = a5 + 1;
      }
      v8 = v33;
      ++v17;
      v18 = v34;
      v9 = a3;
    }
    while ( v17 <= 7 );
  }
  else
  {
    do
      *a1++ = v10++;
    while ( v10 < 256 );
  }
  return result;
}
