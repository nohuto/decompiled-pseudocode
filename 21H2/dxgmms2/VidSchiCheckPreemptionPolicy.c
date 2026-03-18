/*
 * XREFs of VidSchiCheckPreemptionPolicy @ 0x1C0006F90
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C000AEB0 (VidSchiSwitchContextWithCheck.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000A180 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateNodeRunningTime @ 0x1C0018DB0 (VidSchiUpdateNodeRunningTime.c)
 */

_BOOL8 __fastcall VidSchiCheckPreemptionPolicy(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  int v3; // eax
  int v6; // esi
  __int64 v7; // r14
  unsigned int MostSignificantBit; // ecx
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // r8d
  __int64 v16; // rcx
  int v17; // edx
  bool v18; // cc
  bool v19; // zf
  __int64 v20; // [rsp+40h] [rbp-58h] BYREF
  __int128 v21; // [rsp+48h] [rbp-50h]
  __int64 v22; // [rsp+58h] [rbp-40h]
  __int128 v23; // [rsp+60h] [rbp-38h] BYREF
  __int128 v24; // [rsp+70h] [rbp-28h]
  char v25; // [rsp+A0h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  v3 = *(_DWORD *)(a1 + 184);
  *a2 = -1LL;
  v6 = 0;
  v7 = *(_QWORD *)(v2 + 24);
  if ( (v3 & 2) != 0 )
  {
    if ( a1 == *(_QWORD *)(v2 + 8LL * *(unsigned int *)(v2 + 1560) + 1568) )
    {
      v6 = 15;
      goto LABEL_4;
    }
    v6 = -18;
  }
  if ( !*(_DWORD *)(v2 + 2900) )
  {
    v6 = 2;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v7 + 2536) & 1) == 0 )
  {
    v6 = 3;
    goto LABEL_4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 732));
  if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 2904)) != 1 )
  {
    v6 = 13;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v7 + 980) )
    v6 = -14;
  MostSignificantBit = RtlFindMostSignificantBit(*(unsigned int *)(v2 + 1772));
  v10 = *(unsigned int *)(a1 + 404);
  if ( MostSignificantBit <= (unsigned int)v10 )
  {
    if ( MostSignificantBit != (_DWORD)v10 )
    {
      if ( *(_BYTE *)(v2 + 2024) && gulPriorityToYieldPriorityBand[v10] != 3 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v2 + 2904));
        v6 = 11;
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 732));
        goto LABEL_4;
      }
      goto LABEL_20;
    }
    v11 = *(_QWORD *)(v2 + 8LL * *(unsigned int *)(v2 + 1560) + 1568);
    if ( v11 && *(_QWORD *)(*(_QWORD *)(v11 + 104) + 40LL) == *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) )
    {
      v12 = *(_DWORD *)(a1 + 408);
      if ( v12 < *(_DWORD *)(v11 + 408) )
        goto LABEL_16;
      if ( v12 > *(_DWORD *)(v11 + 408) )
      {
        v6 = -17;
        goto LABEL_4;
      }
    }
    v13 = *(_QWORD *)(v2 + 24);
    v25 = 0;
    v22 = 0LL;
    v20 = v2;
    v21 = 0LL;
    DpSynchronizeExecution(
      *(_QWORD *)(v13 + 24),
      VidSchiUpdateNodeRunningTimeAtISR,
      &v20,
      *(unsigned int *)(v13 + 32),
      &v25);
    v14 = v21;
    if ( v25 )
    {
      v6 = 11;
      *a2 = *(_QWORD *)(v21 + 480);
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 2904));
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 732));
      goto LABEL_4;
    }
    if ( !(_QWORD)v21 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 2904));
      v6 = 2;
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 732));
      goto LABEL_4;
    }
    v15 = HIDWORD(v21);
    v16 = *((_QWORD *)&v21 + 1);
  }
  else
  {
    if ( !*(_BYTE *)(v2 + 2024) )
    {
LABEL_16:
      v6 = 10;
LABEL_17:
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 2904));
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 732));
      goto LABEL_4;
    }
    v23 = 0LL;
    v24 = 0LL;
    v19 = (unsigned __int8)VidSchiUpdateNodeRunningTime(v2, &v23) == 0;
    v14 = *((_QWORD *)&v23 + 1);
    if ( !v19 )
    {
      v6 = 11;
      *a2 = *(_QWORD *)(*((_QWORD *)&v23 + 1) + 480LL);
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 2904));
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 732));
      goto LABEL_4;
    }
    if ( !*((_QWORD *)&v23 + 1) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 2904));
      v6 = 2;
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 732));
      goto LABEL_4;
    }
    v15 = DWORD1(v24);
    v16 = v24;
  }
  v17 = *(_DWORD *)(v14 + 484);
  v18 = v17 <= v15;
  if ( v17 == v15 )
  {
    if ( *(_DWORD *)(v14 + 480) > (unsigned int)v16 )
    {
LABEL_34:
      v6 = 12;
      *a2 = *(_QWORD *)(v14 + 480) - v16;
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 2904));
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 732));
      goto LABEL_4;
    }
    v18 = v17 <= v15;
  }
  if ( !v18 )
    goto LABEL_34;
LABEL_20:
  if ( !v6 )
    v6 = 1;
LABEL_4:
  VidSchiProfilePerformanceTick(1, v7, v2, 0, a1, 0LL, 0LL, v6);
  WdLogSingleEntry5(4LL, v2, *(_QWORD *)(v2 + 96), *(_QWORD *)(v2 + 152), a1, v6);
  return v6 < 0 || v6 == 1;
}
