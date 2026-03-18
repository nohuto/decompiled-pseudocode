/*
 * XREFs of rimHandleAnyPnpRemovePendingDevices @ 0x1C00576E0
 * Callers:
 *     RIMReadInput @ 0x1C00ABA70 (RIMReadInput.c)
 * Callees:
 *     rimDoRimDevChange @ 0x1C0015FD8 (rimDoRimDevChange.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 *     RIMFreeDev @ 0x1C01530C0 (RIMFreeDev.c)
 */

void __fastcall rimHandleAnyPnpRemovePendingDevices(__int64 a1)
{
  __int64 v2; // rsi
  BOOL v3; // ebp
  int v4; // r14d
  int v5; // edx
  __int64 i; // rbx
  __int64 v7; // r9
  int v8; // eax
  int v9; // ecx

  v2 = a1 + 568;
  v3 = 0;
  while ( 2 )
  {
    v4 = 0;
    RIMLockExclusive(v2);
    for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
    {
      v8 = *(_DWORD *)(i + 184);
      if ( (v8 & 0x40) == 0 )
      {
        if ( v8 < 0 )
        {
          *(_DWORD *)(i + 184) = v8 & 0x7FFFFFFF;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v5) = 4;
            WPP_RECORDER_SF_q((_DWORD)gRimLog, v5, 1, 35, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids, i);
          }
        }
        v9 = *(_DWORD *)(i + 200);
        if ( (v9 & 1) != 0 || (*(_DWORD *)(i + 200) & 2) != 0 )
        {
          v5 = *(_DWORD *)(i + 188);
          if ( (v5 & 1) == 0 && (v5 & 2) == 0 && !*(_QWORD *)(i + 192) )
          {
            v4 = 1;
            v3 = (*(_DWORD *)(i + 200) & 2) != 0;
            *(_DWORD *)(i + 200) = v9 & 0xFFFFFFFC;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v5) = 4;
              WPP_RECORDER_SF_q(
                (_DWORD)gRimLog,
                v5,
                1,
                36,
                (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                i);
            }
            break;
          }
        }
      }
    }
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    if ( v4 )
    {
      if ( v3 )
      {
        RIMLockExclusive(v2);
        *(_DWORD *)(a1 + 884) |= 2u;
      }
      rimDoRimDevChange(a1, i, 3LL, v7);
      RIMFreeDev(a1, i);
      if ( v3 )
      {
        *(_DWORD *)(a1 + 884) &= ~2u;
        *(_QWORD *)(v2 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v2, 0LL);
        KeLeaveCriticalRegion();
      }
      continue;
    }
    break;
  }
}
