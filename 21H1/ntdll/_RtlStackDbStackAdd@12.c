/*
 * XREFs of _RtlStackDbStackAdd@12 @ 0x4B38A376
 * Callers:
 *     _RtlpHpStackTraceAddStack@8 @ 0x4B36DDE3 (_RtlpHpStackTraceAddStack@8.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlpStackDbEntryCleanup@8 @ 0x4B38A8FB (_RtlpStackDbEntryCleanup@8.c)
 *     _RtlpStackDbEntryCreate@12 @ 0x4B38A959 (_RtlpStackDbEntryCreate@12.c)
 *     _RtlpStackDbRefCountIncrement@4 @ 0x4B38AABF (_RtlpStackDbRefCountIncrement@4.c)
 *     _RtlpStackDbStackComparitor@8 @ 0x4B38B0F2 (_RtlpStackDbStackComparitor@8.c)
 */

int __fastcall RtlStackDbStackAdd(_RTL_SRWLOCK *a1, unsigned __int8 *a2, int a3)
{
  int v3; // edi
  unsigned int v4; // esi
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  unsigned int v9; // esi
  unsigned int v10; // esi
  unsigned int v11; // esi
  unsigned int v12; // esi
  unsigned int v13; // esi
  unsigned int v14; // esi
  unsigned int v15; // ebx
  int v16; // esi
  unsigned int Value; // eax
  int v18; // ecx
  _RTL_SRWLOCK *v19; // esi
  unsigned int *v20; // edx
  unsigned int v21; // eax
  _DWORD *v22; // ecx
  unsigned int v23; // edi
  unsigned int v24; // esi
  unsigned int v25; // esi
  int v26; // edx
  char i; // cl
  unsigned int v28; // ecx
  unsigned int *v29; // edx
  bool v30; // zf
  int v31; // edx
  int v32; // ecx
  _DWORD *v33; // edi
  int v34; // edx
  unsigned int v35; // ecx
  int v36; // ecx
  unsigned int v37; // edx
  char v38; // cl
  int v39; // edx
  int v40; // ecx
  _RTL_SRWLOCK *v42; // [esp-4h] [ebp-48h]
  _DWORD v43[2]; // [esp+10h] [ebp-34h] BYREF
  void (__thiscall *v44)(_DWORD, int, unsigned int); // [esp+18h] [ebp-2Ch]
  _DWORD *v45; // [esp+1Ch] [ebp-28h]
  int j; // [esp+20h] [ebp-24h]
  int v47; // [esp+24h] [ebp-20h]
  int v48; // [esp+28h] [ebp-1Ch]
  unsigned int v49; // [esp+2Ch] [ebp-18h]
  _DWORD *v50; // [esp+30h] [ebp-14h]
  _DWORD *v51; // [esp+34h] [ebp-10h] BYREF
  PRTL_SRWLOCK SRWLock; // [esp+38h] [ebp-Ch]
  unsigned int v53; // [esp+3Ch] [ebp-8h]
  _RTL_SRWLOCK *v54; // [esp+40h] [ebp-4h]

  v54 = a1;
  if ( !a1 || !a3 || !a2 )
    return 0;
  v43[0] = a3;
  v3 = 314159;
  v4 = 4 * a3;
  v43[1] = a2;
  if ( 4 * a3 >= 8 )
  {
    v5 = v4 >> 3;
    v4 += -8 * (v4 >> 3);
    do
    {
      v6 = 442596621 * *a2 + 37 * (a2[6] + 37 * (a2[5] + 37 * (a2[4] + 37 * (a2[3] + 37 * (a2[2] + 37 * a2[1])))));
      v7 = 803794207 * v3;
      v8 = a2[7];
      a2 += 8;
      v3 = v6 - v7 + v8;
      --v5;
    }
    while ( v5 );
    a1 = v54;
  }
  v9 = v4 - 1;
  if ( !v9 )
    goto LABEL_21;
  v10 = v9 - 1;
  if ( !v10 )
  {
LABEL_20:
    v3 = *a2++ + 37 * v3;
LABEL_21:
    v3 = *a2 + 37 * v3;
    goto LABEL_22;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_19:
    v3 = *a2++ + 37 * v3;
    goto LABEL_20;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_18:
    v3 = *a2++ + 37 * v3;
    goto LABEL_19;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
LABEL_17:
    v3 = *a2++ + 37 * v3;
    goto LABEL_18;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
LABEL_16:
    v3 = *a2++ + 37 * v3;
    goto LABEL_17;
  }
  if ( v14 == 1 )
  {
    v3 = *a2++ + 37 * v3;
    goto LABEL_16;
  }
LABEL_22:
  SRWLock = a1 + 6;
  RtlAcquireSRWLockShared(a1 + 6);
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
    v53 = -1;
    Value = v54[4].Value;
    v53 = -1 << (Value & 0x1F);
    v18 = v53 & v3;
    v50 = (_DWORD *)(v53 & v3);
    v51 = (_DWORD *)(v53 & v3);
    if ( v16 )
      goto LABEL_26;
    v48 = Value >> 5;
    if ( !(Value >> 5) )
      break;
    v16 = v54[5].Value
        + 4
        * ((37 * (BYTE2(v51) + 37 * (BYTE1(v50) + 37 * (unsigned __int8)v18)) + HIBYTE(v51) + 374026047) & (v48 - 1));
    v18 = (int)v50;
LABEL_26:
    while ( 1 )
    {
      v16 = *(_DWORD *)v16;
      if ( (v16 & 1) != 0 )
        break;
      if ( v18 == (v53 & *(_DWORD *)(v16 + 4)) )
        goto LABEL_30;
    }
    v16 = 0;
LABEL_30:
    if ( !v16 )
      goto LABEL_38;
    if ( RtlpStackDbStackComparitor(v16, v43) )
      goto LABEL_34;
  }
  v16 = 0;
LABEL_34:
  if ( !v16 )
  {
LABEL_38:
    v19 = SRWLock;
    RtlReleaseSRWLockShared(SRWLock);
    v48 = RtlpStackDbEntryCreate(v3);
    if ( !v48 )
      return 0;
    RtlAcquireSRWLockExclusive(v19);
    v16 = 0;
    while ( 1 )
    {
      v20 = (unsigned int *)v54;
      v53 = -1;
      v21 = v54[4].Value;
      v53 = -1 << (v21 & 0x1F);
      v22 = (_DWORD *)(v3 & v53);
      v51 = (_DWORD *)(v3 & v53);
      v50 = (_DWORD *)(v3 & v53);
      if ( v16 )
        goto LABEL_44;
      v49 = v21 >> 5;
      if ( !(v21 >> 5) )
        break;
      v16 = v54[5].Value
          + 4
          * ((37 * (BYTE2(v50) + 37 * (BYTE1(v51) + 37 * (unsigned __int8)v22)) + HIBYTE(v50) + 374026047) & (v49 - 1));
      v22 = v51;
LABEL_44:
      while ( 1 )
      {
        v16 = *(_DWORD *)v16;
        if ( (v16 & 1) != 0 )
          break;
        if ( v22 == (_DWORD *)(v53 & *(_DWORD *)(v16 + 4)) )
          goto LABEL_48;
      }
      v16 = 0;
LABEL_48:
      if ( !v16 )
        goto LABEL_55;
      if ( RtlpStackDbStackComparitor(v16, v43) )
      {
        v20 = (unsigned int *)v54;
        goto LABEL_51;
      }
    }
    v16 = 0;
LABEL_51:
    if ( v16 )
    {
      if ( RtlpStackDbRefCountIncrement(v16 + 8) )
      {
LABEL_79:
        RtlReleaseSRWLockExclusive(SRWLock);
        RtlpStackDbEntryCleanup(v54, v48);
        return v16;
      }
LABEL_78:
      v16 = 0;
      goto LABEL_79;
    }
LABEL_55:
    v23 = (unsigned int)(v20 + 3);
    v24 = v20[4];
    v49 = v20[10];
    v44 = (void (__thiscall *)(_DWORD, int, unsigned int))v20[9];
    v50 = (_DWORD *)v20[8];
    v45 = v20 + 3;
    if ( v20[3] >= 2 * (v24 >> 5) && RtlULongLongToUInt((int *)&v51, 2 * (v24 >> 5), 0) >= 0 )
    {
      v25 = (unsigned int)v51;
      if ( (unsigned int)v51 < 4 )
        v25 = 4;
      v26 = ((int (__thiscall *)(_DWORD *, unsigned int, unsigned int))v50)(v50, 4 * v25, v49);
      v53 = v26;
      if ( v26 )
      {
        if ( ((v25 - 1) & v25) != 0 )
        {
          for ( i = -1; v25; v25 >>= 1 )
            ++i;
          v25 = 1 << i;
        }
        if ( v25 > 0x4000000 )
          v25 = 0x4000000;
        v50 = (_DWORD *)v26;
        v51 = 0;
        v28 = 4 * v25 + v53 >= v53 ? (4 * v25) >> 2 : 0;
        if ( v28 )
        {
          v29 = v50;
          do
          {
            v51 = (_DWORD *)((char *)v51 + 1);
            *v29++ = v23 | 1;
          }
          while ( (unsigned int)v51 < v28 );
        }
        v30 = (*(_DWORD *)(v23 + 4) & 0xFFFFFFE0) == 0;
        v47 = -1 << (*(_BYTE *)(v23 + 4) & 0x1F);
        if ( !v30 )
        {
          do
          {
            v31 = *(_DWORD *)(v23 + 8);
            for ( j = v31; ; v31 = j )
            {
              v32 = *(_DWORD *)(v31 + 4 * v15);
              v51 = (_DWORD *)v32;
              if ( (v32 & 1) != 0 )
                break;
              *(_DWORD *)(v31 + 4 * v15) = *(_DWORD *)v32;
              v33 = v51;
              v50 = (_DWORD *)(v47 & *(_DWORD *)(v32 + 4));
              v34 = (HIBYTE(v50) + 37 * (BYTE2(v50) + 37 * (BYTE1(v50) + 37 * ((unsigned __int8)v50 + 11623883)))) & (v25 - 1);
              v35 = v53;
              *v51 = *(_DWORD *)(v53 + 4 * v34);
              *(_DWORD *)(v35 + 4 * v34) = v33;
            }
            v23 = (unsigned int)v45;
            ++v15;
          }
          while ( v15 < v45[1] >> 5 );
        }
        v36 = *(_DWORD *)(v23 + 8);
        *(_DWORD *)(v23 + 8) = v53;
        v24 = *(_DWORD *)(v23 + 4) & 0x1F | (32 * v25);
        *(_DWORD *)(v23 + 4) = v24;
        if ( v36 )
        {
          v44(v44, v36, v49);
          v24 = v54[4].Value;
        }
      }
      else
      {
        v24 = *(_DWORD *)(v23 + 4);
        if ( v24 < 0x20 )
          goto LABEL_78;
      }
    }
    v37 = v24;
    v38 = v24 & 0x1F;
    v16 = v48;
    v42 = SRWLock;
    v48 = *(_DWORD *)(v48 + 4) & (-1 << v38);
    v39 = (HIBYTE(v48) + 37 * (BYTE2(v48) + 37 * (BYTE1(v48) + 37 * ((unsigned __int8)v48 + 11623883)))) & ((v37 >> 5) - 1);
    v40 = *(_DWORD *)(v23 + 8);
    *(_DWORD *)v16 = *(_DWORD *)(v40 + 4 * v39);
    *(_DWORD *)(v40 + 4 * v39) = v16;
    ++*(_DWORD *)v23;
    RtlReleaseSRWLockExclusive(v42);
    return v16;
  }
  if ( !RtlpStackDbRefCountIncrement(v16 + 8) )
    v16 = 0;
  RtlReleaseSRWLockShared(SRWLock);
  return v16;
}
