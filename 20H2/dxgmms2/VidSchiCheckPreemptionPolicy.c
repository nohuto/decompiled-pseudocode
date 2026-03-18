/*
 * XREFs of VidSchiCheckPreemptionPolicy @ 0x1C000BEA0
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C000B160 (VidSchiSwitchContextWithCheck.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000A480 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateNodeRunningTime @ 0x1C0016614 (VidSchiUpdateNodeRunningTime.c)
 */

_BOOL8 __fastcall VidSchiCheckPreemptionPolicy(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  int v3; // eax
  int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  unsigned int MostSignificantBit; // ecx
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rcx
  int v20; // edx
  bool v21; // cc
  __int128 v22; // [rsp+40h] [rbp-58h] BYREF
  __int128 v23; // [rsp+50h] [rbp-48h]
  __int128 v24; // [rsp+60h] [rbp-38h] BYREF
  __int128 v25; // [rsp+70h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 96);
  v3 = *(_DWORD *)(a1 + 184);
  *a2 = -1LL;
  v6 = 0;
  v7 = *(_QWORD *)(v2 + 24);
  if ( (v3 & 2) != 0 )
  {
    if ( a1 == *(_QWORD *)(v2 + 8LL * *(unsigned int *)(v2 + 1552) + 1560) )
    {
      v6 = 15;
      goto LABEL_4;
    }
    v6 = -18;
  }
  if ( !*(_DWORD *)(v2 + 2884) )
  {
    v6 = 2;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v7 + 2448) & 1) == 0 )
  {
    v6 = 3;
    goto LABEL_4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 724));
  if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 2888)) != 1 )
  {
    v6 = 13;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v7 + 964) )
    v6 = -14;
  MostSignificantBit = RtlFindMostSignificantBit(*(unsigned int *)(v2 + 1764));
  v13 = *(unsigned int *)(a1 + 404);
  if ( MostSignificantBit <= (unsigned int)v13 )
  {
    if ( MostSignificantBit != (_DWORD)v13 )
    {
      if ( *(_BYTE *)(v2 + 2016) && gulPriorityToYieldPriorityBand[v13] != 3 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v2 + 2888));
        v6 = 11;
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 724));
        goto LABEL_4;
      }
      goto LABEL_20;
    }
    v14 = *(_QWORD *)(v2 + 8LL * *(unsigned int *)(v2 + 1552) + 1560);
    if ( v14 && *(_QWORD *)(*(_QWORD *)(v14 + 104) + 40LL) == *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) )
    {
      v15 = *(_DWORD *)(a1 + 408);
      if ( v15 > *(_DWORD *)(v14 + 408) )
      {
        v6 = -17;
        goto LABEL_4;
      }
      if ( v15 < *(_DWORD *)(v14 + 408) )
        goto LABEL_16;
    }
    v24 = 0LL;
    v25 = 0LL;
    v16 = (unsigned __int8)VidSchiUpdateNodeRunningTime(v2, &v24) == 0;
    v17 = *((_QWORD *)&v24 + 1);
    if ( !v16 )
    {
      v6 = 11;
      *a2 = *(_QWORD *)(*((_QWORD *)&v24 + 1) + 480LL);
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 2888));
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 724));
      goto LABEL_4;
    }
    if ( !*((_QWORD *)&v24 + 1) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 2888));
      v6 = 2;
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 724));
      goto LABEL_4;
    }
    v18 = DWORD1(v25);
    v19 = v25;
  }
  else
  {
    if ( !*(_BYTE *)(v2 + 2016) )
    {
LABEL_16:
      v6 = 10;
LABEL_17:
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 2888));
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 724));
      goto LABEL_4;
    }
    v22 = 0LL;
    v23 = 0LL;
    v16 = (unsigned __int8)VidSchiUpdateNodeRunningTime(v2, &v22) == 0;
    v17 = *((_QWORD *)&v22 + 1);
    if ( !v16 )
    {
      v6 = 11;
      *a2 = *(_QWORD *)(*((_QWORD *)&v22 + 1) + 480LL);
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 2888));
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 724));
      goto LABEL_4;
    }
    if ( !*((_QWORD *)&v22 + 1) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 2888));
      v6 = 2;
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 724));
      goto LABEL_4;
    }
    v18 = DWORD1(v23);
    v19 = v23;
  }
  v20 = *(_DWORD *)(v17 + 484);
  v21 = v20 <= v18;
  if ( v20 == v18 )
  {
    if ( *(_DWORD *)(v17 + 480) > (unsigned int)v19 )
    {
LABEL_36:
      v6 = 12;
      *a2 = *(_QWORD *)(v17 + 480) - v19;
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 2888));
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 724));
      goto LABEL_4;
    }
    v21 = v20 <= v18;
  }
  if ( !v21 )
    goto LABEL_36;
LABEL_20:
  if ( !v6 )
    v6 = 1;
LABEL_4:
  VidSchiProfilePerformanceTick(1LL, v7, v2, 0LL, a1, 0LL, 0LL, v6);
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent(v9, v8);
  v10[3] = v2;
  v10[4] = *(_QWORD *)(v2 + 96);
  v10[5] = *(_QWORD *)(v2 + 152);
  v10[6] = a1;
  v10[7] = v6;
  WdLogEvent5_WdEvent(v10);
  return v6 < 0 || v6 == 1;
}
