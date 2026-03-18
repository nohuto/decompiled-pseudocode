/*
 * XREFs of ?CI_GetClrVal@@YAKPEAGK@Z @ 0x1C008D6A4
 * Callers:
 *     xxxODI_ColorInit @ 0x1C008D430 (xxxODI_ColorInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CI_GetClrVal(unsigned __int16 *a1, unsigned int a2)
{
  unsigned __int16 v2; // ax
  unsigned int *v4; // r9
  int v5; // r10d
  unsigned __int16 v6; // r8
  unsigned __int16 v7; // dx
  char v8; // dl
  unsigned __int16 v9; // r8
  unsigned int v11; // [rsp+8h] [rbp+8h] BYREF

  v2 = *a1;
  v11 = 0;
  if ( v2 )
  {
    v4 = &v11;
    v5 = 0;
    while ( 1 )
    {
      v6 = v2;
      if ( v2 )
      {
        v7 = v2;
        do
        {
          if ( v7 >= 0x30u )
          {
            v6 = v7;
            if ( v7 <= 0x39u )
              break;
          }
          v2 = *++a1;
          v7 = *a1;
          v6 = *a1;
        }
        while ( *a1 );
      }
      if ( !v6 )
        break;
      v8 = 0;
      if ( v6 >= 0x30u )
      {
        v2 = *a1;
        v9 = *a1;
        do
        {
          if ( v9 > 0x39u )
            break;
          v8 = *(_BYTE *)a1++ + 10 * v8 - 48;
          v2 = *a1;
          v9 = *a1;
        }
        while ( *a1 >= 0x30u );
      }
      *(_BYTE *)v4 = v8;
      ++v5;
      v4 = (unsigned int *)((char *)v4 + 1);
      if ( v5 >= 3 )
      {
        *(_BYTE *)v4 = 0;
        return v11;
      }
    }
  }
  return a2;
}
