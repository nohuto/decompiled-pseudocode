/*
 * XREFs of _XpressBuildHuffmanDecodingTable@8 @ 0x4B375041
 * Callers:
 *     _RtlDecompressBufferXpressHuff@28 @ 0x4B374780 (_RtlDecompressBufferXpressHuff@28.c)
 * Callees:
 *     <none>
 */

int __fastcall XpressBuildHuffmanDecodingTable(_WORD *a1, int a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  unsigned __int8 v5; // al
  int v6; // edi
  int v7; // edi
  __int16 v8; // ax
  unsigned __int16 *v9; // ebx
  int v10; // edi
  unsigned __int16 v11; // si
  int v12; // ecx
  bool v13; // zf
  _WORD *v14; // ebx
  int v15; // ebx
  int v16; // esi
  unsigned int v17; // edi
  bool v18; // zf
  _WORD *v19; // ebx
  int v20; // ecx
  unsigned __int16 *v21; // eax
  int v22; // ebx
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  int v26; // ecx
  _WORD *v27; // eax
  int v28; // ecx
  _WORD *v29; // eax
  int v30; // ecx
  _WORD *v31; // eax
  int v32; // ecx
  _WORD *v33; // eax
  int v34; // ecx
  _WORD *v35; // eax
  int v36; // ecx
  _WORD *v37; // eax
  int v38; // eax
  _WORD *j; // ecx
  _WORD *v42; // [esp+Ch] [ebp-Ch]
  unsigned int v43; // [esp+10h] [ebp-8h]
  int v44; // [esp+10h] [ebp-8h]
  unsigned __int16 *v45; // [esp+14h] [ebp-4h]
  int i; // [esp+14h] [ebp-4h]

  memset32(a1 + 512, 33554944, 8u);
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = *(_BYTE *)(v3 + a2);
    v6 = v5 & 0xF;
    if ( (v5 & 0xF) != 0 )
    {
      a1[2 * v3] = a1[v6 + 512];
      a1[v6 + 512] = 2 * v4;
      v5 = *(_BYTE *)(v3 + a2);
    }
    v7 = v5 >> 4;
    if ( v7 )
    {
      a1[2 * v3 + 1] = a1[v7 + 512];
      a1[v7 + 512] = 2 * v4 + 1;
    }
    v3 = v4 + 1;
    v4 = v3;
  }
  while ( v3 < 0x100 );
  v8 = -1024;
  v43 = 15;
  v9 = a1 + 527;
  v10 = 1024;
  v45 = a1 + 527;
  v11 = 0;
  v12 = -1023;
  while ( 1 )
  {
    v13 = (_WORD)v12 == (unsigned __int16)v8;
    if ( (__int16)v12 < v8 )
    {
      v14 = &a1[v10 + 1552];
      do
      {
        *v14-- = v12;
        v12 += 2;
        --v10;
        v13 = (_WORD)v12 == (unsigned __int16)v8;
      }
      while ( (__int16)v12 < v8 );
      v9 = v45;
    }
    if ( v13 )
      return -1073741246;
    v15 = *v9;
    v12 = (unsigned __int16)(v8 + 1);
    if ( v15 != 512 )
    {
      v16 = (int)&a1[v10 + 1552];
      do
      {
        v16 -= 2;
        --v10;
        *(_WORD *)(v16 + 2) = v43 + 16 * v15;
        v15 = (unsigned __int16)a1[v15];
      }
      while ( v15 != 512 );
      v11 = 0;
    }
    --v45;
    --v43;
    v8 = -(__int16)v10;
    v9 = v45;
    if ( v43 <= 0xA )
    {
      v17 = 1023;
      v18 = (_WORD)v12 == (unsigned __int16)v8;
      if ( (__int16)v12 < v8 )
      {
        v19 = a1 + 1551;
        do
        {
          *v19-- = v12;
          v12 += 2;
          --v17;
          v18 = (_WORD)v12 == (unsigned __int16)v8;
        }
        while ( (__int16)v12 < v8 );
      }
      if ( !v18 )
      {
        v20 = 0;
        v21 = a1 + 522;
        v44 = 0;
        v42 = a1 + 522;
        v22 = 10;
        do
        {
          v23 = *v21;
          for ( i = v23; v23 != 512; i = v23 )
          {
            v11 = v22 + 16 * v23;
            if ( v20 )
              return -1073741246;
            v24 = 10 - v22;
            if ( (v17 + 1) << (10 - v22) > 0x400 )
              return -1073741246;
            v25 = v17 << v24;
            switch ( v24 )
            {
              case 0:
                goto LABEL_48;
              case 1:
                goto LABEL_47;
              case 2:
                goto LABEL_46;
              case 3:
                a1[v25 + 535] = v11;
                a1[v25 + 534] = v11;
                a1[v25 + 533] = v11;
                a1[v25 + 532] = v11;
LABEL_46:
                a1[v25 + 531] = v11;
                a1[v25 + 530] = v11;
LABEL_47:
                a1[v25 + 529] = v11;
LABEL_48:
                a1[v25 + 528] = v11;
                break;
              case 4:
                v36 = 4;
                v37 = &a1[v25 + 529];
                do
                {
                  *(v37 - 1) = v11;
                  v37 += 4;
                  *(v37 - 4) = v11;
                  *(v37 - 3) = v11;
                  *(v37 - 2) = v11;
                  --v36;
                }
                while ( v36 );
                break;
              case 5:
                v34 = 8;
                v35 = &a1[v25 + 529];
                do
                {
                  *(v35 - 1) = v11;
                  v35 += 4;
                  *(v35 - 4) = v11;
                  *(v35 - 3) = v11;
                  *(v35 - 2) = v11;
                  --v34;
                }
                while ( v34 );
                break;
              case 6:
                v32 = 16;
                v33 = &a1[v25 + 529];
                do
                {
                  *(v33 - 1) = v11;
                  v33 += 4;
                  *(v33 - 4) = v11;
                  *(v33 - 3) = v11;
                  *(v33 - 2) = v11;
                  --v32;
                }
                while ( v32 );
                break;
              case 7:
                v30 = 32;
                v31 = &a1[v25 + 529];
                do
                {
                  *(v31 - 1) = v11;
                  v31 += 4;
                  *(v31 - 4) = v11;
                  *(v31 - 3) = v11;
                  *(v31 - 2) = v11;
                  --v30;
                }
                while ( v30 );
                break;
              case 8:
                v28 = 64;
                v29 = &a1[v25 + 529];
                do
                {
                  *(v29 - 1) = v11;
                  v29 += 4;
                  *(v29 - 4) = v11;
                  *(v29 - 3) = v11;
                  *(v29 - 2) = v11;
                  --v28;
                }
                while ( v28 );
                break;
              case 9:
                v26 = 128;
                v27 = &a1[v25 + 529];
                do
                {
                  *(v27 - 1) = v11;
                  v27 += 4;
                  *(v27 - 4) = v11;
                  *(v27 - 3) = v11;
                  *(v27 - 2) = v11;
                  --v26;
                }
                while ( v26 );
                break;
              default:
                __fastfail(0x25u);
            }
            if ( v17 )
            {
              v20 = v44;
            }
            else
            {
              v20 = 1;
              v44 = 1;
            }
            --v17;
            v23 = (unsigned __int16)a1[i];
          }
          v21 = v42 - 1;
          v17 >>= 1;
          --v42;
          --v22;
        }
        while ( v22 );
        if ( v20 )
          return 0;
        v38 = 2;
        for ( j = a1 + 514; *j == 512; ++j )
        {
          if ( (unsigned int)++v38 > 0xF )
          {
            if ( a1[513] == 512 )
              return -1073741246;
            memset32(a1 + 528, (v11 << 16) | v11, 0x100u);
            return 0;
          }
        }
      }
      return -1073741246;
    }
  }
}
