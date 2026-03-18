/*
 * XREFs of PspWow64ReadOrWriteThreadCpuArea @ 0x1406FD494
 * Callers:
 *     PspWow64SetContextThread @ 0x1406FC94C (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1406FCCF8 (PspWow64GetContextThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     PsGetThreadTeb @ 0x14033B780 (PsGetThreadTeb.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1406FD810 (RtlWow64GetCpuAreaInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspWow64ReadOrWriteThreadCpuArea(
        _KPROCESS *BugCheckParameter1,
        __int64 a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *a7,
        bool *a8)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v12; // r14
  __int64 ThreadTeb; // rbx
  _DWORD *v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  _DWORD *v17; // r9
  __int64 v18; // rcx
  _OWORD *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  _OWORD *v22; // rbx
  __int64 v23; // rax
  struct _KTHREAD *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _KTHREAD *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int CpuAreaInfo; // [rsp+24h] [rbp-C4h]
  __int64 v35; // [rsp+28h] [rbp-C0h]
  volatile void *Address[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v37; // [rsp+50h] [rbp-98h]
  __int128 v38; // [rsp+60h] [rbp-88h]
  __int64 v39; // [rsp+70h] [rbp-78h]
  _OWORD v40[3]; // [rsp+78h] [rbp-70h] BYREF

  memset(v40, 0, sizeof(v40));
  *(_OWORD *)Address = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = (signed __int64 *)(a2 + 1280);
  ExAcquirePushLockSharedEx(a2 + 1280, 0LL);
  ThreadTeb = PsGetThreadTeb(a2);
  v35 = ThreadTeb;
  if ( ThreadTeb )
  {
    KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v40, v14);
    v18 = *(_QWORD *)(ThreadTeb + 5256);
    v39 = v18;
    if ( v18 )
    {
      CpuAreaInfo = RtlWow64GetCpuAreaInfo(v18, v15, Address);
      if ( CpuAreaInfo >= 0 )
      {
        if ( a3 )
        {
          v19 = Address[0];
          if ( ((__int64)Address[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)Address[0] + 716 > 0x7FFFFFFF0000LL || (char *)Address[0] + 716 < Address[0] )
            MEMORY[0x7FFFFFFF0000] = 0;
          v16 = 5LL;
          do
          {
            *(_OWORD *)a4 = *v19;
            *(_OWORD *)(a4 + 16) = v19[1];
            *(_OWORD *)(a4 + 32) = v19[2];
            *(_OWORD *)(a4 + 48) = v19[3];
            *(_OWORD *)(a4 + 64) = v19[4];
            *(_OWORD *)(a4 + 80) = v19[5];
            *(_OWORD *)(a4 + 96) = v19[6];
            a4 += 128LL;
            *(_OWORD *)(a4 - 16) = v19[7];
            v19 += 8;
            --v16;
          }
          while ( v16 );
          *(_OWORD *)a4 = *v19;
          *(_OWORD *)(a4 + 16) = v19[1];
          *(_OWORD *)(a4 + 32) = v19[2];
          *(_OWORD *)(a4 + 48) = v19[3];
          *(_QWORD *)(a4 + 64) = *((_QWORD *)v19 + 8);
          *(_DWORD *)(a4 + 72) = *((_DWORD *)v19 + 18);
          if ( a7 )
          {
            v21 = *((_QWORD *)&v37 + 1);
            if ( *((_QWORD *)&v37 + 1) >= 0x7FFFFFFF0000uLL )
              v21 = 0x7FFFFFFF0000LL;
            *a7 = *(_DWORD *)v21;
          }
        }
        else
        {
          v22 = Address[0];
          ProbeForWrite(Address[0], 0x2CCuLL, 4u);
          v16 = 5LL;
          do
          {
            *v22 = *(_OWORD *)a4;
            v22[1] = *(_OWORD *)(a4 + 16);
            v22[2] = *(_OWORD *)(a4 + 32);
            v22[3] = *(_OWORD *)(a4 + 48);
            v22[4] = *(_OWORD *)(a4 + 64);
            v22[5] = *(_OWORD *)(a4 + 80);
            v22[6] = *(_OWORD *)(a4 + 96);
            v22 += 8;
            *(v22 - 1) = *(_OWORD *)(a4 + 112);
            a4 += 128LL;
            --v16;
          }
          while ( v16 );
          *v22 = *(_OWORD *)a4;
          v22[1] = *(_OWORD *)(a4 + 16);
          v22[2] = *(_OWORD *)(a4 + 32);
          v22[3] = *(_OWORD *)(a4 + 48);
          *((_QWORD *)v22 + 8) = *(_QWORD *)(a4 + 64);
          *((_DWORD *)v22 + 18) = *(_DWORD *)(a4 + 72);
          ThreadTeb = v35;
          if ( a7 )
          {
            v23 = *((_QWORD *)&v37 + 1);
            if ( *((_QWORD *)&v37 + 1) >= 0x7FFFFFFF0000uLL )
              v23 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v23 = *a7;
          }
        }
        if ( a8 )
        {
          v20 = *(_QWORD *)(ThreadTeb + 5328);
          if ( v20 )
          {
            if ( (v20 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v16 = v20 + 8;
            if ( (unsigned __int64)(v20 + 8) > 0x7FFFFFFF0000LL || v16 < v20 + 4 )
              MEMORY[0x7FFFFFFF0000] = 0;
            *a8 = (*(_DWORD *)(v20 + 4) & 2) != 0;
          }
          else
          {
            *a8 = 0;
          }
        }
      }
    }
    else
    {
      CpuAreaInfo = -1073741811;
    }
    KiUnstackDetachProcess((__int64)v40, 0LL, v16, v17);
    v24 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegionThread((__int64)v24, v25, v26, v27);
    return (unsigned int)CpuAreaInfo;
  }
  else
  {
    v29 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegionThread((__int64)v29, v30, v31, v32);
    return 3221225547LL;
  }
}
