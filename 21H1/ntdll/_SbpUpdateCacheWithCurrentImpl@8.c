/*
 * XREFs of _SbpUpdateCacheWithCurrentImpl@8 @ 0x4B3860EA
 * Callers:
 *     _SbSelectProcedure@16 @ 0x4B2B82A0 (_SbSelectProcedure@16.c)
 * Callees:
 *     _RtlGetVersion@4 @ 0x4B2AFEF0 (_RtlGetVersion@4.c)
 *     _SbGetContextDetailsByVersion@12 @ 0x4B2B820A (_SbGetContextDetailsByVersion@12.c)
 *     _SbpFindMatchingContext@8 @ 0x4B2B8620 (_SbpFindMatchingContext@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _SbpResolveBasedOnName@4 @ 0x4B386048 (_SbpResolveBasedOnName@4.c)
 */

int __fastcall SbpUpdateCacheWithCurrentImpl(int a1, int a2)
{
  int v4; // edi
  unsigned int *v5; // ecx
  unsigned int v6; // edx
  _DWORD *v7; // eax
  int v8; // ebx
  int v9; // esi
  unsigned int v10; // ebx
  int v11; // eax
  void *v12; // ecx
  int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // ecx
  _DWORD *v16; // eax
  int v17; // ebx
  int v18; // eax
  int v20; // [esp+Ch] [ebp-144h]
  unsigned int v21; // [esp+Ch] [ebp-144h]
  _DWORD *v22; // [esp+10h] [ebp-140h]
  unsigned int v23; // [esp+14h] [ebp-13Ch]
  void *v24; // [esp+18h] [ebp-138h]
  int v25; // [esp+1Ch] [ebp-134h] BYREF
  int v26; // [esp+20h] [ebp-130h]
  int v27; // [esp+24h] [ebp-12Ch]
  _DWORD v28[73]; // [esp+28h] [ebp-128h] BYREF

  v27 = a2;
  memset(v28, 0, 0x11Cu);
  v25 = 0;
  v4 = 1;
  if ( RtlGetVersion((int)v28) < 0 || SbGetContextDetailsByVersion(v28[1], v28[2], &v25) != 1 )
    return 0;
  v5 = *(unsigned int **)(a2 + 16);
  v6 = 0;
  v23 = 0;
  if ( *v5 )
  {
    v7 = (_DWORD *)(a1 + 16);
    v8 = -16 - a1;
    v22 = (_DWORD *)(a1 + 16);
    v26 = -16 - a1;
    do
    {
      v9 = *(unsigned int *)((char *)v5 + (_DWORD)v7 + v8 + 4);
      if ( v9 )
      {
        v10 = 0;
        if ( *(_DWORD *)(v9 + 48) )
        {
          v11 = v9 + 52;
          v12 = (void *)(v25 + 4);
          v20 = v9 + 52;
          v24 = (void *)(v25 + 4);
          while ( !SbpFindMatchingContext(v12, v11) )
          {
            ++v10;
            v12 = v24;
            v11 = v20 + 112;
            v20 += 112;
            if ( v10 >= *(_DWORD *)(v9 + 48) )
              goto LABEL_15;
          }
          v13 = 112 * v10;
          if ( !*(_DWORD *)(112 * v10 + v9 + 56) && *(_DWORD *)(v13 + v9 + 60) == 2 )
            *(_DWORD *)(112 * v10 + v9 + 56) = SbpResolveBasedOnName(*(wchar_t **)(v13 + v9 + 52));
          *v22 = v20;
        }
LABEL_15:
        v14 = *(_DWORD *)(v9 + 48);
        if ( v10 >= v14 )
        {
          v15 = 0;
          v21 = 0;
          if ( v14 )
          {
            v16 = (_DWORD *)(v9 + 68);
            while ( !*v16 )
            {
              ++v15;
              v16 += 28;
              v21 = v15;
              if ( v15 >= v14 )
                goto LABEL_25;
            }
            v17 = 112 * v15;
            if ( !*(_DWORD *)(112 * v15 + v9 + 56) && *(_DWORD *)(v17 + v9 + 60) == 2 )
            {
              v18 = SbpResolveBasedOnName(*(wchar_t **)(v17 + v9 + 52));
              v15 = v21;
              *(_DWORD *)(v17 + v9 + 56) = v18;
            }
            *v22 = v17 + v9 + 52;
          }
LABEL_25:
          if ( v15 >= *(_DWORD *)(v9 + 48) )
            return 0;
        }
        v8 = v26;
        v6 = v23;
      }
      ++v6;
      v7 = v22 + 1;
      v23 = v6;
      ++v22;
      v5 = *(unsigned int **)(v27 + 16);
    }
    while ( v6 < *v5 );
  }
  return v4;
}
