/*
 * XREFs of _SbpUpdateCache@16 @ 0x4B2B8498
 * Callers:
 *     _SbSelectProcedure@16 @ 0x4B2B82A0 (_SbSelectProcedure@16.c)
 * Callees:
 *     _SbpFindMatchingContext@8 @ 0x4B2B8620 (_SbpFindMatchingContext@8.c)
 *     _SbAtomicCaptureContextGuid@12 @ 0x4B2B8650 (_SbAtomicCaptureContextGuid@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _SbpResolveBasedOnName@4 @ 0x4B386048 (_SbpResolveBasedOnName@4.c)
 */

int __fastcall SbpUpdateCache(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // ebx
  unsigned int *v6; // ecx
  unsigned int v7; // edx
  _DWORD *v8; // eax
  int v9; // esi
  _DWORD *v10; // esi
  unsigned int v11; // ebx
  int v12; // ecx
  char *v13; // eax
  unsigned int v14; // edi
  _DWORD *v15; // ebx
  int v16; // ebx
  _DWORD *v17; // ebx
  unsigned int v18; // edx
  int v19; // ecx
  int result; // eax
  unsigned int v21; // eax
  _DWORD *v22; // ecx
  int v23; // edi
  char *v24; // edi
  int v25; // edi
  size_t v26; // [esp-4h] [ebp-4Ch]
  unsigned int StackCookie; // [esp+Ch] [ebp-3Ch]
  _DWORD *StackCookie_4; // [esp+10h] [ebp-38h]
  char *v29; // [esp+14h] [ebp-34h]
  _DWORD *v30; // [esp+14h] [ebp-34h]
  unsigned int v31; // [esp+18h] [ebp-30h]
  int v33; // [esp+20h] [ebp-28h]
  _DWORD v35[3]; // [esp+28h] [ebp-20h] BYREF
  char Buf2[16]; // [esp+34h] [ebp-14h] BYREF

  v5 = a1;
  if ( !SbAtomicCaptureContextGuid(v35) )
    return 0;
  v6 = *(unsigned int **)(a2 + 16);
  v7 = 0;
  StackCookie = 0;
  if ( *v6 )
  {
    v8 = v5 + 4;
    v9 = -16 - (_DWORD)v5;
    StackCookie_4 = v5 + 4;
    v33 = -16 - (_DWORD)v5;
    do
    {
      v10 = *(_DWORD **)((char *)v6 + (_DWORD)v8 + v9 + 4);
      if ( v10 )
      {
        v11 = 0;
        if ( !v10[12] )
          goto LABEL_10;
        v12 = a3;
        v13 = (char *)(v10 + 37);
        v29 = (char *)(v10 + 37);
        while ( 1 )
        {
          v31 = 0;
          if ( *(_DWORD *)(v12 + 60) )
            break;
LABEL_8:
          ++v11;
          v13 += 112;
          v29 = v13;
          if ( v11 >= v10[12] )
            goto LABEL_9;
        }
        v24 = (char *)(v12 + 64);
        while ( 1 )
        {
          LODWORD(v26) = 16;
          if ( !memcmp(v13, v24, v26) )
            break;
          v24 += 16;
          v12 = a3;
          ++v31;
          v13 = v29;
          if ( v31 >= *(_DWORD *)(a3 + 60) )
            goto LABEL_8;
        }
        v25 = 28 * v11;
        if ( !v10[28 * v11 + 14] && v10[v25 + 15] == 2 )
          v10[v25 + 14] = SbpResolveBasedOnName(v10[v25 + 13]);
        *StackCookie_4 = &v10[v25 + 13];
LABEL_9:
        v7 = StackCookie;
        if ( v11 >= v10[12] )
        {
LABEL_10:
          v14 = 0;
          if ( v10[12] )
          {
            v15 = v10 + 13;
            v30 = v10 + 13;
            while ( SbpFindMatchingContext(Buf2) != 1 )
            {
              ++v14;
              v15 += 28;
              v30 = v15;
              if ( v14 >= v10[12] )
                goto LABEL_21;
            }
            v16 = 28 * v14;
            if ( !v10[28 * v14 + 14] && v10[v16 + 15] == 2 )
              v10[v16 + 14] = SbpResolveBasedOnName(v10[v16 + 13]);
            v17 = StackCookie_4;
            *StackCookie_4 = v30;
          }
          else
          {
LABEL_21:
            v17 = StackCookie_4;
          }
          v18 = v10[12];
          if ( v14 >= v18 )
          {
            v21 = 0;
            if ( v18 )
            {
              v22 = v10 + 17;
              while ( !*v22 )
              {
                ++v21;
                v22 += 28;
                if ( v21 >= v18 )
                  goto LABEL_16;
              }
              v23 = 28 * v21;
              if ( !v10[28 * v21 + 14] && v10[v23 + 15] == 2 )
                v10[v23 + 14] = SbpResolveBasedOnName(v10[v23 + 13]);
              *v17 = &v10[v23 + 13];
            }
          }
LABEL_16:
          v7 = StackCookie;
        }
      }
      ++v7;
      v9 = v33;
      v8 = StackCookie_4 + 1;
      StackCookie = v7;
      v6 = *(unsigned int **)(a2 + 16);
      ++StackCookie_4;
    }
    while ( v7 < *v6 );
    v5 = a1;
  }
  v19 = v35[0];
  v5[2] = a4;
  *v5 = v19;
  result = 1;
  v5[1] = v35[1];
  return result;
}
