/*
 * XREFs of _RtlRbInsertNodeEx@16 @ 0x4B2CEB50
 * Callers:
 *     _EtwNotificationRegister@20 @ 0x4B2C1950 (_EtwNotificationRegister@20.c)
 *     _LdrpInsertModuleToIndexLockHeld@8 @ 0x4B2CC82C (_LdrpInsertModuleToIndexLockHeld@8.c)
 *     _LdrpCheckForRetryLoading@8 @ 0x4B2DE632 (_LdrpCheckForRetryLoading@8.c)
 *     _EtwpInsertGuidEntry@4 @ 0x4B2F2551 (_EtwpInsertGuidEntry@4.c)
 *     _LdrpAddRedirectedFunction@12 @ 0x4B333F08 (_LdrpAddRedirectedFunction@12.c)
 *     _RtlpHpLargeAlloc@16 @ 0x4B379D22 (_RtlpHpLargeAlloc@16.c)
 *     _RtlpHpVaMgrFree@8 @ 0x4B37AE7C (_RtlpHpVaMgrFree@8.c)
 *     _RtlpHpSegFreeRangeInsert@12 @ 0x4B37B9EA (_RtlpHpSegFreeRangeInsert@12.c)
 *     _RtlpHpVsFreeChunkInsert@12 @ 0x4B37F97E (_RtlpHpVsFreeChunkInsert@12.c)
 * Callees:
 *     <none>
 */

char __stdcall RtlRbInsertNodeEx(int *a1, unsigned int a2, bool a3, int a4)
{
  int *v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // esi
  char v7; // bh
  char v8; // bl
  int v9; // edi
  bool v10; // zf
  int v11; // ebx
  int v12; // eax
  int v13; // ebx
  unsigned int v14; // ebx
  int v15; // eax
  unsigned int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  int v20; // edi
  int v21; // eax
  int v22; // eax
  int v23; // edi
  int v24; // eax
  int v25; // edi
  int v26; // edi
  unsigned int v27; // eax
  int v28; // eax
  int v29; // eax
  unsigned int v30; // esi
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // esi
  int v35; // eax
  int v36; // esi
  unsigned int v37; // esi
  unsigned int v38; // edi
  int v39; // edi
  int *v41; // [esp+Ch] [ebp-20h]
  int *v42; // [esp+14h] [ebp-18h]
  BOOL v43; // [esp+18h] [ebp-14h]
  int v44; // [esp+18h] [ebp-14h]
  int v45; // [esp+18h] [ebp-14h]
  int v46; // [esp+1Ch] [ebp-10h]
  BOOL v47; // [esp+20h] [ebp-Ch]
  int v48; // [esp+20h] [ebp-Ch]
  int v49; // [esp+24h] [ebp-8h]
  char v50; // [esp+2Ah] [ebp-2h]
  char v51; // [esp+2Bh] [ebp-1h]

  v4 = a1;
  v5 = a2;
  v6 = a4;
  *(_DWORD *)a4 = 0;
  *(_DWORD *)(a4 + 4) = 0;
  v7 = *((_BYTE *)a1 + 4);
  v8 = v7 & 1;
  if ( !a2 )
  {
    v12 = a4 ^ (unsigned int)a1;
    if ( v8 )
    {
      *a1 = v12;
      v7 = *((_BYTE *)a1 + 4);
    }
    else
    {
      *a1 = a4;
    }
    if ( (v7 & 1) != 0 )
    {
      a1[1] = v12;
      *((_BYTE *)a1 + 4) |= 1u;
    }
    else
    {
      a1[1] = a4;
    }
    *(_DWORD *)(a4 + 8) = 0;
    return v12;
  }
  v9 = a2 ^ a4;
  v10 = v8 == 0;
  v11 = a2 ^ a4;
  if ( v10 )
    v11 = a4;
  LOBYTE(v12) = a3;
  *(_DWORD *)(a2 + 4 * a3) = v11;
  if ( (a1[1] & 1) == 0 )
    v9 = a2;
  *(_DWORD *)(a4 + 8) = v9 | 1;
  if ( !a3 )
  {
    v13 = a1[1];
    if ( (v13 & 1) != 0 )
      v12 = v13 == 1 ? 0 : v13 ^ ((unsigned int)a1 | 1);
    else
      v12 = a1[1];
    if ( a2 == v12 )
    {
      if ( (v13 & 1) != 0 )
      {
        LOBYTE(v12) = a4 ^ (unsigned __int8)a1;
        a1[1] = a4 ^ (unsigned int)a1;
        *((_BYTE *)a1 + 4) |= 1u;
      }
      else
      {
        a1[1] = a4;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
  {
    LOBYTE(v12) = *((_BYTE *)a1 + 4);
    v51 = v12;
    while ( 1 )
    {
      v14 = *(_DWORD *)(v5 + 8) & 0xFFFFFFFC;
      v50 = v12 & 1;
      if ( (v12 & 1) != 0 && v14 )
        v14 ^= v5;
      v15 = *(_DWORD *)v14;
      if ( v50 && v15 )
        v15 ^= v14;
      v47 = v15 != v5;
      v43 = v15 == v5;
      v12 = *(_DWORD *)(v14 + 4 * v43);
      if ( v50 )
      {
        if ( !v12 )
          break;
        v12 ^= v14;
      }
      if ( !v12 || (*(_BYTE *)(v12 + 8) & 1) == 0 )
        break;
      *(_BYTE *)(v5 + 8) &= ~1u;
      v6 = v14;
      *(_BYTE *)(v12 + 8) &= ~1u;
      v5 = *(_DWORD *)(v14 + 8) & 0xFFFFFFFC;
      if ( (a1[1] & 1) != 0 )
      {
        if ( !v5 )
          return v12;
        v5 ^= v14;
      }
      if ( v5 )
      {
        *(_BYTE *)(v14 + 8) |= 1u;
        v12 = *(_DWORD *)v5;
        v51 = *((_BYTE *)a1 + 4);
        if ( (v51 & 1) != 0 && v12 )
          v12 ^= v5;
        v10 = v14 == v12;
        LOBYTE(v12) = *((_BYTE *)a1 + 4);
        a3 = !v10;
        if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
          continue;
      }
      return v12;
    }
    if ( a3 == v47 )
    {
LABEL_42:
      v26 = *v4;
      if ( (v4[1] & 1) != 0 )
      {
        if ( v26 )
          v26 ^= (unsigned int)v4;
        else
          v26 = 0;
      }
      v48 = !v47;
      v27 = *(_DWORD *)(v5 + 8) & 0xFFFFFFFC;
      v49 = v4[1] & 1;
      if ( (v4[1] & 1) != 0 && v27 )
        v27 ^= v5;
      if ( v27 != v14 )
        goto LABEL_100;
      v28 = *(_DWORD *)(v14 + 4 * (v48 ^ 1));
      if ( (v4[1] & 1) != 0 && v28 )
        v28 ^= v14;
      if ( v28 != v5 )
        goto LABEL_100;
      v29 = v4[1] & 1;
      v41 = (int *)(v14 + 8);
      v30 = *(_DWORD *)(v14 + 8) & 0xFFFFFFFC;
      if ( (v4[1] & 1) != 0 )
      {
        if ( !v30 )
          goto LABEL_93;
        v30 ^= v14;
      }
      if ( v30 )
      {
        if ( (v4[1] & 1) != 0 && *(_DWORD *)(v30 + 4) )
          v31 = v30 ^ *(_DWORD *)(v30 + 4);
        else
          v31 = *(_DWORD *)(v30 + 4);
        if ( v31 == v14 )
        {
          if ( (v4[1] & 1) != 0 )
            v45 = v5 ^ v30;
          else
            v45 = v5;
          *(_DWORD *)(v30 + 4) = v45;
        }
        else
        {
          if ( (v4[1] & 1) != 0 && *(_DWORD *)v30 )
            v32 = v30 ^ *(_DWORD *)v30;
          else
            v32 = *(_DWORD *)v30;
          if ( v32 != v14 )
            goto LABEL_100;
          if ( (v4[1] & 1) != 0 )
            v44 = v5 ^ v30;
          else
            v44 = v5;
          *(_DWORD *)v30 = v44;
        }
        v29 = v49;
        goto LABEL_59;
      }
LABEL_93:
      if ( v26 != v14 )
        goto LABEL_100;
      v26 = v5;
LABEL_59:
      if ( v29 && v30 )
        v30 ^= v5;
      v33 = v30 | *(_DWORD *)(v5 + 8) & 3;
      v34 = v49;
      *(_DWORD *)(v5 + 8) = v33;
      v35 = *(_DWORD *)(v5 + 4 * v48);
      if ( v49 )
      {
        if ( !v35 )
        {
LABEL_62:
          if ( v34 && v35 )
            v35 ^= v14;
          *(_DWORD *)(v14 + 4 * (v48 ^ 1)) = v35;
          v36 = v5 ^ v14;
          if ( v49 )
            v14 ^= v5;
          *(_DWORD *)(v5 + 4 * v48) = v14;
          if ( !v49 )
            v36 = v5;
          v12 = v36 | *v41 & 3;
          *v41 = v12;
          if ( (a1[1] & 1) != 0 )
          {
            LOBYTE(v12) = v26 ^ (unsigned __int8)a1;
            v26 = v26 != 0 ? v26 ^ (unsigned int)a1 : 0;
          }
          *a1 = v26;
          *(_BYTE *)v41 |= 1u;
          *(_BYTE *)(v5 + 8) &= ~1u;
          return v12;
        }
        v35 ^= v5;
      }
      if ( !v35 )
        goto LABEL_62;
      v37 = *(_DWORD *)(v35 + 8) & 0xFFFFFFFC;
      if ( v49 && v37 )
        v37 ^= v35;
      if ( v37 == v5 )
      {
        if ( v49 )
          v46 = v14 ^ v35;
        else
          v46 = v14;
        *(_DWORD *)(v35 + 8) = v46 | *(_DWORD *)(v35 + 8) & 3;
        v34 = v49;
        goto LABEL_62;
      }
LABEL_100:
      __fastfail(0x1Du);
    }
    v16 = *(_DWORD *)(v6 + 8) & 0xFFFFFFFC;
    if ( (v51 & 1) != 0 && v16 )
      v16 ^= v6;
    if ( v16 != v5 )
      goto LABEL_100;
    v17 = *(_DWORD *)(v5 + 4 * v43);
    if ( (v51 & 1) != 0 && v17 )
      v17 ^= v5;
    if ( v17 != v6 )
      goto LABEL_100;
    v18 = *(_DWORD *)(v14 + 4 * v47);
    if ( (v51 & 1) != 0 && v18 )
      v18 ^= v14;
    if ( v18 != v5 )
      goto LABEL_100;
    v42 = (int *)(v5 + 8);
    v19 = *(_DWORD *)(v5 + 8) & 0xFFFFFFFC;
    if ( (v51 & 1) != 0 && v19 )
      v19 ^= v5;
    if ( v19 != v14 )
      goto LABEL_100;
    v20 = v6 ^ v14;
    v21 = v6 ^ v14;
    if ( (v51 & 1) == 0 )
      v21 = v6;
    *(_DWORD *)(v14 + 4 * v47) = v21;
    if ( (v51 & 1) == 0 )
      v20 = v14;
    v22 = v20 | *(_DWORD *)(v6 + 8) & 3;
    v23 = v51 & 1;
    *(_DWORD *)(v6 + 8) = v22;
    v24 = *(_DWORD *)(v6 + 4 * v47);
    if ( (v51 & 1) != 0 )
    {
      if ( !v24 )
      {
LABEL_36:
        if ( v23 && v24 )
          v24 ^= v5;
        *(_DWORD *)(v5 + 4 * v43) = v24;
        v25 = v5 ^ v6;
        if ( (v51 & 1) != 0 )
          v5 ^= v6;
        *(_DWORD *)(v6 + 4 * v47) = v5;
        if ( (v51 & 1) == 0 )
          v25 = v6;
        v4 = a1;
        *v42 = v25 | *v42 & 3;
        v5 = v6;
        goto LABEL_42;
      }
      v24 ^= v6;
    }
    if ( v24 )
    {
      v38 = *(_DWORD *)(v24 + 8) & 0xFFFFFFFC;
      if ( (v51 & 1) != 0 && v38 )
        v38 ^= v24;
      if ( v38 != v6 )
        goto LABEL_100;
      if ( (v51 & 1) != 0 )
        v39 = v5 ^ v24;
      else
        v39 = v5;
      *(_DWORD *)(v24 + 8) = v39 | *(_DWORD *)(v24 + 8) & 3;
      v23 = v51 & 1;
    }
    goto LABEL_36;
  }
  return v12;
}
