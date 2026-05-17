/*
 * XREFs of _RtlpLocalInfoAllocFromCache@8 @ 0x4B37109C
 * Callers:
 *     _RtlpLowFragHeapFlushCaches@4 @ 0x4B37172A (_RtlpLowFragHeapFlushCaches@4.c)
 * Callees:
 *     @RtlpAffinitizeSegmentInfoForBucket@8 @ 0x4B2AE1C2 (@RtlpAffinitizeSegmentInfoForBucket@8.c)
 *     @RtlpInterlockedPushEntrySList@8 @ 0x4B2C2090 (@RtlpInterlockedPushEntrySList@8.c)
 *     _RtlpIsSubSegmentReuseable@8 @ 0x4B2C3AA6 (_RtlpIsSubSegmentReuseable@8.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     @RtlpInterlockedPopEntrySList@4 @ 0x4B2DFE20 (@RtlpInterlockedPopEntrySList@4.c)
 *     _RtlpIsSubSegmentReuseThresholdExceeded@8 @ 0x4B2EBEDC (_RtlpIsSubSegmentReuseThresholdExceeded@8.c)
 *     _RtlpSetSegmentInfo@8 @ 0x4B2F2640 (_RtlpSetSegmentInfo@8.c)
 *     _RtlpLfhFindClearBitAndSet@16 @ 0x4B307931 (_RtlpLfhFindClearBitAndSet@16.c)
 *     _RtlpLfhIncrementDataSlot@0 @ 0x4B3079D9 (_RtlpLfhIncrementDataSlot@0.c)
 *     @InterlockedPushListSList@16 @ 0x4B33E8A0 (@InterlockedPushListSList@16.c)
 *     _RtlpLogHeapAffinityManagerEnable@8 @ 0x4B36ECC8 (_RtlpLogHeapAffinityManagerEnable@8.c)
 *     _RtlpLogHeapSubSegmentActivate@8 @ 0x4B36F259 (_RtlpLogHeapSubSegmentActivate@8.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

int __fastcall RtlpLocalInfoAllocFromCache(unsigned int a1, char a2)
{
  unsigned __int16 *v2; // ebx
  int *v3; // eax
  int v4; // edx
  int v5; // esi
  int v6; // edi
  char *v7; // eax
  int v8; // edi
  signed __int32 v9; // esi
  unsigned int v10; // edi
  unsigned __int16 v11; // ax
  int ClearBitAndSet; // eax
  unsigned int v13; // ecx
  int v14; // edx
  int *v15; // eax
  unsigned int **v16; // edi
  volatile signed __int32 *v17; // ebx
  int *v18; // ecx
  int v19; // edx
  bool IsSubSegmentReuseThresholdExceeded; // al
  bool v21; // zf
  unsigned int v22; // eax
  int *v23; // eax
  unsigned __int32 v24; // esi
  volatile signed __int32 *v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  int v28; // esi
  unsigned int v29; // eax
  int *v30; // eax
  int *v31; // ebx
  volatile signed __int32 *v32; // edx
  int *v33; // ebx
  volatile signed __int32 *v34; // esi
  signed __int32 v35; // edx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  signed __int32 v38; // edx
  unsigned int *v39; // ecx
  int v40; // esi
  signed __int32 v41; // edx
  _DWORD *v42; // edx
  int v43; // eax
  volatile signed __int32 *v44; // esi
  signed __int32 v45; // edx
  unsigned int *v46; // ecx
  int v47; // esi
  unsigned int v50; // [esp+10h] [ebp-20h]
  unsigned int *v51; // [esp+10h] [ebp-20h]
  int v52; // [esp+14h] [ebp-1Ch]
  unsigned int **v53; // [esp+14h] [ebp-1Ch]
  unsigned int v54; // [esp+18h] [ebp-18h]
  int v55; // [esp+18h] [ebp-18h]
  int *v56; // [esp+18h] [ebp-18h]
  volatile signed __int32 *v57; // [esp+18h] [ebp-18h]
  volatile signed __int32 *v58; // [esp+18h] [ebp-18h]
  int v59; // [esp+1Ch] [ebp-14h]
  unsigned int v60; // [esp+1Ch] [ebp-14h]
  unsigned int **v61; // [esp+1Ch] [ebp-14h]
  int *v62; // [esp+1Ch] [ebp-14h]
  unsigned int *v63; // [esp+1Ch] [ebp-14h]
  unsigned int *v64; // [esp+1Ch] [ebp-14h]
  signed __int32 *v65; // [esp+20h] [ebp-10h]
  int v66; // [esp+20h] [ebp-10h]
  int *v67; // [esp+20h] [ebp-10h]
  unsigned int v68; // [esp+20h] [ebp-10h]
  int v69; // [esp+24h] [ebp-Ch]
  unsigned __int16 *i; // [esp+24h] [ebp-Ch]
  int v71; // [esp+24h] [ebp-Ch]
  int v72; // [esp+28h] [ebp-8h]
  int *v73; // [esp+28h] [ebp-8h]
  unsigned int v74; // [esp+28h] [ebp-8h]

  v2 = (unsigned __int16 *)a1;
LABEL_2:
  v3 = (int *)(v2 + 2);
LABEL_3:
  while ( 2 )
  {
    v4 = *v3;
    v72 = *v3;
    if ( *v3 )
    {
      v59 = 0;
      v65 = (signed __int32 *)(v4 + 16);
      v5 = *(_DWORD *)(*(_DWORD *)v2 + 12);
      v52 = v5;
      if ( (HIWORD(*(_DWORD *)(v4 + 16)) & 0x8000u) != 0 )
      {
        v6 = v2[46];
        v59 = 1;
        if ( (*(_BYTE *)(v5 + 4 * v6 + 447) & 1) == 0 )
        {
          if ( RtlpAffinitizeSegmentInfoForBucket(v5, *(unsigned __int8 *)(v5 + 4 * v6 + 446)) >= 0 )
          {
            *(_BYTE *)(v5 + 4 * v6 + 447) |= 1u;
            v7 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 550 : (char *)2147353472;
            if ( *v7 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapAffinityManagerEnable(*(_DWORD *)(v5 + 12), *(unsigned __int8 *)(v5 + 4 * v6 + 446));
          }
          v4 = v72;
        }
      }
      v8 = 0;
      v54 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      while ( 1 )
      {
        v9 = *(_DWORD *)(v4 + 16);
        if ( (v9 & 0x80000000) == 0 )
        {
          if ( !(_WORD)v9 )
            goto LABEL_27;
          v2 = (unsigned __int16 *)a1;
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 16), v9 | 0x80000000, v9) == v9 )
            break;
        }
        if ( ++v8 > v54 )
        {
          v9 = -1;
          break;
        }
      }
      if ( v9 == -1 )
        goto LABEL_27;
      v69 = *(_DWORD *)(v4 + 4);
      if ( !v69 || *(unsigned __int16 **)v4 != v2 || !(_WORD)v9 )
      {
        *v65 = v9;
LABEL_27:
        v14 = 0;
        goto LABEL_28;
      }
      v10 = (unsigned __int8)RtlpSearchWidth[v2[46]];
      v11 = RtlpLfhIncrementDataSlot();
      ClearBitAndSet = RtlpLfhFindClearBitAndSet(
                         (unsigned int *)(v69 + 20),
                         v9 >> 16,
                         *((unsigned __int8 *)RtlpLowFragHeapRandomData + v11),
                         v10);
      *v65 = (ClearBitAndSet << 16) | ((unsigned __int16)v9 - 1);
      v13 = v52 ^ v69 ^ RtlpLFHKey ^ *(_DWORD *)(v69 + 16);
      v14 = v69 + ClearBitAndSet * HIWORD(v13) + (unsigned __int16)v13;
      if ( (*(_BYTE *)(v14 + 7) & 0x3F) != 0 )
      {
        RtlpLogHeapFailure(v14, 0, 0, 0);
        v14 = 0;
      }
LABEL_28:
      if ( v59 && dword_4B3A4364 + 1 < (unsigned int)RtlpAffinityState )
        _InterlockedCompareExchange(&dword_4B3A4364, 2 * (dword_4B3A4364 + 1) - 1, dword_4B3A4364);
      if ( v14 )
        return v14;
    }
    v55 = *(_DWORD *)v2;
    v15 = (int *)(v2 + 4);
    for ( i = v2 + 4; ; v15 = (int *)i )
    {
      v16 = 0;
      while ( 1 )
      {
        v17 = 0;
        v66 = 16;
        v60 = 0;
        v18 = v15;
        v73 = v15;
        do
        {
          v19 = *v18;
          v53 = (unsigned int **)*v18;
          if ( *v18 )
          {
            v50 = *(unsigned __int16 *)(v19 + 16);
            if ( v50 > v60 )
            {
              IsSubSegmentReuseThresholdExceeded = RtlpIsSubSegmentReuseThresholdExceeded(a1, v19);
              v18 = v73;
              if ( !IsSubSegmentReuseThresholdExceeded )
              {
                v17 = v73;
                v16 = v53;
                v60 = v50;
              }
            }
          }
          ++v18;
          v21 = v66-- == 1;
          v73 = v18;
        }
        while ( !v21 );
        v61 = v16;
        if ( !v17 )
        {
          v16 = 0;
          goto LABEL_54;
        }
        v22 = *(_DWORD *)(*(_DWORD *)(v55 + 12) + 4 * *(unsigned __int16 *)(a1 + 92) + 960) + 72;
        v74 = v22;
        while ( 1 )
        {
          v23 = RtlpInterlockedPopEntrySList(v22);
          v24 = (unsigned __int32)v23;
          v67 = v23;
          if ( !v23 )
            break;
          v24 = (unsigned __int32)(v23 - 8);
          v25 = v23 - 1;
          if ( (*v25 & 1) != 0 )
          {
            if ( !RtlpSetSegmentInfo(v24, a1) )
            {
              RtlpInterlockedPushEntrySList(v74, v67);
              v24 = 0;
            }
            break;
          }
          v16 = v61;
          v22 = v74;
          if ( _InterlockedAnd(v25, 0xFFFFFFFD) == 2 )
          {
            v26 = **(_DWORD **)v24;
            *(_DWORD *)v24 = 0;
            RtlpInterlockedPushEntrySList(v26, v67);
            v22 = v74;
          }
        }
        if ( (unsigned int **)_InterlockedCompareExchange(v17, v24, (signed __int32)v16) == v16 )
          break;
        v15 = (int *)i;
        if ( v24 )
        {
          RtlpInterlockedPushEntrySList(v74, (_DWORD *)(v24 + 32));
          v15 = (int *)i;
        }
      }
      if ( !v24 )
        *(_WORD *)(a1 + 94) = (unsigned __int8)((int)((int)v17 - a1 - 8) >> 2);
LABEL_54:
      if ( !v16 )
        break;
      if ( _InterlockedAnd((volatile signed __int32 *)v16 + 7, 0xFFFFFFFD) != 2 )
        goto LABEL_65;
      v27 = **v16;
      *v16 = 0;
      RtlpInterlockedPushEntrySList(v27, v16 + 8);
    }
    v28 = 0;
    v29 = *(_DWORD *)(*(_DWORD *)(v55 + 12) + 4 * *(unsigned __int16 *)(a1 + 92) + 960) + 72;
    v71 = 0;
    v62 = 0;
    v68 = v29;
    while ( 1 )
    {
      v30 = RtlpInterlockedPopEntrySList(v29);
      v31 = v30;
      v56 = v30;
      if ( !v30 )
        break;
      v16 = (unsigned int **)(v30 - 8);
      v32 = v30 - 1;
      if ( (*v32 & 1) == 0 )
      {
        v33 = v30;
        if ( _InterlockedAnd(v32, 0xFFFFFFFD) != 2 )
          goto LABEL_78;
LABEL_77:
        v37 = **v16;
        *v16 = 0;
        RtlpInterlockedPushEntrySList(v37, v33);
        goto LABEL_78;
      }
      if ( RtlpSetSegmentInfo((unsigned int)(v30 - 8), a1) )
      {
        v33 = v56;
        if ( _InterlockedAnd((volatile signed __int32 *)v16 + 7, 0xFFFFFFFD) == 2 )
          goto LABEL_77;
        if ( RtlpIsSubSegmentReuseable(a1, (int)v16) )
          break;
      }
      else
      {
        if ( !v71 )
          v62 = v31;
        *v31 = v28;
        v28 = (int)v31;
        ++v71;
      }
LABEL_78:
      v29 = v68;
      v16 = 0;
    }
    if ( v71 )
      InterlockedPushListSList(v68, v28, v62, v71);
LABEL_65:
    if ( v16 )
    {
      v34 = (volatile signed __int32 *)(v16 + 7);
      *((_BYTE *)v16 + 27) = a2;
      do
      {
        v2 = (unsigned __int16 *)a1;
        v35 = *v34;
        v3 = (int *)(a1 + 4);
        if ( *v34 )
        {
          v3 = (int *)(a1 + 4);
          if ( (v35 & 6) == 0 )
            continue;
        }
        goto LABEL_3;
      }
      while ( _InterlockedCompareExchange(v34, v35 | 6, v35) != v35 );
      v51 = *v16;
      if ( *v16 != (unsigned int *)a1 )
      {
        if ( _InterlockedAnd(v34, 0xFFFFFFF9) == 6 )
          goto LABEL_72;
        v21 = RtlpIsSubSegmentReuseable((int)v51, (int)v16) == 0;
        v3 = (int *)(a1 + 4);
        if ( !v21 )
        {
          do
          {
            v38 = *v34;
            v3 = (int *)(a1 + 4);
            if ( *v34 )
            {
              v3 = (int *)(a1 + 4);
              if ( (v38 & 2) == 0 )
                continue;
            }
            goto LABEL_3;
          }
          while ( _InterlockedCompareExchange(v34, v38 | 2, v38) != v38 );
          v39 = *v16;
          v40 = 0;
          v63 = *v16;
LABEL_84:
          v41 = v39[(((_BYTE)v40 + (unsigned __int8)*((_WORD *)v39 + 47)) & 0xF) + 2];
          v57 = (volatile signed __int32 *)&v39[(((_BYTE)v40 + (unsigned __int8)*((_WORD *)v39 + 47)) & 0xF) + 2];
          if ( !v41 )
          {
            v3 = (int *)(v2 + 2);
            if ( !_InterlockedCompareExchange(v57, (signed __int32)v16, 0) )
              continue;
            goto LABEL_89;
          }
          if ( (*(_DWORD *)(v41 + 28) & 1) == 0 )
          {
            v2 = (unsigned __int16 *)a1;
            if ( _InterlockedCompareExchange(v57, (signed __int32)v16, v41) == v41 )
              goto LABEL_92;
LABEL_89:
            v39 = v63;
          }
          if ( (unsigned int)++v40 >= 0x10 )
            goto LABEL_114;
          goto LABEL_84;
        }
        continue;
      }
      if ( RtlGetCurrentServiceSessionId() )
        v43 = (int)NtCurrentPeb()->SharedData + 550;
      else
        v43 = 2147353472;
      if ( *(_BYTE *)v43 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentActivate(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 12) + 12), (int)v16[1]);
      v3 = (int *)(a1 + 4);
      v16 = (unsigned int **)_InterlockedExchange((volatile __int32 *)(a1 + 4), (__int32)v16);
      if ( v16 )
      {
        v44 = (volatile signed __int32 *)(v16 + 7);
        if ( _InterlockedAnd((volatile signed __int32 *)v16 + 7, 0xFFFFFFF9) == 6 )
        {
LABEL_72:
          v36 = **v16;
          *v16 = 0;
LABEL_115:
          v42 = v16 + 8;
LABEL_116:
          RtlpInterlockedPushEntrySList(v36, v42);
          goto LABEL_2;
        }
        v21 = RtlpIsSubSegmentReuseable(a1, (int)v16) == 0;
        v3 = (int *)(a1 + 4);
        if ( !v21 )
        {
          do
          {
            v45 = *v44;
            v3 = (int *)(a1 + 4);
            if ( *v44 )
            {
              v3 = (int *)(a1 + 4);
              if ( (v45 & 2) == 0 )
                continue;
            }
            goto LABEL_3;
          }
          while ( _InterlockedCompareExchange(v44, v45 | 2, v45) != v45 );
          v46 = *v16;
          v47 = 0;
          v64 = *v16;
LABEL_107:
          v41 = v46[(((_BYTE)v47 + (unsigned __int8)*((_WORD *)v46 + 47)) & 0xF) + 2];
          v58 = (volatile signed __int32 *)&v46[(((_BYTE)v47 + (unsigned __int8)*((_WORD *)v46 + 47)) & 0xF) + 2];
          if ( !v41 )
          {
            v3 = (int *)(v2 + 2);
            if ( !_InterlockedCompareExchange(v58, (signed __int32)v16, 0) )
              continue;
            goto LABEL_112;
          }
          if ( (*(_DWORD *)(v41 + 28) & 1) == 0 )
          {
            v2 = (unsigned __int16 *)a1;
            if ( _InterlockedCompareExchange(v58, (signed __int32)v16, v41) == v41 )
            {
LABEL_92:
              v3 = (int *)(v2 + 2);
              if ( _InterlockedAnd((volatile signed __int32 *)(v41 + 28), 0xFFFFFFFD) != 2 )
                continue;
              v36 = **(_DWORD **)v41;
              *(_DWORD *)v41 = 0;
              v42 = (_DWORD *)(v41 + 32);
              goto LABEL_116;
            }
LABEL_112:
            v46 = v64;
          }
          if ( (unsigned int)++v47 >= 0x10 )
          {
LABEL_114:
            v36 = *(_DWORD *)(*(_DWORD *)(**v16 + 12) + 4 * *((unsigned __int16 *)*v16 + 46) + 960) + 72;
            goto LABEL_115;
          }
          goto LABEL_107;
        }
      }
      continue;
    }
    return 0;
  }
}
