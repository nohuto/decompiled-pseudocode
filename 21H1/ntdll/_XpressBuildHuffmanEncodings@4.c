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
  unsigned int v38; // [esp+Ch] [ebp-1Ch]
  int *v39; // [esp+10h] [ebp-18h]
  _DWORD *v40; // [esp+14h] [ebp-14h]
  int v42; // [esp+1Ch] [ebp-Ch]
  unsigned __int8 **v43; // [esp+1Ch] [ebp-Ch]
  int v44; // [esp+1Ch] [ebp-Ch]
  unsigned int v45; // [esp+20h] [ebp-8h]
  _BYTE *v46; // [esp+20h] [ebp-8h]
  _DWORD *v47; // [esp+24h] [ebp-4h]
  char v48; // [esp+24h] [ebp-4h]
  _DWORD *v49; // [esp+24h] [ebp-4h]
  _DWORD *v50; // [esp+24h] [ebp-4h]

  v1 = this;
  v40 = this + 3587;
  memset(this + 3587, 0, 0x202u);
  memset((char *)v1 + 14862, 0, 0x202u);
  v2 = (unsigned __int8 *)(v1 + 512);
  memset(v1 + 4100, 0, 0x200u);
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
  v45 = (unsigned int)v2;
  memset(v1 + 4740, 0, 0x100u);
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
    v42 = (v2 - (unsigned __int8 *)v1 - 2048) / 12;
    if ( v42 )
    {
      v13 = (unsigned __int16 *)(v1 + 3844);
      v47 = v1 + 3844;
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
        v13 = (unsigned __int16 *)v47 + 1;
        v19 = v42-- == 1;
        v47 = (_DWORD *)((char *)v47 + 2);
      }
      while ( !v19 );
      v2 = (unsigned __int8 *)v45;
    }
    v39 = v1 + 3588;
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
      v26 = v40;
      v27 = 0;
      v28 = v39;
      for ( j = 0; ; --j )
      {
        v48 = v27;
        while ( 1 )
        {
          v43 = (unsigned __int8 **)(v23 + 8);
          v1 = this;
          if ( !*((_DWORD *)v23 + 1) )
            break;
          ++v27;
          ++j;
          *v28 = v27;
          v28 += 2;
          v48 = v27;
          *v26 = *((_DWORD *)v23 + 1);
          v26 += 2;
          v23 = *v43;
        }
        *((_DWORD *)v23 + 1) = v27;
        *((_BYTE *)this + (_DWORD)*v43 + 16400) = v48;
        if ( !j )
          break;
        v23 = (unsigned __int8 *)*(v26 - 2);
        v28 -= 2;
        v26 -= 2;
        v27 = *v28;
      }
      v30 = this[513];
      v2 = (unsigned __int8 *)v45;
      v38 = v30;
      if ( v30 <= 0xF )
        break;
      v20 = this + 512;
      v31 = this + 512;
      v21 = (unsigned __int8 *)(this + 518);
      if ( (unsigned int)(this + 512) < v45 )
      {
        do
        {
          v32 = *v31 + 1;
          v31[1] = 0;
          *v31 = v32 >> 1;
          v31 += 3;
        }
        while ( (unsigned int)v31 < v45 );
        goto LABEL_18;
      }
    }
    v33 = *(_DWORD *)(v45 - 8);
    result = 0;
    v34 = 0;
    v44 = 0;
    if ( v33 <= v30 )
    {
      do
      {
        v35 = 0;
        v46 = v1 + 4740;
        v36 = 0;
        v49 = v1 + 4228;
        do
        {
          if ( *((unsigned __int8 *)v1 + v36 + 16400) == v33 )
          {
            v35 += *v49;
            *v46 |= v33;
            HIWORD(v1[v36]) = v34++;
            LOWORD(v1[v36]) = v33;
          }
          v50 = v49 + 1;
          if ( *((unsigned __int8 *)v1 + v36 + 16401) == v33 )
          {
            v35 += *v50;
            *v46 |= 16 * (_BYTE)v33;
            v1 = this;
            HIWORD(this[v36 + 1]) = v34++;
            LOWORD(this[v36 + 1]) = v33;
          }
          ++v46;
          v36 += 2;
          v49 = v50 + 1;
        }
        while ( v36 < 0x200 );
        v34 *= 2;
        v37 = v33 * v35;
        ++v33;
        result = v37 + v44;
        v44 += v37;
      }
      while ( v33 <= v38 );
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
