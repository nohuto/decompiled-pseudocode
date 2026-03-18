/*
 * XREFs of _GetCachedSMP @ 0x1BA272
 * Callers:
 *     _HT_CreateStandardMonoPattern@8 @ 0x1BA618 (_HT_CreateStandardMonoPattern@8.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _FindCachedSMP @ 0x1BA0CA (_FindCachedSMP.c)
 *     _ComputeBytesPerScanLine @ 0x1BB37B (_ComputeBytesPerScanLine.c)
 *     _CreateStandardMonoPattern @ 0x1BBAAF (_CreateStandardMonoPattern.c)
 */

int __fastcall GetCachedSMP(int a1, __int16 *a2)
{
  __int16 *v2; // ebx
  int v3; // esi
  char v4; // dl
  char v5; // al
  int **CachedSMP; // eax
  unsigned __int16 v7; // ax
  int v8; // esi
  _BYTE *v9; // ecx
  _BYTE *v10; // eax
  __int16 v11; // dx
  size_t v12; // edi
  char *v13; // ebx
  __int16 v14; // si
  int i; // eax
  unsigned int v17; // [esp+10h] [ebp-30h]
  unsigned int v18; // [esp+14h] [ebp-2Ch]
  char v20; // [esp+1Ch] [ebp-24h]
  _BYTE *v21; // [esp+20h] [ebp-20h]
  int v22; // [esp+24h] [ebp-1Ch]
  int v24; // [esp+2Ch] [ebp-14h]
  int v25; // [esp+34h] [ebp-Ch]
  _BYTE *v26; // [esp+38h] [ebp-8h]
  char *Src; // [esp+3Ch] [ebp-4h]

  v2 = a2;
  v3 = a1;
  v4 = *((_BYTE *)a2 + 4);
  if ( !v4 )
  {
    v4 = 8;
    *((_BYTE *)v2 + 4) = 8;
  }
  v5 = *((_BYTE *)v2 + 5);
  if ( !v5 )
  {
    v5 = 15;
    *((_BYTE *)v2 + 5) = 15;
  }
  if ( *((unsigned __int8 *)v2 + 3) >= 0x12u )
    return CreateStandardMonoPattern(v3, v2);
  if ( v4 != 8 )
    return CreateStandardMonoPattern(v3, v2);
  if ( v5 != 15 )
    return CreateStandardMonoPattern(v3, v2);
  CachedSMP = FindCachedSMP(a1, *((unsigned __int8 *)v2 + 3));
  if ( !CachedSMP )
    return CreateStandardMonoPattern(v3, v2);
  Src = (char *)(CachedSMP + 3);
  v17 = (unsigned int)CachedSMP[1];
  v18 = (unsigned int)CachedSMP[2];
  v2[4] = HIWORD(v17);
  v2[5] = v18;
  v7 = ComputeBytesPerScanLine(HIWORD(v17));
  v2[3] = v7;
  v8 = (unsigned __int16)v18 * v7;
  v9 = (_BYTE *)*((_DWORD *)v2 + 3);
  v24 = v7;
  v10 = v9;
  v21 = v9;
  v22 = v8;
  v26 = v9;
  if ( v9 )
  {
    v11 = *v2;
    v12 = HIWORD(v18);
    v25 = HIWORD(v18);
    v20 = *v2;
    if ( (v20 & 1) == 0 )
    {
      Src += v12 * ((unsigned __int16)v18 - 1);
      v25 = -v12;
      v10 = (_BYTE *)*((_DWORD *)v2 + 3);
    }
    if ( (_WORD)v18 )
    {
      v13 = Src;
      v14 = v18;
      do
      {
        --v14;
        memcpy(v10, v13, v12);
        v10 = &v26[v24];
        v13 += v25;
        v26 += v24;
      }
      while ( v14 );
      v2 = a2;
      v8 = v22;
      v9 = v21;
      LOBYTE(v11) = v20;
    }
    if ( (v11 & 2) != 0 )
    {
      for ( i = v8; i; --i )
      {
        *v9 = ~*v9;
        ++v9;
      }
    }
  }
  EngReleaseSemaphore(hsem);
  if ( !v8 )
  {
    v3 = a1;
    return CreateStandardMonoPattern(v3, v2);
  }
  return v8;
}
