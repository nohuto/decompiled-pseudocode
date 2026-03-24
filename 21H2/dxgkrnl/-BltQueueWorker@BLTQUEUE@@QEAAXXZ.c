/*
 * XREFs of ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C011A6B4
 * Callers:
 *     ?BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z @ 0x1C016EFD0 (-BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C00DFEB4 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C00DFFB4 (-StartVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C015E550 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C015E708 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_N@Z @ 0x1C016DF18 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_N@Z.c)
 *     ?TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ @ 0x1C0265C0C (-TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C02FD46C (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C02FD560 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?LogRemoteVsyncTimeout@BLTQUEUE@@AEAAXXZ @ 0x1C02FD9C4 (-LogRemoteVsyncTimeout@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1C02FEF90 (-ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C02FF200 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C02FF244 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C02FFFE0 (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
 */

void __fastcall __noreturn BLTQUEUE::BltQueueWorker(BLTQUEUE *this)
{
  char v2; // r15
  struct _KEVENT *v3; // rax
  __int64 v4; // rsi
  __int64 v5; // r8
  _BYTE *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rax
  __int64 v10; // rcx
  LONGLONG v11; // r14
  LARGE_INTEGER v12; // rax
  __int64 v13; // r10
  __int64 v14; // r9
  unsigned __int64 i; // rdi
  __int64 v16; // r10
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rdx
  unsigned __int64 j; // rdi
  __int64 v25; // rax
  DXGAUTOPUSHLOCK *v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  LONGLONG v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  PVOID v34; // rdi
  __int64 v35; // rcx
  unsigned __int64 v36; // rsi
  __int64 v37; // rax
  unsigned __int64 v38; // rdi
  struct DXGADAPTER *v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  BLTQUEUE *v45; // rcx
  __int64 v46; // rax
  __int64 WaitMode; // [rsp+28h] [rbp-E0h]
  BOOLEAN Alertable[8]; // [rsp+30h] [rbp-D8h]
  __int128 v49; // [rsp+58h] [rbp-B0h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+70h] [rbp-98h] BYREF
  __int64 v52; // [rsp+78h] [rbp-90h] BYREF
  DXGPUSHLOCK *v53; // [rsp+80h] [rbp-88h]
  int v54; // [rsp+88h] [rbp-80h]
  char v55[8]; // [rsp+90h] [rbp-78h] BYREF
  DXGPUSHLOCK *v56; // [rsp+98h] [rbp-70h]
  int v57; // [rsp+A0h] [rbp-68h]
  char v58[8]; // [rsp+A8h] [rbp-60h] BYREF
  DXGPUSHLOCK *v59; // [rsp+B0h] [rbp-58h]
  int v60; // [rsp+B8h] [rbp-50h]
  char v61[8]; // [rsp+C0h] [rbp-48h] BYREF
  DXGPUSHLOCK *v62; // [rsp+C8h] [rbp-40h]
  int v63; // [rsp+D0h] [rbp-38h]
  struct _KEVENT v64; // [rsp+D8h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v66[144]; // [rsp+108h] [rbp+0h] BYREF
  PVOID Object[12]; // [rsp+198h] [rbp+90h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+1F8h] [rbp+F0h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeEvent(&v64, SynchronizationEvent, 0);
  *((_QWORD *)this + 76) = KeGetCurrentThread();
  KeSetEvent((PRKEVENT)((char *)this + 488), 0, 0);
  v49 = 0LL;
  v2 = 0;
  while ( 1 )
  {
    memset(Object, 0, sizeof(Object));
    if ( _InterlockedExchange((volatile __int32 *)this + 143, 0) )
      BLTQUEUE::DisableHwVSyncWorker(this);
    v3 = &v64;
    Object[0] = (char *)this + 512;
    if ( (v49 & 1) != 0 )
      v3 = (struct _KEVENT *)*((_QWORD *)&v49 + 1);
    Object[1] = v3;
    if ( (v49 & 3) != 0 )
      BLTQUEUE::StartVSync(this, 0);
    v4 = 2LL;
    if ( (*((_DWORD *)this + 234) & 2) != 0 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v52, (struct _KTHREAD **)this + 356, 0);
      DXGPUSHLOCK::AcquireShared(v53);
      v5 = 8LL;
      v6 = (_BYTE *)(*((_QWORD *)this + 362) + 56LL);
      v54 = 1;
      do
      {
        if ( *((_QWORD *)v6 - 1) && !*v6 && v6[1] == 1 )
        {
          Object[v4] = (PVOID)*((_QWORD *)v6 - 7);
          v4 = (unsigned int)(v4 + 1);
        }
        v6 += 64;
        --v5;
      }
      while ( v5 );
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v52);
      if ( (unsigned int)v4 > 2 )
      {
        v2 = 0;
      }
      else
      {
        v2 = 1;
        v9 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 16LL))(*((_QWORD *)this + 16));
        v10 = *((_QWORD *)this + 16);
        Object[v4] = v9;
        v4 = (unsigned int)(v4 + 1);
        Object[v4] = (PVOID)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
        LODWORD(v4) = v4 + 1;
      }
      if ( (unsigned int)v4 > 0xC )
      {
        v29 = WdLogNewEntry5_WdAssertion(v8, v7);
        *(_QWORD *)(v29 + 24) = 2069LL;
        WdLogEvent5_WdAssertion(v29);
      }
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v55, (struct _KTHREAD **)this + 50, 0);
      DXGPUSHLOCK::AcquireExclusive(v56);
      v57 = 2;
      DXGPUSHLOCK::AcquireShared(v53);
      v54 = 1;
      v11 = 0LL;
      PerformanceFrequency.QuadPart = 0LL;
      v12 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v13 = *((_QWORD *)this + 57);
      if ( v13 > 0 )
      {
        v14 = *((_QWORD *)this + 56);
        if ( v14 > 0 && v12.QuadPart > v14 )
          v11 = 10000000 * ((v12.QuadPart - v14) % v13 - v13) / PerformanceFrequency.QuadPart;
      }
      for ( i = 0LL; i < 0x200; i += 64LL )
      {
        v16 = *((_QWORD *)this + 362);
        if ( *(_QWORD *)(v16 + i + 48) && !*(_BYTE *)(v16 + i + 56) && *(_BYTE *)(v16 + i + 57) == 1 )
        {
          v30 = 0LL;
          if ( v11 + *(_QWORD *)(v16 + i + 32) <= 0 )
            v30 = v11 + *(_QWORD *)(v16 + i + 32);
          ExSetTimer(*(_QWORD *)(v16 + i), v30, 0LL, 0LL, WaitMode, *(_QWORD *)Alertable);
        }
      }
      (*(void (__fastcall **)(_QWORD, LONGLONG))(**((_QWORD **)this + 16) + 56LL))(*((_QWORD *)this + 16), v11);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v52);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v55);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v55);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v52);
    }
    v17 = KeWaitForMultipleObjects(v4, Object, WaitAny, Executive, 0, 1u, 0LL, &WaitBlockArray);
    v18 = v17;
    v19 = 0LL;
    v49 = 0LL;
    if ( v17 )
    {
      if ( v17 == 1 )
      {
        v20 = 1;
      }
      else if ( v2 )
      {
        if ( v17 == 2 )
        {
          v20 = 2;
        }
        else
        {
          if ( v17 != 3 )
            goto LABEL_65;
          v20 = 3;
        }
      }
      else
      {
        if ( (unsigned int)(v17 - 2) > 8 )
        {
LABEL_65:
          v20 = (v17 != 257) + 5;
          goto LABEL_29;
        }
        v20 = 4;
        v19 = v17;
      }
    }
    else
    {
      v20 = 0;
    }
LABEL_29:
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( !v22 )
        {
          if ( g_TdrForceDodVSyncTimeout && TdrIsDodVSyncTimeoutForcedFlip() )
          {
            BLTQUEUE::ProcessVSyncTdrWorker(this, 1u);
          }
          else
          {
            BLTQUEUE::ProcessBltQueue(this, 1LL, &v49);
            if ( !*((_DWORD *)this + 97) && (v49 & 3) == 0 && ++*((_DWORD *)this + 98) > 0xAu )
              BLTQUEUE::StopVSync(this, 0);
          }
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v61, (struct _KTHREAD **)this + 356, 0);
          DXGPUSHLOCK::AcquireShared(v62);
          v63 = 1;
          for ( j = 0LL; j < 0x200; j += 64LL )
          {
            v25 = *((_QWORD *)this + 362);
            if ( *(_QWORD *)(j + v25 + 48) )
            {
              if ( *(_BYTE *)(j + v25 + 56) == 1 )
              {
                *(_QWORD *)(j + v25 + 48) = 0LL;
                LOBYTE(v23) = 1;
                *(_BYTE *)(j + *((_QWORD *)this + 362) + 56) = 0;
                ExDeleteTimer(*(_QWORD *)(j + *((_QWORD *)this + 362)), v23, 0LL, 0LL);
              }
              else
              {
                *(_BYTE *)(j + v25 + 57) = 1;
              }
            }
          }
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v61);
          v26 = (DXGAUTOPUSHLOCK *)v61;
          goto LABEL_38;
        }
        v31 = (unsigned int)(v22 - 1);
        if ( (_DWORD)v31 )
        {
          v32 = (unsigned int)(v31 - 1);
          if ( (_DWORD)v32 )
          {
            v33 = WdLogNewEntry5_WdError(v32, v17);
            *(_QWORD *)(v33 + 24) = this;
            WdLogEvent5_WdError(v33);
          }
          else
          {
            v34 = Object[v19];
            DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v58, (struct _KTHREAD **)this + 356, 0);
            DXGPUSHLOCK::AcquireShared(v59);
            v35 = *((_QWORD *)this + 362);
            v36 = 0LL;
            v37 = v35;
            v60 = 1;
            while ( *(PVOID *)v37 != v34 || *(_BYTE *)(v37 + 57) != 1 )
            {
              ++v36;
              v37 += 64LL;
              if ( v36 >= 8 )
                goto LABEL_79;
            }
            v38 = v36 << 6;
            v39 = *(struct DXGADAPTER **)((v36 << 6) + v35 + 16);
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v66, v39, 0LL);
            if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v66, 0LL) >= 0 )
            {
              v41 = *((_QWORD *)this + 362);
              v51 = (unsigned int)(*((_DWORD *)this + 710) + 1);
              if ( (*(int (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v39 + 338) + 616LL) + 8LL)
                                                                                       + 656LL))(
                     1LL,
                     v38 + v41 + 8,
                     0LL,
                     &v51) < 0 )
              {
                v43 = WdLogNewEntry5_WdError(v42, v40);
                *(_QWORD *)(v43 + 24) = v36;
                WdLogEvent5_WdError(v43);
              }
              else
              {
                *(_QWORD *)(*((_QWORD *)this + 362) + v38 + 40) = v51;
              }
            }
            *(_BYTE *)(*((_QWORD *)this + 362) + v38 + 57) = 0;
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66, v40);
LABEL_79:
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v58);
            v26 = (DXGAUTOPUSHLOCK *)v58;
LABEL_38:
            DXGAUTOPUSHLOCK::Release(v26);
          }
        }
        else
        {
          v44 = *((_DWORD *)this + 34);
          if ( v44 == 1 )
          {
            BLTQUEUE::ProcessVSyncTdrWorker(this, 0);
          }
          else if ( v44 == 3 )
          {
            BLTQUEUE::StopVSync(this, 0);
            BLTQUEUE::RecreateVsyncSource(this, 1);
            BLTQUEUE::StartVSync(this, 0);
            BLTQUEUE::LogRemoteVsyncTimeout(v45);
          }
          else
          {
            v46 = WdLogNewEntry5_WdAssertion(v31, v18);
            *(_QWORD *)(v46 + 24) = *((int *)this + 34);
            WdLogEvent5_WdAssertion(v46);
          }
        }
      }
      else
      {
        v27 = 2LL;
LABEL_48:
        BLTQUEUE::ProcessBltQueue(this, v27, &v49);
      }
    }
    else
    {
      *((_BYTE *)this + 776) = *((_BYTE *)this + 560);
      *((_BYTE *)this + 777) = *((_BYTE *)this + 561);
      *((_BYTE *)this + 778) = *((_BYTE *)this + 562);
      *((_BYTE *)this + 779) = *((_BYTE *)this + 563);
      *((_BYTE *)this + 780) = *((_BYTE *)this + 564);
      *((_BYTE *)this + 781) = *((_BYTE *)this + 565);
      *((_BYTE *)this + 782) = *((_BYTE *)this + 566);
      *((_BYTE *)this + 783) = *((_BYTE *)this + 567);
      *((_BYTE *)this + 784) = *((_BYTE *)this + 568);
      *((_DWORD *)this + 197) = *((_DWORD *)this + 143);
      *((_QWORD *)this + 99) = *((_QWORD *)this + 72);
      *((_QWORD *)this + 99) = *((_QWORD *)this + 72);
      *((_DWORD *)this + 200) = *((_DWORD *)this + 146);
      *((_BYTE *)this + 792) = *((_BYTE *)this + 576);
      *((_DWORD *)this + 202) = *((_DWORD *)this + 148);
      *((LARGE_INTEGER *)this + 96) = KeQueryPerformanceCounter(0LL);
      if ( *((_BYTE *)this + 560) )
      {
        KeAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(*((_QWORD *)this + 72) + 40LL) + 56LL));
        *((_DWORD *)this + 234) |= 1u;
        *((_BYTE *)this + 560) = 0;
      }
      else
      {
        if ( *((_BYTE *)this + 561) )
        {
          BLTQUEUE::ResetWorker(this);
          goto LABEL_46;
        }
        if ( *((_BYTE *)this + 564) )
        {
          BLTQUEUE::ResetInternal(this);
          *((_BYTE *)this + 564) = 0;
          BLTQUEUE::FinishCommand(this, 0);
          PsTerminateSystemThread(0);
          goto LABEL_46;
        }
        if ( *((_BYTE *)this + 562) )
        {
          BLTQUEUE::UpdateDisplayModeInfoWorker(this);
          goto LABEL_46;
        }
        if ( *((_BYTE *)this + 563) )
        {
          v28 = *((_DWORD *)this + 97) + 1;
          *((_DWORD *)this + 98) = 0;
          *((_DWORD *)this + 97) = v28;
          BLTQUEUE::StartVSync(this, 0);
          *((_BYTE *)this + 563) = 0;
          goto LABEL_46;
        }
        if ( !*((_BYTE *)this + 568) )
          goto LABEL_46;
        BLTQUEUE::StopVSync(this, 0);
        BLTQUEUE::RecreateVsyncSource(this, 0);
        *((_BYTE *)this + 568) = 0;
      }
      BLTQUEUE::FinishCommand(this, 0);
LABEL_46:
      if ( !*((_BYTE *)this + 567) )
      {
        v27 = 0LL;
        goto LABEL_48;
      }
      BLTQUEUE::DiscardPendingPresent(this);
      *(_QWORD *)((char *)this + 476) = 0LL;
      *((_BYTE *)this + 567) = 0;
      BLTQUEUE::FinishCommand(this, 0);
    }
  }
}
