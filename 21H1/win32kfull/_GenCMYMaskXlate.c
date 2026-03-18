/*
 * XREFs of _GenCMYMaskXlate @ 0x1BE7D6
 * Callers:
 *     _pDCIAdjClr @ 0x1BEB31 (_pDCIAdjClr.c)
 * Callees:
 *     <none>
 */

int __fastcall GenCMYMaskXlate(_BYTE *a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int v7; // ecx
  int v8; // edx
  int result; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // ecx
  int v13; // edx
  int i; // ebx
  int v15; // [esp+Ch] [ebp-24h]
  int v16; // [esp+10h] [ebp-20h]
  int v17; // [esp+14h] [ebp-1Ch]
  int v18; // [esp+18h] [ebp-18h]
  int v19; // [esp+1Ch] [ebp-14h]
  int v20; // [esp+20h] [ebp-10h]
  char v21; // [esp+24h] [ebp-Ch]
  int v22; // [esp+28h] [ebp-8h]

  v5 = a5 + 1;
  v16 = (a4 + 1) * (a5 + 1);
  v7 = (a4 + 1) * (a5 + 1) * (a3 + 1);
  if ( v7 >= 1 && v7 <= 256 && a2 )
  {
    if ( (v7 & 1) != 0 )
    {
      ++v7;
      v22 = (a4 + 1) * (a5 + 1) * (a3 + 1) / 2;
      v5 = a5 + 1;
    }
    else
    {
      v22 = 512;
    }
    v8 = (a4 + 1) * (a5 + 1);
    v15 = v7 - 1 + (256 - v7) / 2;
    result = 0;
    v10 = -v16;
    v18 = 0;
    v17 = -v16;
    do
    {
      if ( result <= a3 )
      {
        v10 += v8;
        v17 = v10;
      }
      v11 = 0;
      v12 = v10 - v5 - 1;
      v20 = 0;
      v19 = v12;
      do
      {
        if ( v11 <= a4 )
        {
          v12 += v5;
          v19 = v12;
        }
        v13 = v12;
        for ( i = 0; i <= 3; ++i )
        {
          if ( i <= a5 )
            ++v13;
          v21 = v13;
          if ( v13 > v22 )
            v21 = v13 + 1;
          *a1++ = v15 - v21;
        }
        v12 = v19;
        v11 = v20 + 1;
        v5 = a5 + 1;
        v20 = v11;
      }
      while ( v11 <= 7 );
      v10 = v17;
      result = v18 + 1;
      v8 = (a4 + 1) * (a5 + 1);
      v18 = result;
    }
    while ( result <= 7 );
  }
  else
  {
    for ( result = 0; result < 256; ++result )
      *a1++ = result;
  }
  return result;
}
