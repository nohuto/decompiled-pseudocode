/*
 * XREFs of ExpSetTimeZoneInformation @ 0x14094B54C
 * Callers:
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExpReadSiloTimeZoneMarker @ 0x1405D1A14 (ExpReadSiloTimeZoneMarker.c)
 *     ExpWriteSiloTimeZoneMarker @ 0x1405D1C84 (ExpWriteSiloTimeZoneMarker.c)
 *     ExAcquireTimeRefreshLock @ 0x1406B2FF4 (ExAcquireTimeRefreshLock.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x14091526C (RtlpSetTimeZoneInformationWorker.c)
 *     NtSetSystemTime @ 0x14094BEE0 (NtSetSystemTime.c)
 */

NTSTATUS __fastcall ExpSetTimeZoneInformation(unsigned __int64 a1, int a2)
{
  bool SiloTimeZoneMarker; // r14
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  _OWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _OWORD *v11; // rcx
  wchar_t *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  NTSTATUS result; // eax
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _OWORD ValueData[27]; // [rsp+20h] [rbp-378h] BYREF
  wchar_t v20[216]; // [rsp+1D0h] [rbp-1C8h] BYREF

  memset(ValueData, 0, sizeof(ValueData));
  SiloTimeZoneMarker = 0;
  if ( a2 == 172 )
  {
    v5 = 3LL;
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 + 172 > 0x7FFFFFFF0000LL || a1 + 172 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    ValueData[0] = *(_OWORD *)a1;
    ValueData[1] = *(_OWORD *)(a1 + 16);
    ValueData[2] = *(_OWORD *)(a1 + 32);
    ValueData[3] = *(_OWORD *)(a1 + 48);
    ValueData[4] = *(_OWORD *)(a1 + 64);
    ValueData[5] = *(_OWORD *)(a1 + 80);
    ValueData[6] = *(_OWORD *)(a1 + 96);
    ValueData[7] = *(_OWORD *)(a1 + 112);
    v6 = a1 + 128;
    ValueData[8] = *(_OWORD *)v6;
    ValueData[9] = *(_OWORD *)(v6 + 16);
    *(_QWORD *)&ValueData[10] = *(_QWORD *)(v6 + 32);
    DWORD2(ValueData[10]) = *(_DWORD *)(v6 + 40);
    memset((char *)&ValueData[10] + 12, 0, 0x100uLL);
    BYTE12(ValueData[26]) = 1;
  }
  else
  {
    if ( a2 != 432 )
      return -1073741820;
    v5 = 3LL;
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 + 432 > 0x7FFFFFFF0000LL || a1 + 432 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    v7 = ValueData;
    v8 = 3LL;
    do
    {
      *v7 = *(_OWORD *)a1;
      v7[1] = *(_OWORD *)(a1 + 16);
      v7[2] = *(_OWORD *)(a1 + 32);
      v7[3] = *(_OWORD *)(a1 + 48);
      v7[4] = *(_OWORD *)(a1 + 64);
      v7[5] = *(_OWORD *)(a1 + 80);
      v7[6] = *(_OWORD *)(a1 + 96);
      v7 += 8;
      *(v7 - 1) = *(_OWORD *)(a1 + 112);
      a1 += 128LL;
      --v8;
    }
    while ( v8 );
    *v7 = *(_OWORD *)a1;
    v7[1] = *(_OWORD *)(a1 + 16);
    v7[2] = *(_OWORD *)(a1 + 32);
  }
  ExAcquireTimeRefreshLock(1u);
  v11 = (_OWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals(v10, v9) + 133);
  v12 = v20;
  do
  {
    *(_OWORD *)v12 = *v11;
    *((_OWORD *)v12 + 1) = v11[1];
    *((_OWORD *)v12 + 2) = v11[2];
    *((_OWORD *)v12 + 3) = v11[3];
    *((_OWORD *)v12 + 4) = v11[4];
    *((_OWORD *)v12 + 5) = v11[5];
    *((_OWORD *)v12 + 6) = v11[6];
    v12 += 64;
    *((_OWORD *)v12 - 1) = v11[7];
    v11 += 8;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)v12 = *v11;
  *((_OWORD *)v12 + 1) = v11[1];
  *((_OWORD *)v12 + 2) = v11[2];
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  if ( !PsIsCurrentThreadInServerSilo(v14, v13)
    || (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker())
    || (result = ExpWriteSiloTimeZoneMarker(1u), result >= 0) )
  {
    v16 = RtlpSetTimeZoneInformationWorker((wchar_t *)ValueData, 0x1B0u);
    if ( v16 >= 0 )
      v16 = NtSetSystemTime(0LL, 0LL);
    if ( v16 < 0 )
    {
      RtlpSetTimeZoneInformationWorker(v20, 0x1B0u);
      if ( PsIsCurrentThreadInServerSilo(v18, v17) && !SiloTimeZoneMarker )
        ExpWriteSiloTimeZoneMarker(0);
    }
    return v16;
  }
  return result;
}
