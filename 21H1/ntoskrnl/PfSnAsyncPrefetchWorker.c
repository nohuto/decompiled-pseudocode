/*
 * XREFs of PfSnAsyncPrefetchWorker @ 0x140651B10
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MmGetDefaultPagePriority @ 0x1402C2300 (MmGetDefaultPagePriority.c)
 *     MmGetAvailablePagesBelowPriority @ 0x14031EF58 (MmGetAvailablePagesBelowPriority.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PfpPrefetchSharedStart @ 0x1405D33F0 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedInitialize @ 0x1405D353C (PfpPrefetchSharedInitialize.c)
 *     PfSnCleanupPrefetchHeader @ 0x14063A4A8 (PfSnCleanupPrefetchHeader.c)
 *     PfSnLogAsyncWorker @ 0x140651DF4 (PfSnLogAsyncWorker.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140670968 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnAsyncPrefetchStep @ 0x1406C3480 (PfSnAsyncPrefetchStep.c)
 *     PfSnPreallocatePrefetchHeader @ 0x1406D487C (PfSnPreallocatePrefetchHeader.c)
 *     PfSnAsyncContextCleanup @ 0x1406E6BFC (PfSnAsyncContextCleanup.c)
 *     PfSnPowerBoost @ 0x1406E8F88 (PfSnPowerBoost.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void __fastcall PfSnAsyncPrefetchWorker(PVOID P)
{
  __int64 v1; // r14
  int v3; // r12d
  int v4; // r15d
  unsigned int v5; // ebx
  _DWORD *v6; // r9
  int DefaultPagePriority; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 AvailablePagesBelowPriority; // rax
  __int64 v12; // rax
  PVOID PoolWithTag; // rax
  int v14; // ebx
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  _DWORD *v19; // r9
  int v20[4]; // [rsp+28h] [rbp-99h] BYREF
  _QWORD v21[16]; // [rsp+38h] [rbp-89h] BYREF
  _OWORD v22[3]; // [rsp+B8h] [rbp-9h] BYREF

  v1 = *((_QWORD *)P + 26);
  v20[0] = 0;
  v3 = 0;
  memset(v22, 0, sizeof(v22));
  v4 = 0;
  memset(v21, 0, sizeof(v21));
  v5 = *((_DWORD *)P + 59);
  v21[4] = &v21[3];
  v21[0] = v1;
  v21[3] = &v21[3];
  v21[6] = &v21[5];
  v21[5] = &v21[5];
  PfSnLogAsyncWorker(v1, PfSnEvt_AsyncWorker_Start);
  if ( (*((_DWORD *)P + 60) & 1) != 0 )
  {
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5);
    v4 = 1;
  }
  KiStackAttachProcess(*((_KPROCESS **)P + 27), 0LL, (__int64)v22, v6);
  DefaultPagePriority = MmGetDefaultPagePriority();
  if ( v5 <= DefaultPagePriority - 1 )
  {
    LODWORD(v21[12]) = v5;
    HIDWORD(v21[12]) = v5;
  }
  else
  {
    LODWORD(v21[12]) = DefaultPagePriority - 1;
    HIDWORD(v21[12]) = DefaultPagePriority;
  }
  if ( (int)PfSnPreallocatePrefetchHeader(v21) >= 0 )
  {
    AvailablePagesBelowPriority = MmGetAvailablePagesBelowPriority(HIDWORD(v21[12]) + 1);
    v12 = AvailablePagesBelowPriority < 0xF00 ? 0LL : AvailablePagesBelowPriority - 3840;
    v21[13] = v12;
    if ( v12 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x43536650u);
      v21[1] = PoolWithTag;
      if ( PoolWithTag )
      {
        PfpPrefetchSharedInitialize((__int64)PoolWithTag);
        *(_QWORD *)(v21[1] + 32LL) = v21;
        *(_DWORD *)(v21[1] + 60LL) = 250;
        *(_DWORD *)(v21[1] + 56LL) = 15;
        if ( (int)PfpPrefetchSharedStart(v21[1]) >= 0 && (int)PfSnOpenVolumesForPrefetch(v21, v20) >= 0 )
        {
          v14 = v20[0];
          if ( *(_DWORD *)(v1 + 80) == 1 )
          {
            v14 = v20[0] | 1;
            v20[0] |= 1u;
          }
          if ( (dword_140C501F0 & 4) != 0 )
          {
            v15 = 0;
            v14 &= ~2u;
            v20[0] = v14;
          }
          else
          {
            if ( (v14 & 1) != 0 )
              v15 = *(_DWORD *)(v1 + 124);
            else
              v15 = 1;
            if ( 1 << v15 != 1 && (int)PfSnAsyncPrefetchStep(P, v21, (unsigned int)((1 << v15) - 1)) < 0 )
              goto LABEL_21;
            ExReleaseRundownProtection_0(*((PEX_RUNDOWN_REF *)P + 4));
            v3 = 1;
            PfSnLogAsyncWorker(v1, PfSnEvt_SyncPrefetchingDone_Info);
          }
          if ( v15 < *(_DWORD *)(v1 + 124) && (v14 & 2) == 0 )
          {
            _InterlockedExchange((volatile __int32 *)(*((_QWORD *)P + 27) + 2272LL), 5000);
            while ( v15 < *(_DWORD *)(v1 + 124) && (int)PfSnAsyncPrefetchStep(P, v21, (unsigned int)(1 << v15)) >= 0 )
              ++v15;
          }
        }
      }
    }
  }
LABEL_21:
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)P + 27) + 2272LL), 0);
  v16 = *((_QWORD *)P + 28);
  if ( v16 )
  {
    *(_QWORD *)(v16 + 472) = v21[14];
    v17 = *((_QWORD *)P + 28);
    v21[14] = 0LL;
    *(_DWORD *)(v17 + 480) = v21[15];
  }
  PfSnCleanupPrefetchHeader((__int64)v21, v8, v9, v10);
  _InterlockedDecrement(&dword_140C503F0);
  if ( v4 )
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5);
  KiUnstackDetachProcess((__int64)v22, 0LL, v18, v19);
  if ( !v3 )
  {
    ExReleaseRundownProtection_0(*((PEX_RUNDOWN_REF *)P + 4));
    PfSnLogAsyncWorker(v1, PfSnEvt_SyncPrefetchingDone_Info);
  }
  PfSnLogAsyncWorker(v1, PfSnEvt_AsyncWorker_Stop);
  PfSnAsyncContextCleanup(P);
  ExFreePoolWithTag(P, 0);
}
