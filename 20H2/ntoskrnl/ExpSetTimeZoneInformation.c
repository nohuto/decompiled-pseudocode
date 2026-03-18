/*
 * XREFs of ExpSetTimeZoneInformation @ 0x14094DBAC
 * Callers:
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExpReadSiloTimeZoneMarker @ 0x1405CF6D8 (ExpReadSiloTimeZoneMarker.c)
 *     ExpWriteSiloTimeZoneMarker @ 0x1405CF948 (ExpWriteSiloTimeZoneMarker.c)
 *     ExAcquireTimeRefreshLock @ 0x1406F5A38 (ExAcquireTimeRefreshLock.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x14091795C (RtlpSetTimeZoneInformationWorker.c)
 *     NtSetSystemTime @ 0x14094E540 (NtSetSystemTime.c)
 */

NTSTATUS __fastcall ExpSetTimeZoneInformation(unsigned __int64 a1, int a2)
{
  bool SiloTimeZoneMarker; // r14
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  _OWORD *v7; // rax
  __int64 v8; // rcx
  _OWORD *v9; // rcx
  wchar_t *v10; // rax
  NTSTATUS result; // eax
  int v12; // ebx
  _OWORD ValueData[27]; // [rsp+20h] [rbp-378h] BYREF
  wchar_t v14[216]; // [rsp+1D0h] [rbp-1C8h] BYREF

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
  v9 = (_OWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals() + 133);
  v10 = v14;
  do
  {
    *(_OWORD *)v10 = *v9;
    *((_OWORD *)v10 + 1) = v9[1];
    *((_OWORD *)v10 + 2) = v9[2];
    *((_OWORD *)v10 + 3) = v9[3];
    *((_OWORD *)v10 + 4) = v9[4];
    *((_OWORD *)v10 + 5) = v9[5];
    *((_OWORD *)v10 + 6) = v9[6];
    v10 += 64;
    *((_OWORD *)v10 - 1) = v9[7];
    v9 += 8;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)v10 = *v9;
  *((_OWORD *)v10 + 1) = v9[1];
  *((_OWORD *)v10 + 2) = v9[2];
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  if ( !PsIsCurrentThreadInServerSilo()
    || (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker())
    || (result = ExpWriteSiloTimeZoneMarker(1u), result >= 0) )
  {
    v12 = RtlpSetTimeZoneInformationWorker((wchar_t *)ValueData, 0x1B0u);
    if ( v12 >= 0 )
      v12 = NtSetSystemTime(0LL, 0LL);
    if ( v12 < 0 )
    {
      RtlpSetTimeZoneInformationWorker(v14, 0x1B0u);
      if ( PsIsCurrentThreadInServerSilo() && !SiloTimeZoneMarker )
        ExpWriteSiloTimeZoneMarker(0);
    }
    return v12;
  }
  return result;
}
