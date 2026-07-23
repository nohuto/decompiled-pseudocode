/*
 * XREFs of ExpSetTimeZoneInformation @ 0x140946B4C
 * Callers:
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExAcquireTimeRefreshLock @ 0x1405D0D58 (ExAcquireTimeRefreshLock.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140910A9C (RtlpSetTimeZoneInformationWorker.c)
 *     NtSetSystemTime @ 0x140947400 (NtSetSystemTime.c)
 */

int __fastcall ExpSetTimeZoneInformation(unsigned __int64 a1, int a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  _OWORD *v6; // rax
  __int64 v7; // rcx
  wchar_t *v8; // rax
  int *v9; // rcx
  int result; // eax
  NTSTATUS v11; // ebx
  _OWORD ValueData[27]; // [rsp+20h] [rbp-378h] BYREF
  wchar_t v13[216]; // [rsp+1D0h] [rbp-1C8h] BYREF

  memset(ValueData, 0, sizeof(ValueData));
  if ( a2 == 172 )
  {
    v4 = 3LL;
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
    v5 = a1 + 128;
    ValueData[8] = *(_OWORD *)v5;
    ValueData[9] = *(_OWORD *)(v5 + 16);
    *(_QWORD *)&ValueData[10] = *(_QWORD *)(v5 + 32);
    DWORD2(ValueData[10]) = *(_DWORD *)(v5 + 40);
    memset((char *)&ValueData[10] + 12, 0, 0x100uLL);
    BYTE12(ValueData[26]) = 1;
  }
  else
  {
    if ( a2 != 432 )
      return -1073741820;
    v4 = 3LL;
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 + 432 > 0x7FFFFFFF0000LL || a1 + 432 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    v6 = ValueData;
    v7 = 3LL;
    do
    {
      *v6 = *(_OWORD *)a1;
      v6[1] = *(_OWORD *)(a1 + 16);
      v6[2] = *(_OWORD *)(a1 + 32);
      v6[3] = *(_OWORD *)(a1 + 48);
      v6[4] = *(_OWORD *)(a1 + 64);
      v6[5] = *(_OWORD *)(a1 + 80);
      v6[6] = *(_OWORD *)(a1 + 96);
      v6 += 8;
      *(v6 - 1) = *(_OWORD *)(a1 + 112);
      a1 += 128LL;
      --v7;
    }
    while ( v7 );
    *v6 = *(_OWORD *)a1;
    v6[1] = *(_OWORD *)(a1 + 16);
    v6[2] = *(_OWORD *)(a1 + 32);
  }
  ExAcquireTimeRefreshLock(1u);
  v8 = v13;
  v9 = &ExpTimeZoneInformation;
  do
  {
    *(_OWORD *)v8 = *(_OWORD *)v9;
    *((_OWORD *)v8 + 1) = *((_OWORD *)v9 + 1);
    *((_OWORD *)v8 + 2) = *((_OWORD *)v9 + 2);
    *((_OWORD *)v8 + 3) = *((_OWORD *)v9 + 3);
    *((_OWORD *)v8 + 4) = *((_OWORD *)v9 + 4);
    *((_OWORD *)v8 + 5) = *((_OWORD *)v9 + 5);
    *((_OWORD *)v8 + 6) = *((_OWORD *)v9 + 6);
    v8 += 64;
    *((_OWORD *)v8 - 1) = *((_OWORD *)v9 + 7);
    v9 += 32;
    --v4;
  }
  while ( v4 );
  *(_OWORD *)v8 = *(_OWORD *)v9;
  *((_OWORD *)v8 + 1) = *((_OWORD *)v9 + 1);
  *((_OWORD *)v8 + 2) = *((_OWORD *)v9 + 2);
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  result = RtlpSetTimeZoneInformationWorker((wchar_t *)ValueData, 0x1B0u);
  if ( result >= 0 )
  {
    v11 = NtSetSystemTime(0LL, 0LL);
    if ( v11 < 0 )
      RtlpSetTimeZoneInformationWorker(v13, 0x1B0u);
    return v11;
  }
  return result;
}
