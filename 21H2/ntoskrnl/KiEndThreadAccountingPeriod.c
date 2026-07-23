/*
 * XREFs of KiEndThreadAccountingPeriod @ 0x1402D5BD0
 * Callers:
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KeQueryTotalCycleTimeThread @ 0x1402D3740 (KeQueryTotalCycleTimeThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402D4110 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiScanInterruptObjectList @ 0x1403FFB90 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1403FFD70 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403FFEC0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140400010 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404010E0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140401D20 (KxIsrLinkage.c)
 *     KiHvInterruptSubDispatch @ 0x140404E80 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140404FE0 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x140405140 (KiSwInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1404065A0 (KiIpiInterruptSubDispatch.c)
 *     KxDispatchInterrupt @ 0x1404067C0 (KxDispatchInterrupt.c)
 * Callees:
 *     KiEndCounterAccumulation @ 0x14051C190 (KiEndCounterAccumulation.c)
 */

void __fastcall KiEndThreadAccountingPeriod(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v3; // r9
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned int v10; // edx
  __int64 v11; // rsi
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  __int64 v19; // rcx
  _QWORD *i; // rcx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // [rsp+38h] [rbp+10h]

  v3 = *(_BYTE *)(a2 + 2);
  if ( (v3 & 0x10) != 0 )
  {
    *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a2 + 124) + 32464) += *(_QWORD *)(a1 + 32448) - *(_QWORD *)(a1 + 32456);
    v3 &= ~0x10u;
    *(_QWORD *)(a1 + 32456) = 0LL;
  }
  if ( (v3 & 0x20) != 0 )
  {
    v6 = *(_QWORD *)(a2 + 1528);
    if ( v6 )
    {
      v7 = *(_QWORD *)(a1 + 33128);
      v8 = *(_QWORD *)(a1 + 33136);
      if ( v7 && v8 )
      {
        if ( *(_BYTE *)(v8 + 100) )
        {
          v9 = *(_DWORD *)(v8 + 116);
        }
        else
        {
          v9 = *(_DWORD *)(v8 + 72);
          if ( v9 >= *(_DWORD *)(v7 + 368) )
            v9 = *(_DWORD *)(v7 + 368);
        }
      }
      else
      {
        v9 = 100;
      }
      if ( v9 < 0x4B )
        v10 = v9 / 0x19;
      else
        v10 = 3;
      v11 = *(unsigned __int8 *)(a1 + 33208);
      v12 = v10;
      v13 = v11 + 2LL * v10;
      v14 = *(_QWORD *)(v6 + 8 * v13);
      v15 = (_QWORD *)(v6 + 8 * v13);
      v16 = KiTimelineBitmapTime;
      *v15 = a3 + v14;
      v17 = *(_DWORD *)(v6 + 192);
      if ( v16 > v17 )
      {
        LODWORD(v23) = v16;
        if ( v16 - v17 >= 0x20 )
          v21 = 1;
        else
          v21 = (*(_DWORD *)(v6 + 196) << (v16 - v17)) | 1;
        HIDWORD(v23) = v21;
        *(_QWORD *)(v6 + 192) = v23;
      }
      else
      {
        v18 = v17 - v16;
        if ( v18 < 0x20 )
          *(_DWORD *)(v6 + 196) |= 1 << v18;
      }
      if ( !KiEfficiencyClassSystem && (unsigned __int8)*(_DWORD *)(a2 + 512) == 2 )
        *(_QWORD *)(v6 + 16 * v12 + 8) += a3;
      if ( *(_QWORD *)(a2 + 1472) )
      {
        *(_QWORD *)(v6 + 8 * (v11 + 16 + 2 * v12)) += a3;
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 1472) + 1528LL) + 8 * (v11 + 8 + 2 * v12)),
          a3);
      }
    }
    v3 &= ~0x20u;
  }
  if ( (v3 & 0x40) != 0 )
  {
    v22 = *(_QWORD *)(a2 + 968);
    if ( v22 )
      *(_BYTE *)(v22 + 64) = 0;
    v3 &= ~0x40u;
  }
  if ( (v3 & 0x3E) != 0 )
  {
    v19 = *(_QWORD *)(a2 + 104);
    if ( v19 )
    {
      for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v19); i; i = (_QWORD *)i[51] )
        *i += a3;
    }
    if ( (*(_BYTE *)(a2 + 2) & 8) != 0
      && (*(_QWORD *)(a2 + 576) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192)
                                                                                           + 136LL) )
    {
      *(_QWORD *)(a1 + 32488) += a3;
    }
    if ( *(_BYTE *)(a2 + 125) )
    {
      if ( (unsigned __int8)*(_DWORD *)(a2 + 512) == 2 )
        *(_QWORD *)(a1 + 32504) += a3;
      else
        *(_QWORD *)(a1 + 32496) += a3;
    }
    if ( *(_QWORD *)(a2 + 360) )
      KiEndCounterAccumulation(a2);
  }
}
