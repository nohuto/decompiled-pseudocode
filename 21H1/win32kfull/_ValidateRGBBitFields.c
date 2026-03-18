/*
 * XREFs of _ValidateRGBBitFields @ 0x1BB7F9
 * Callers:
 *     _GetDstBFInfo @ 0x1BB40C (_GetDstBFInfo.c)
 *     _ValidateHTSI @ 0x1BB56A (_ValidateHTSI.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall ValidateRGBBitFields(void *this)
{
  int v1; // esi
  int i; // edx
  unsigned int v3; // eax
  char v4; // bl
  char v5; // bh
  bool v6; // cf
  bool v7; // cc
  int v8; // eax
  char v9; // cl
  int v10; // esi
  int v11; // edx
  int v12; // eax
  _DWORD v15[6]; // [esp+14h] [ebp-1Ch] BYREF

  qmemcpy(v15, this, sizeof(v15));
  if ( !BYTE1(v15[0]) )
    return 0;
  if ( BYTE1(v15[0]) > 3u )
  {
    if ( BYTE1(v15[0]) == 4 )
      goto LABEL_6;
    if ( BYTE1(v15[0]) <= 6u )
    {
LABEL_7:
      v1 = v15[4] | v15[3] | v15[2];
      if ( v1 && (v15[4] & (v15[3] | v15[2])) == 0 && (v15[3] & v15[2]) == 0 )
      {
        for ( i = 0; i < 3; ++i )
        {
          v3 = v15[i + 2];
          v4 = 0;
          v5 = 0;
          if ( v3 )
          {
            while ( (v3 & 1) == 0 )
            {
              v3 >>= 1;
              ++v5;
            }
            do
            {
              v3 >>= 1;
              ++v4;
            }
            while ( (v3 & 1) != 0 );
            if ( v3 )
              return 0;
          }
          *((_BYTE *)v15 + i + 2) = v5;
          *((_BYTE *)&v15[1] + i + 1) = v4;
        }
        if ( v1 == 0xFFFFFF && BYTE1(v15[1]) == 8 && HIWORD(v15[1]) == 2056 )
          LOBYTE(v15[0]) |= 1u;
        v6 = v15[2] < v15[3];
        v7 = v15[2] <= v15[3];
        if ( v15[2] < v15[3] )
        {
          if ( v15[2] < v15[4] )
          {
            v8 = v15[3] >= v15[4];
LABEL_30:
            v15[5] = SrcOrderTable[v8];
            goto LABEL_33;
          }
          v6 = v15[2] < v15[3];
          v7 = v15[2] <= v15[3];
        }
        if ( !v7 )
        {
          if ( v15[3] < v15[4] )
          {
            v8 = 3 - (v15[2] < v15[4]);
            goto LABEL_30;
          }
          v6 = v15[2] < v15[3];
        }
        v8 = v6 + 4;
        goto LABEL_30;
      }
      return 0;
    }
    if ( BYTE1(v15[0]) == 0xFC || BYTE1(v15[0]) == 0xFD )
    {
LABEL_6:
      HIWORD(v15[2]) = 0;
      HIWORD(v15[3]) = 0;
      HIWORD(v15[4]) = 0;
      goto LABEL_7;
    }
    return 0;
  }
  v9 = 0;
  HIWORD(v15[1]) = 2056;
  v10 = 255;
  BYTE1(v15[1]) = 8;
  v11 = 0;
  v15[5] = SrcOrderTable[LOBYTE(v15[5])];
  do
  {
    v12 = *((unsigned __int8 *)&v15[5] + v11 + 1);
    v15[v12 + 2] = v10;
    *((_BYTE *)v15 + v12 + 2) = v9;
    v9 += 8;
    v10 <<= 8;
    ++v11;
  }
  while ( v11 < 3 );
LABEL_33:
  qmemcpy(this, v15, 0x18u);
  return 1;
}
