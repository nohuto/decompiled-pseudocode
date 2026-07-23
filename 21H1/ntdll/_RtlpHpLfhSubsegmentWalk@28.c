/*
 * XREFs of _RtlpHpLfhSubsegmentWalk@28 @ 0x4B377B9C
 * Callers:
 *     _RtlpHpSegWalk@12 @ 0x4B37DAD6 (_RtlpHpSegWalk@12.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     __aullshr @ 0x4B2F6840 (__aullshr.c)
 *     _RtlpHpLfhSubsegmentSizeBlockInternal@16 @ 0x4B377B1D (_RtlpHpLfhSubsegmentSizeBlockInternal@16.c)
 */

int __fastcall RtlpHpLfhSubsegmentWalk(
        int a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int *a5,
        unsigned int *a6,
        int *a7)
{
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edx
  int v11; // ecx
  unsigned int v12; // esi
  unsigned int v13; // edx
  char v14; // cl
  int v15; // edx
  int v16; // esi
  int v17; // edx
  unsigned int v18; // edi
  unsigned int v19; // ecx
  unsigned int v20; // ebx
  unsigned int v21; // esi
  int v22; // edx
  _DWORD *v23; // ebx
  int v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // esi
  unsigned __int16 v27; // si
  int v28; // ebx
  unsigned int v29; // edx
  char v30; // cl
  unsigned int v31; // eax
  unsigned int v32; // edi
  BOOL v33; // eax
  int v34; // ecx
  unsigned int v35; // ecx
  unsigned int *v36; // eax
  unsigned int v38; // [esp+10h] [ebp-24h]
  unsigned int v39; // [esp+14h] [ebp-20h]
  int v40; // [esp+18h] [ebp-1Ch]
  unsigned int v41; // [esp+1Ch] [ebp-18h]
  unsigned int v43; // [esp+28h] [ebp-Ch]
  unsigned int v44; // [esp+28h] [ebp-Ch]
  unsigned int v45; // [esp+2Ch] [ebp-8h]
  int v46; // [esp+30h] [ebp-4h]

  v8 = dword_4B3A4324 ^ *(_DWORD *)(a2 + 24) ^ (a2 >> 12);
  v9 = *(unsigned __int16 *)(a2 + 18) + *(unsigned __int8 *)(a2 + 23);
  v10 = 0;
  v46 = v8;
  if ( a3 != a2 )
  {
    v11 = *(_DWORD *)(a1
                    + 4 * (unsigned __int8)RtlpLfhBucketIndexMap[((unsigned int)(unsigned __int16)v8 + 7) >> 3]
                    + 128);
    v12 = a3 - HIWORD(v8) - a2;
    v13 = *(_DWORD *)(v11 + 36);
    v14 = *(_BYTE *)(v11 + 40);
    if ( v13 )
    {
      v15 = (v13 * (unsigned __int64)v12) >> v14;
      v16 = v12 - (unsigned __int16)v8 * v15;
    }
    else
    {
      v15 = v12 >> v14;
      v16 = ((1 << v14) - 1) & v12;
    }
    if ( v16 )
      return 0;
    v10 = v15 + 1;
    if ( v10 >= v9 )
      return 0;
  }
  v38 = 2 * v9;
  v39 = a2 + 32;
  v18 = 2 * v10;
  while ( 2 )
  {
    v19 = v38;
    v20 = v18 < v38 ? v18 : 0;
    v21 = v38 - 1;
    while ( 1 )
    {
      v43 = v20;
      if ( v21 - v20 == -1 )
        goto LABEL_17;
      v22 = (1 << (v20 & 0x1F)) - 1;
      v23 = (_DWORD *)(v39 + 4 * (v20 >> 5));
      v24 = v22 | ~*v23;
      if ( v24 == -1 )
      {
        do
        {
          if ( (unsigned int)++v23 > v39 + 4 * (v21 >> 5) )
            goto LABEL_16;
          v24 = ~*v23;
        }
        while ( !*v23 );
      }
      _BitScanForward((unsigned int *)&v24, ~v24);
      v25 = v24 + 32 * ((int)((int)v23 - v39) >> 2);
      if ( v25 <= v21 && v25 != -1 )
        break;
LABEL_16:
      v19 = v38;
LABEL_17:
      if ( !v43 )
        return 0;
      v26 = v18 + 1;
      if ( v18 + 1 > v19 )
        v26 = v19;
      v21 = v26 - 1;
      v20 = 0;
    }
    if ( v25 < v18 )
      return 0;
    v27 = v46;
    v28 = v25 >> 1;
    v29 = HIWORD(v46) + v28 * (unsigned __int16)v46;
    v30 = *(_BYTE *)(a2 + 28);
    v40 = v29 + a2;
    v45 = v29 >> v30;
    v41 = ((v29 + (unsigned __int16)v46 - 1) >> v30) + 1;
    v44 = a2 + *(unsigned __int16 *)(a2 + 30);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a2 + 12));
    v31 = v45;
    if ( v45 < v41 )
    {
      while ( 1 )
      {
        v27 = v46;
        if ( *(__int16 *)(v44 + 2 * v31) < 0 )
          break;
        v45 = ++v31;
        if ( v31 >= v41 )
          goto LABEL_29;
      }
      v45 = -1;
    }
LABEL_29:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a2 + 12));
    if ( v45 == -1 )
    {
      v18 += 2;
      continue;
    }
    break;
  }
  v32 = RtlpHpLfhSubsegmentSizeBlockInternal(a2, v40, v28, a7);
  *a5 = v32;
  v33 = 0;
  if ( *a7 )
  {
    v34 = v32 + v17;
    if ( (a4 & 0x10000000) != 0 )
      v34 += 8;
    v33 = ((v34 + 7) & 0xFFFFFFF8) + 8 > v17 + (unsigned int)v27;
  }
  v35 = v27;
  if ( v32 > v27 || v33 )
  {
    *a7 = 0;
    *a6 = 0;
    v36 = a5;
  }
  else
  {
    v36 = a6;
    v35 = v27 - v32;
  }
  *v36 = v35;
  return v17;
}
