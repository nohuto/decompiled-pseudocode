/*
 * XREFs of _RtlpStackDbSegmentFindOrCreate@8 @ 0x4B38AB3B
 * Callers:
 *     _RtlpStackDbEntryCreate@12 @ 0x4B38A959 (_RtlpStackDbEntryCreate@12.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlpStackDbRefCountIncrement@4 @ 0x4B38AABF (_RtlpStackDbRefCountIncrement@4.c)
 *     _RtlpStackDbSegmentComparitor@8 @ 0x4B38AB02 (_RtlpStackDbSegmentComparitor@8.c)
 */

int __fastcall RtlpStackDbSegmentFindOrCreate(int a1, _DWORD *a2)
{
  int v2; // ebx
  unsigned __int8 *v3; // esi
  int v4; // edi
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  unsigned int v16; // edx
  int v17; // ecx
  unsigned int v18; // edx
  int v19; // eax
  _DWORD *v20; // ecx
  unsigned int v21; // edx
  int v22; // ecx
  unsigned int v23; // edx
  int v24; // ebx
  _DWORD *v25; // esi
  unsigned int v26; // esi
  int (__thiscall *v27)(_DWORD, unsigned int, int); // edi
  unsigned int v28; // esi
  _DWORD *v29; // edx
  char i; // cl
  int *v31; // edi
  unsigned int v32; // ecx
  PRTL_SRWLOCK j; // edx
  unsigned int v34; // edi
  int v35; // edx
  _DWORD *v36; // ecx
  _DWORD *v37; // ebx
  int v38; // edx
  _DWORD *v39; // ecx
  int v40; // ecx
  int v41; // edx
  int v42; // ecx
  size_t v44; // [esp-4h] [ebp-34h]
  void (__thiscall *v45)(_DWORD, int, int); // [esp+Ch] [ebp-24h]
  int k; // [esp+10h] [ebp-20h]
  int v47; // [esp+14h] [ebp-1Ch]
  int v48; // [esp+18h] [ebp-18h]
  int v49; // [esp+18h] [ebp-18h]
  int v50; // [esp+18h] [ebp-18h]
  int v51; // [esp+18h] [ebp-18h]
  PRTL_SRWLOCK SRWLock; // [esp+1Ch] [ebp-14h] BYREF
  _DWORD *v53; // [esp+20h] [ebp-10h]
  _DWORD *v54; // [esp+24h] [ebp-Ch]
  _DWORD *v55; // [esp+28h] [ebp-8h]
  int v56; // [esp+2Ch] [ebp-4h]

  v56 = a1;
  v55 = a2;
  v2 = 314159;
  v3 = (unsigned __int8 *)a2[1];
  v4 = 4 * *a2;
  if ( v4 >= 8 )
  {
    v5 = (unsigned int)v4 >> 3;
    v4 += -8 * ((unsigned int)v4 >> 3);
    do
    {
      v6 = 37 * (v3[6] + 37 * (v3[5] + 37 * (v3[4] + 37 * (v3[3] + 37 * (v3[2] + 37 * v3[1]))))) - 803794207 * v2;
      v7 = 442596621 * *v3;
      v8 = v3[7];
      v3 += 8;
      v2 = v8 + v6 + v7;
      --v5;
    }
    while ( v5 );
  }
  v9 = v4 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              if ( v14 != 1 )
                goto LABEL_18;
              v2 = *v3++ + 37 * v2;
            }
            v2 = *v3++ + 37 * v2;
          }
          v2 = *v3++ + 37 * v2;
        }
        v2 = *v3++ + 37 * v2;
      }
      v2 = *v3++ + 37 * v2;
    }
    v2 = *v3++ + 37 * v2;
  }
  v2 = *v3 + 37 * v2;
LABEL_18:
  SRWLock = (PRTL_SRWLOCK)(v56 + 28);
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(v56 + 28));
  v15 = 0;
  while ( 1 )
  {
    v16 = *(_DWORD *)(v56 + 4);
    v17 = (-1 << (v16 & 0x1F)) & v2;
    v48 = -1 << (v16 & 0x1F);
    v53 = (_DWORD *)v17;
    v54 = (_DWORD *)v17;
    if ( v15 )
      goto LABEL_22;
    v18 = v16 >> 5;
    if ( !v18 )
      break;
    v15 = *(_DWORD *)(v56 + 8)
        + 4
        * ((37 * (BYTE2(v54) + 37 * (BYTE1(v53) + 37 * (unsigned __int8)v17)) + HIBYTE(v54) + 374026047) & (v18 - 1));
    v17 = (int)v53;
LABEL_22:
    while ( 1 )
    {
      v15 = *(_DWORD *)v15;
      if ( (v15 & 1) != 0 )
        break;
      if ( v17 == (v48 & *(_DWORD *)(v15 + 4)) )
        goto LABEL_26;
    }
    v15 = 0;
LABEL_26:
    if ( !v15 )
      goto LABEL_34;
    if ( RtlpStackDbSegmentComparitor(v15, (int)v55) )
      goto LABEL_30;
  }
  v15 = 0;
LABEL_30:
  if ( v15 )
  {
    if ( !RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v15 + 8)) )
      v15 = 0;
    RtlReleaseSRWLockShared(SRWLock);
    return v15;
  }
LABEL_34:
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(v56 + 28));
  v19 = (*(int (__thiscall **)(_DWORD, int, _DWORD))(v56 + 32))(
          *(_DWORD *)(v56 + 32),
          4 * *v55 + 12,
          *(_DWORD *)(v56 + 40));
  v54 = (_DWORD *)v19;
  if ( !v19 )
    return 0;
  v20 = v55;
  *(_DWORD *)v19 = 0;
  *(_DWORD *)(v19 + 4) = 0;
  *(_DWORD *)(v19 + 8) = 0;
  *(_DWORD *)(v19 + 8) = *(_DWORD *)(v19 + 8) & 0xFF000000 | 1;
  *(_BYTE *)(v19 + 11) = *(_BYTE *)v20;
  *(_DWORD *)(v19 + 4) = v2;
  LODWORD(v44) = 4 * *v20;
  memcpy((void *)(v19 + 12), (const void *)v20[1], v44);
  RtlAcquireSRWLockExclusive(SRWLock);
  v15 = 0;
  while ( 1 )
  {
    v21 = *(_DWORD *)(v56 + 4);
    v49 = -1 << (v21 & 0x1F);
    v22 = v2 & v49;
    v53 = (_DWORD *)(v2 & v49);
    SRWLock = (PRTL_SRWLOCK)(v2 & v49);
    if ( v15 )
      goto LABEL_40;
    v23 = v21 >> 5;
    if ( !v23 )
      break;
    v15 = *(_DWORD *)(v56 + 8)
        + 4
        * ((37 * (BYTE2(SRWLock) + 37 * (BYTE1(v53) + 37 * (unsigned __int8)v22)) + HIBYTE(SRWLock) + 374026047) & (v23 - 1));
    v22 = (int)v53;
LABEL_40:
    while ( 1 )
    {
      v15 = *(_DWORD *)v15;
      if ( (v15 & 1) != 0 )
        break;
      if ( v22 == (v49 & *(_DWORD *)(v15 + 4)) )
        goto LABEL_44;
    }
    v15 = 0;
LABEL_44:
    if ( !v15 )
      goto LABEL_51;
    if ( RtlpStackDbSegmentComparitor(v15, (int)v55) )
      goto LABEL_48;
  }
  v15 = 0;
LABEL_48:
  if ( v15 )
  {
    v24 = v56;
    v25 = v54;
    if ( !RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v15 + 8)) )
      v15 = 0;
    goto LABEL_73;
  }
LABEL_51:
  v24 = v56;
  v26 = *(_DWORD *)(v56 + 4);
  v27 = *(int (__thiscall **)(_DWORD, unsigned int, int))(v56 + 32);
  v50 = *(_DWORD *)(v56 + 40);
  v45 = *(void (__thiscall **)(_DWORD, int, int))(v56 + 36);
  if ( *(_DWORD *)v56 < 2 * (v26 >> 5) || RtlULongLongToUInt((int *)&SRWLock, 2 * (v26 >> 5), 0) < 0 )
    goto LABEL_72;
  v28 = (unsigned int)SRWLock;
  if ( (unsigned int)SRWLock < 4 )
    v28 = 4;
  v29 = (_DWORD *)v27(v27, 4 * v28, v50);
  v55 = v29;
  if ( v29 )
  {
    if ( ((v28 - 1) & v28) != 0 )
    {
      for ( i = -1; v28; v28 >>= 1 )
        ++i;
      v28 = 1 << i;
    }
    if ( v28 > 0x4000000 )
      v28 = 0x4000000;
    v31 = v29;
    SRWLock = 0;
    v32 = &v55[v28] >= v55 ? (4 * v28) >> 2 : 0;
    if ( v32 )
    {
      for ( j = SRWLock; (unsigned int)j < v32; j = (PRTL_SRWLOCK)((char *)j + 1) )
        *v31++ = v24 | 1;
    }
    v34 = 0;
    v47 = -1 << (*(_BYTE *)(v24 + 4) & 0x1F);
    if ( (*(_DWORD *)(v24 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v35 = *(_DWORD *)(v24 + 8);
        for ( k = v35; ; v35 = k )
        {
          v36 = *(_DWORD **)(v35 + 4 * v34);
          v53 = v36;
          if ( ((unsigned __int8)v36 & 1) != 0 )
            break;
          *(_DWORD *)(v35 + 4 * v34) = *v36;
          v37 = v53;
          SRWLock = (PRTL_SRWLOCK)(v47 & v36[1]);
          v38 = (HIBYTE(SRWLock)
               + 37 * (BYTE2(SRWLock) + 37 * (BYTE1(SRWLock) + 37 * ((unsigned __int8)SRWLock + 11623883)))) & (v28 - 1);
          v39 = v55;
          *v53 = v55[v38];
          v39[v38] = v37;
        }
        v24 = v56;
        ++v34;
      }
      while ( v34 < *(_DWORD *)(v56 + 4) >> 5 );
    }
    v40 = *(_DWORD *)(v24 + 8);
    *(_DWORD *)(v24 + 8) = v55;
    v26 = *(_DWORD *)(v24 + 4) & 0x1F | (32 * v28);
    *(_DWORD *)(v24 + 4) = v26;
    if ( v40 )
    {
      v45(v45, v40, v50);
      v26 = *(_DWORD *)(v24 + 4);
    }
    goto LABEL_72;
  }
  v26 = *(_DWORD *)(v24 + 4);
  if ( v26 >= 0x20 )
  {
LABEL_72:
    v15 = (int)v54;
    v51 = v54[1] & (-1 << (v26 & 0x1F));
    v41 = (HIBYTE(v51) + 37 * (BYTE2(v51) + 37 * (BYTE1(v51) + 37 * ((unsigned __int8)v51 + 11623883)))) & ((v26 >> 5) - 1);
    v42 = *(_DWORD *)(v24 + 8);
    *v54 = *(_DWORD *)(v42 + 4 * v41);
    *(_DWORD *)(v42 + 4 * v41) = v15;
    ++*(_DWORD *)v24;
    v25 = 0;
    goto LABEL_73;
  }
  v25 = v54;
  v15 = 0;
LABEL_73:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v24 + 28));
  if ( v25 )
    (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD))(v24 + 36))(*(_DWORD *)(v24 + 36), v25, *(_DWORD *)(v24 + 40));
  return v15;
}
