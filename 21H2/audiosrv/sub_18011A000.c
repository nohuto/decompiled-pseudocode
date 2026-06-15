/*
 * XREFs of sub_18011A000 @ 0x18011A000
 * Callers:
 *     sub_180119B6C @ 0x180119B6C (sub_180119B6C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18011A000(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // r11
  int v5; // ebx
  __int16 v8; // r10
  unsigned __int16 v9; // ax
  __int16 v10; // r11
  __int64 v11; // rdx
  int v12; // r9d
  int v13; // r9d
  __int64 v14; // rdx
  __int16 v15; // r8
  __int64 v16; // r9
  __int16 v17; // dx
  __int16 v18; // r10
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rdx
  __int128 v22; // xmm0
  unsigned int v23; // edx
  unsigned __int64 result; // rax

  v4 = *(__int16 *)(a1 + 228);
  v5 = *(_DWORD *)(a3 + 4);
  v8 = 0;
  if ( (__int16)v4 <= 0 )
  {
LABEL_4:
    if ( (int)v4 >= 15 )
    {
      v8 = *(_WORD *)(a1 + 228);
    }
    else
    {
      *(_DWORD *)(a1 + 4 * v4 + 4) = v5;
      v8 = *(_WORD *)(a1 + 228);
      *(_WORD *)(a1 + 228) = v8 + 1;
    }
  }
  else
  {
    while ( *(_DWORD *)(a1 + 4LL * v8 + 4) != v5 )
    {
      if ( ++v8 >= (__int16)v4 )
        goto LABEL_4;
    }
  }
  if ( *(_WORD *)a3 == 0xFFFE )
    v9 = *(_WORD *)(a3 + 18);
  else
    v9 = *(_WORD *)(a3 + 14);
  v10 = 0;
  v11 = *(__int16 *)(a1 + 230);
  v12 = *(unsigned __int16 *)(a3 + 14) | (v9 << 8);
  if ( (__int16)v11 <= 0 )
  {
LABEL_13:
    if ( (int)v11 >= 7 )
    {
      v10 = *(_WORD *)(a1 + 230);
    }
    else
    {
      *(_DWORD *)(a1 + 4 * v11 + 68) = v12;
      v10 = *(_WORD *)(a1 + 230);
      *(_WORD *)(a1 + 230) = v10 + 1;
    }
  }
  else
  {
    while ( *(_DWORD *)(a1 + 4LL * v10 + 68) != v12 )
    {
      if ( ++v10 >= (__int16)v11 )
        goto LABEL_13;
    }
  }
  if ( *(_WORD *)a3 == 0xFFFE )
    v13 = *(_DWORD *)(a3 + 20);
  else
    v13 = 0;
  v14 = *(__int16 *)(a1 + 232);
  v15 = 0;
  if ( (__int16)v14 <= 0 )
  {
LABEL_22:
    if ( (int)v14 >= 15 )
    {
      v15 = *(_WORD *)(a1 + 232);
    }
    else
    {
      *(_DWORD *)(a1 + 4 * v14 + 100) = v13;
      v15 = *(_WORD *)(a1 + 232);
      *(_WORD *)(a1 + 232) = v15 + 1;
    }
  }
  else
  {
    while ( *(_DWORD *)(a1 + 4LL * v15 + 100) != v13 )
    {
      if ( ++v15 >= (__int16)v14 )
        goto LABEL_22;
    }
  }
  v16 = *(__int16 *)(a1 + 234);
  v17 = 0;
  if ( (__int16)v16 <= 0 )
  {
LABEL_28:
    if ( (int)v16 >= 15 )
    {
      v17 = *(_WORD *)(a1 + 234);
    }
    else
    {
      *(_DWORD *)(a1 + 4 * v16 + 164) = a4;
      v17 = *(_WORD *)(a1 + 234);
      *(_WORD *)(a1 + 234) = v17 + 1;
    }
  }
  else
  {
    while ( *(_DWORD *)(a1 + 4LL * v17 + 164) != a4 )
    {
      if ( ++v17 >= (__int16)v16 )
        goto LABEL_28;
    }
  }
  v18 = v17 | (16 * (v15 | (16 * (v10 | (8 * v8)))));
  v19 = *a2 - *(_QWORD *)(a1 + 4336);
  if ( *a2 == *(_QWORD *)(a1 + 4336) )
    v19 = a2[1] - *(_QWORD *)(a1 + 4344);
  if ( v19 )
  {
    v20 = *(_DWORD *)(a1 + 4332);
    if ( v20 + 1 < 0x1000 )
    {
      *(_WORD *)(v20 + a1 + 236) = -1;
      v20 = *(_DWORD *)(a1 + 4332);
    }
    v21 = v20 + 2;
    *(_DWORD *)(a1 + 4332) = v21;
    if ( (unsigned __int64)(v21 + 16) < 0x1000 )
    {
      *(_OWORD *)(v21 + a1 + 236) = *(_OWORD *)a2;
      LODWORD(v21) = *(_DWORD *)(a1 + 4332);
    }
    v22 = *(_OWORD *)a2;
    v23 = v21 + 16;
    *(_DWORD *)(a1 + 4332) = v23;
    *(_OWORD *)(a1 + 4336) = v22;
  }
  else
  {
    v23 = *(_DWORD *)(a1 + 4332);
  }
  result = v23 + 2LL;
  if ( result < 0x1000 )
  {
    *(_WORD *)(v23 + a1 + 236) = v18;
    *(_DWORD *)(a1 + 4332) += 2;
  }
  return result;
}
