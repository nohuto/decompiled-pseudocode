/*
 * XREFs of _XpressBuildHuffmanEncodings@4 @ 0x4B375409
 * Callers:
 *     _RtlCompressBufferXpressHuffMax@36 @ 0x4B372E62 (_RtlCompressBufferXpressHuffMax@36.c)
 *     _RtlCompressBufferXpressHuffStandard@36 @ 0x4B37343F (_RtlCompressBufferXpressHuffStandard@36.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __thiscall XpressBuildHuffmanEncodings(_DWORD *this)
{
  _DWORD *v1; // ebx
  unsigned __int8 *v2; // esi
  unsigned int *v3; // edi
  unsigned int i; // edx
  unsigned int v5; // ecx
  int result; // eax
  unsigned int v7; // esi
  char *v8; // ecx
  int v9; // edx
  __int16 v10; // ax
  unsigned __int8 *v11; // edx
  int v12; // eax
  unsigned __int16 *v13; // eax
  int v14; // edi
  unsigned int v15; // esi
  char *v16; // ecx
  int v17; // edx
  int v18; // eax
  bool v19; // zf
  _DWORD *v20; // eax
  unsigned __int8 *v21; // edx
  unsigned __int8 *v22; // edi
  unsigned __int8 *v23; // ecx
  unsigned __int8 *v24; // edx
  int v25; // eax
  _DWORD *v26; // edx
  int v27; // eax
  int *v28; // edi
  int j; // esi
  unsigned int v30; // edx
  unsigned int *v31; // ecx
  unsigned int v32; // eax
  unsigned int v33; // ecx
  int v34; // edi
  int v35; // esi
  unsigned int v36; // edx
  int v37; // esi
  size_t v38; // [esp-1Ch] [ebp-44h]
  size_t v39; // [esp-10h] [ebp-38h]
  size_t v40; // [esp-4h] [ebp-2Ch]
  size_t v41; // [esp-4h] [ebp-2Ch]
  unsigned int v42; // [esp+Ch] [ebp-1Ch]
  int *v43; // [esp+10h] [ebp-18h]
  _DWORD *v44; // [esp+14h] [ebp-14h]
  int v46; // [esp+1Ch] [ebp-Ch]
  unsigned __int8 **v47; // [esp+1Ch] [ebp-Ch]
  int v48; // [esp+1Ch] [ebp-Ch]
  unsigned int v49; // [esp+20h] [ebp-8h]
  _BYTE *v50; // [esp+20h] [ebp-8h]
  _DWORD *v51; // [esp+24h] [ebp-4h]
  char v52; // [esp+24h] [ebp-4h]
  _DWORD *v53; // [esp+24h] [ebp-4h]
  _DWORD *v54; // [esp+24h] [ebp-4h]

  v1 = this;
  LODWORD(v40) = 514;
  v44 = this + 3587;
  memset(this + 3587, 0, v40);
  LODWORD(v39) = 514;
  memset((char *)v1 + 14862, 0, v39);
  LODWORD(v38) = 512;
  v2 = (unsigned __int8 *)(v1 + 512);
  memset(v1 + 4100, 0, v38);
  v3 = v1 + 4228;
  for ( i = 0; i < 0x200; ++i )
  {
    v5 = *v3;
    if ( *v3 )
    {
      *(_DWORD *)v2 = v5;
      ++*((_WORD *)v1 + (unsigned __int8)v5 + 7175);
      ++*((_WORD *)v1 + (v5 >> 8) + 7432);
      *((_DWORD *)v2 + 1) = 0;
      *((_DWORD *)v2 + 2) = i;
      v2 += 12;
    }
    ++v3;
  }
  LODWORD(v41) = 256;
  v49 = (unsigned int)v2;
  memset(v1 + 4740, 0, v41);
  if ( v2 > (unsigned __int8 *)v1 + 2060 )
  {
    v8 = (char *)v1 + 14350;
    v9 = 255;
    do
    {
      v10 = *((_WORD *)v8 - 1);
      v8 += 2;
      *((_WORD *)v8 - 1) += v10;
      *((_WORD *)v8 + 256) += *((_WORD *)v8 + 255);
      --v9;
    }
    while ( v9 );
    v11 = (unsigned __int8 *)(v1 + 512);
    if ( v1 + 512 < (_DWORD *)v2 )
    {
      do
      {
        *((_WORD *)v1 + *((unsigned __int16 *)v1 + *v11 + 7174) + 7688) = *((_WORD *)v11 + 4);
        v12 = *v11;
        v11 += 12;
        ++*((_WORD *)v1 + v12 + 7174);
      }
      while ( v11 < v2 );
    }
    v46 = (v2 - (unsigned __int8 *)v1 - 2048) / 12;
    if ( v46 )
    {
      v13 = (unsigned __int16 *)(v1 + 3844);
      v51 = v1 + 3844;
      do
      {
        v14 = *v13;
        v15 = v1[v14 + 4228];
        v16 = (char *)v1 + 2 * (v15 >> 8);
        v17 = *((unsigned __int16 *)v16 + 7431);
        *((_WORD *)v16 + 7431) = v17 + 1;
        v18 = 3 * v17;
        v1[v18 + 514] = v14;
        v1[v18 + 512] = v15;
        v13 = (unsigned __int16 *)v51 + 1;
        v19 = v46-- == 1;
        v51 = (_DWORD *)((char *)v51 + 2);
      }
      while ( !v19 );
      v2 = (unsigned __int8 *)v49;
    }
    v43 = v1 + 3588;
LABEL_18:
    v20 = v1 + 512;
    v21 = (unsigned __int8 *)(v1 + 518);
    while ( 1 )
    {
      *((_DWORD *)v2 + 1) = v20;
      v22 = v21;
      v23 = v2;
      *((_DWORD *)v2 + 2) = v1 + 515;
      v24 = v2;
      *(_DWORD *)v2 = v1[512] + v1[515];
      while ( v22 != v2 || v24 != v23 )
      {
        v23 += 12;
        if ( v22 == v2 || v24 < v23 && *(_DWORD *)v24 < *(_DWORD *)v22 )
        {
          *((_DWORD *)v23 + 1) = v24;
          v25 = *(_DWORD *)v24;
          v24 += 12;
        }
        else
        {
          *((_DWORD *)v23 + 1) = v22;
          v25 = *(_DWORD *)v22;
          v22 += 12;
        }
        *(_DWORD *)v23 = v25;
        if ( v22 == v2 || v24 < v23 && *(_DWORD *)v24 < *(_DWORD *)v22 )
        {
          *((_DWORD *)v23 + 2) = v24;
          *(_DWORD *)v23 += *(_DWORD *)v24;
          v24 += 12;
        }
        else
        {
          *((_DWORD *)v23 + 2) = v22;
          *(_DWORD *)v23 += *(_DWORD *)v22;
          v22 += 12;
        }
      }
      v26 = v44;
      v27 = 0;
      v28 = v43;
      for ( j = 0; ; --j )
      {
        v52 = v27;
        while ( 1 )
        {
          v47 = (unsigned __int8 **)(v23 + 8);
          v1 = this;
          if ( !*((_DWORD *)v23 + 1) )
            break;
          ++v27;
          ++j;
          *v28 = v27;
          v28 += 2;
          v52 = v27;
          *v26 = *((_DWORD *)v23 + 1);
          v26 += 2;
          v23 = *v47;
        }
        *((_DWORD *)v23 + 1) = v27;
        *((_BYTE *)this + (_DWORD)*v47 + 16400) = v52;
        if ( !j )
          break;
        v23 = (unsigned __int8 *)*(v26 - 2);
        v28 -= 2;
        v26 -= 2;
        v27 = *v28;
      }
      v30 = this[513];
      v2 = (unsigned __int8 *)v49;
      v42 = v30;
      if ( v30 <= 0xF )
        break;
      v20 = this + 512;
      v31 = this + 512;
      v21 = (unsigned __int8 *)(this + 518);
      if ( (unsigned int)(this + 512) < v49 )
      {
        do
        {
          v32 = *v31 + 1;
          v31[1] = 0;
          *v31 = v32 >> 1;
          v31 += 3;
        }
        while ( (unsigned int)v31 < v49 );
        goto LABEL_18;
      }
    }
    v33 = *(_DWORD *)(v49 - 8);
    result = 0;
    v34 = 0;
    v48 = 0;
    if ( v33 <= v30 )
    {
      do
      {
        v35 = 0;
        v50 = v1 + 4740;
        v36 = 0;
        v53 = v1 + 4228;
        do
        {
          if ( *((unsigned __int8 *)v1 + v36 + 16400) == v33 )
          {
            v35 += *v53;
            *v50 |= v33;
            HIWORD(v1[v36]) = v34++;
            LOWORD(v1[v36]) = v33;
          }
          v54 = v53 + 1;
          if ( *((unsigned __int8 *)v1 + v36 + 16401) == v33 )
          {
            v35 += *v54;
            *v50 |= 16 * (_BYTE)v33;
            v1 = this;
            HIWORD(this[v36 + 1]) = v34++;
            LOWORD(this[v36 + 1]) = v33;
          }
          ++v50;
          v36 += 2;
          v53 = v54 + 1;
        }
        while ( v36 < 0x200 );
        v34 *= 2;
        v37 = v33 * v35;
        ++v33;
        result = v37 + v48;
        v48 += v37;
      }
      while ( v33 <= v42 );
    }
  }
  else if ( v2 == (unsigned __int8 *)(v1 + 512) )
  {
    return 0;
  }
  else
  {
    v7 = v1[514];
    *((_BYTE *)v1 + (v7 >> 1) + 18960) = (v7 & 1) != 0 ? 16 : 1;
    v1[v7] = 1;
    return v1[512];
  }
  return result;
}
