/*
 * XREFs of RaidUpdateZoneIoReceiveWithStatus @ 0x1C0034B00
 * Callers:
 *     RaidStartIoPacket @ 0x1C0009FE0 (RaidStartIoPacket.c)
 * Callees:
 *     IsZonedWriteRequest @ 0x1C00159B0 (IsZonedWriteRequest.c)
 *     PortSrbGetLbaFromCdb @ 0x1C00593DC (PortSrbGetLbaFromCdb.c)
 */

char __fastcall RaidUpdateZoneIoReceiveWithStatus(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v5; // r13
  __int64 v6; // rdi
  int v7; // esi
  __int64 v8; // r14
  char v9; // r10
  unsigned int v10; // r11d
  unsigned int v11; // r9d
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rcx
  unsigned __int8 v18; // bp
  char v19; // r10
  unsigned int v20; // r11d
  unsigned int v21; // r9d
  __int64 v22; // rcx
  unsigned __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // ecx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // r8
  signed __int8 v31; // al
  char v32; // tt
  __int64 v33; // rdx
  signed __int8 v34; // al

  v2 = 0;
  if ( !a2 )
    return 0;
  v5 = *(_QWORD *)(a2 + 184);
  v6 = *(_QWORD *)(v5 + 8);
  if ( *(_BYTE *)(v6 + 2) != 40 )
  {
    v18 = *(_BYTE *)(v6 + 10);
    v8 = v6 + 72;
    goto LABEL_39;
  }
  v7 = *(_DWORD *)(v6 + 20);
  v8 = 0LL;
  v9 = 0;
  if ( v7 )
    goto LABEL_14;
  v10 = *(_DWORD *)(v6 + 56);
  v11 = 0;
  if ( !v10 )
    goto LABEL_14;
  while ( 1 )
  {
    v12 = *(unsigned int *)(v6 + 4LL * v11 + 120);
    if ( (unsigned int)v12 >= 0x80 )
    {
      v13 = *(unsigned int *)(v6 + 16);
      if ( (unsigned int)v12 < (unsigned int)v13 )
        break;
    }
LABEL_29:
    if ( ++v11 >= v10 )
      goto LABEL_14;
  }
  v14 = (unsigned int)v12;
  v15 = *(_DWORD *)(v12 + v6) - 64;
  if ( !v15 )
  {
    v27 = v14 + 40;
LABEL_25:
    if ( v27 <= v13 )
    {
      v9 = 1;
      if ( !*(_BYTE *)(v14 + v6 + 10) )
        goto LABEL_14;
      v8 = v14 + v6 + 24;
    }
LABEL_28:
    if ( v9 )
      goto LABEL_14;
    goto LABEL_29;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v27 = v14 + 56;
    goto LABEL_25;
  }
  if ( v16 != 1 || v14 + 40 > v13 )
    goto LABEL_28;
  v17 = v14 + v6 + 32;
  if ( !*(_DWORD *)(v14 + v6 + 12) )
    v17 = v8;
  v8 = v17;
LABEL_14:
  v18 = 0;
  v19 = 0;
  if ( !v7 )
  {
    v20 = *(_DWORD *)(v6 + 56);
    v21 = 0;
    if ( v20 )
    {
      while ( 2 )
      {
        v22 = *(unsigned int *)(v6 + 4LL * v21 + 120);
        if ( (unsigned int)v22 < 0x80 )
          goto LABEL_36;
        v23 = *(unsigned int *)(v6 + 16);
        if ( (unsigned int)v22 >= (unsigned int)v23 )
          goto LABEL_36;
        v24 = (unsigned int)v22;
        v25 = *(_DWORD *)(v22 + v6) - 64;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            if ( v26 == 1 && v24 + 40 <= v23 )
              goto LABEL_39;
LABEL_35:
            if ( v19 )
              goto LABEL_39;
LABEL_36:
            if ( ++v21 >= v20 )
              goto LABEL_39;
            continue;
          }
          v28 = v24 + 56;
        }
        else
        {
          v28 = v24 + 40;
        }
        break;
      }
      if ( v28 <= v23 )
      {
        v18 = *(_BYTE *)(v24 + v6 + 10);
        v19 = 1;
      }
      goto LABEL_35;
    }
  }
LABEL_39:
  v29 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 64LL);
  if ( !IsZonedWriteRequest(v29, a2, 0LL, 0LL) )
    return 0;
  v30 = (unsigned int)((unsigned __int64)*(unsigned int *)(v29 + 812)
                     * PortSrbGetLbaFromCdb(v8, v18)
                     / *(_QWORD *)(v29 + 3264));
  do
  {
    v33 = *(_QWORD *)(v29 + 3288);
    v34 = *(_BYTE *)(v33 + v30);
    if ( v34 == -1 )
    {
      *(_DWORD *)(v6 + 12) |= 0x1000000u;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 128));
      ++*(_DWORD *)(*(_QWORD *)(v29 + 24) + 5776LL);
      ++*(_DWORD *)(v29 + 2160);
      return 1;
    }
    v32 = *(_BYTE *)(v33 + v30);
    v31 = _InterlockedCompareExchange8((volatile signed __int8 *)(v30 + v33), v34 + 1, v34);
  }
  while ( v32 != v31 );
  if ( v31 )
    return 1;
  return v2;
}
