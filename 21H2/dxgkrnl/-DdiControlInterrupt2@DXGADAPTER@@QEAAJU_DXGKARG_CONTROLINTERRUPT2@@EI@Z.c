/*
 * XREFs of ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x1C000E730
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt2 @ 0x1C004BAC0 (DXGADAPTER_DdiControlInterrupt2.c)
 *     ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXI@Z @ 0x1C019E878 (-ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXI@Z.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z @ 0x1C019E994 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0tt_EtwWriteTransfer @ 0x1C002EBB8 (McTemplateK0tt_EtwWriteTransfer.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z @ 0x1C00492AC (-VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x1C00494B8 (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C01961F0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt2(
        DXGADAPTER *this,
        struct _DXGKARG_CONTROLINTERRUPT2 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // r15d
  unsigned int v7; // r12d
  char v8; // r13
  DXGK_INTERRUPT_TYPE InterruptType; // r14d
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 HighPart; // rsi
  unsigned int v13; // eax
  int v14; // r15d
  LARGE_INTEGER *v15; // r14
  LARGE_INTEGER v16; // rax
  LARGE_INTEGER v17; // r8
  LARGE_INTEGER v18; // r9
  unsigned __int64 v19; // rcx
  unsigned __int128 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int128 v22; // rtt
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  KIRQL v30; // al
  __int64 v31; // r13
  struct DXGTHREAD *v32; // r14
  struct DXGTHREAD *v33; // rax
  _DWORD *v34; // r15
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned int v38; // r14d
  __int64 v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned int v45; // eax
  volatile signed __int64 *v46; // rdx
  signed __int64 v47; // rax
  unsigned int v48; // ecx
  LARGE_INTEGER v49; // rbx
  struct _KDPC *v50; // r8
  struct _KTIMER *v51; // rcx
  unsigned __int64 v52; // rcx
  unsigned __int128 v53; // rax
  unsigned __int128 v54; // rtt
  unsigned __int64 v55; // rcx
  unsigned __int128 v56; // rax
  unsigned __int128 v57; // rtt
  unsigned int i; // r14d
  __int64 v59; // r9
  struct DXGTHREAD *v60; // r14
  struct DXGTHREAD *Current; // rax
  int v62; // r13d
  KIRQL v63; // al
  int v64; // edx
  int v65; // ecx
  int v66; // r8d
  int v67; // edx
  int v68; // ecx
  int v69; // r8d
  int v70; // eax
  struct DXGPROCESS *v71; // rax
  int v72; // ecx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v75; // rcx
  KIRQL v76; // al
  unsigned int j; // edx
  __int64 v78; // rcx
  unsigned int k; // edx
  __int64 v80; // rcx
  unsigned __int64 v81; // rcx
  KIRQL CurrentIrql; // [rsp+68h] [rbp-A0h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp-98h] BYREF
  __int64 v85; // [rsp+78h] [rbp-90h]
  __int64 v86; // [rsp+80h] [rbp-88h]
  unsigned int v87; // [rsp+88h] [rbp-80h] BYREF
  __int64 v88; // [rsp+90h] [rbp-78h]
  char v89; // [rsp+98h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD v91[4]; // [rsp+B8h] [rbp-50h] BYREF
  char v92; // [rsp+C8h] [rbp-40h]
  struct _KAPC_STATE v93; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v94[8]; // [rsp+100h] [rbp-8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+108h] [rbp+0h] BYREF

  v4 = a4;
  v7 = 0;
  v8 = a3;
  InterruptType = a2.InterruptType;
  PerformanceFrequency = (union _LARGE_INTEGER)a2;
  v87 = -1;
  v88 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v89 = 1;
    v87 = 5054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5054LL);
  }
  else
  {
    v89 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v87, 5054);
  HighPart = PerformanceFrequency.HighPart;
  if ( bTracingEnabled
    && InterruptType == DXGK_INTERRUPT_CRTC_VSYNC
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    McTemplateK0tt_EtwWriteTransfer(v10, &EventDdiControlInterrupt2, v11, v4, PerformanceFrequency.HighPart);
  }
  if ( (*((_DWORD *)this + 666) & 0x10) == 0 )
  {
    v13 = 0;
    goto LABEL_9;
  }
  if ( v4 != -3 )
  {
    v13 = v4;
LABEL_9:
    v14 = *(_DWORD *)(*((_QWORD *)this + 498) + 4LL * v13);
    v15 = (LARGE_INTEGER *)(*((_QWORD *)this + 511) + 112LL * v13);
    PerformanceFrequency.QuadPart = 0LL;
    v16 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v18 = v16;
    if ( (_DWORD)HighPart )
    {
      if ( (_DWORD)HighPart == 1 )
      {
        if ( !v14 )
        {
          v19 = v16.QuadPart - v15->QuadPart;
          v20 = v19 * (unsigned __int128)0x3E8uLL;
          v86 = *((_QWORD *)&v20 + 1);
          if ( is_mul_ok(v19, 0x3E8uLL) )
          {
            v22 = v20;
            v21 = v20 % (unsigned __int64)PerformanceFrequency.QuadPart;
            v23 = v22 / (unsigned __int64)PerformanceFrequency.QuadPart;
          }
          else
          {
            v17.QuadPart = v19 / PerformanceFrequency.QuadPart;
            v21 = 1000 * (v19 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
            v23 = 1000 * (v19 / PerformanceFrequency.QuadPart)
                + 1000 * (v19 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
          }
          v15[2].QuadPart += v23;
LABEL_15:
          *v15 = v18;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
            McTemplateK0qxxx_EtwWriteTransfer(
              v23,
              v21,
              v17.LowPart,
              HighPart,
              v15[2].QuadPart,
              v15[3].QuadPart,
              v15[4].QuadPart);
        }
LABEL_17:
        v4 = a4;
        goto LABEL_18;
      }
      if ( (_DWORD)HighPart != 2 || v14 != 1 )
        goto LABEL_17;
      v55 = v16.QuadPart - v15->QuadPart;
      v56 = v55 * (unsigned __int128)0x3E8uLL;
      v86 = *((_QWORD *)&v56 + 1);
      if ( is_mul_ok(v55, 0x3E8uLL) )
      {
        v57 = v56;
        v21 = v56 % (unsigned __int64)PerformanceFrequency.QuadPart;
        v23 = v57 / (unsigned __int64)PerformanceFrequency.QuadPart;
      }
      else
      {
        v17.QuadPart = v55 / PerformanceFrequency.QuadPart;
        v21 = 1000 * (v55 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
        v23 = 1000 * (v55 / PerformanceFrequency.QuadPart)
            + 1000 * (v55 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
      }
    }
    else
    {
      if ( (unsigned int)(v14 - 1) > 1 )
        goto LABEL_17;
      v52 = v16.QuadPart - v15->QuadPart;
      v53 = v52 * (unsigned __int128)0x3E8uLL;
      v86 = *((_QWORD *)&v53 + 1);
      if ( is_mul_ok(v52, 0x3E8uLL) )
      {
        v54 = v53;
        v21 = v53 % (unsigned __int64)PerformanceFrequency.QuadPart;
        v23 = v54 / (unsigned __int64)PerformanceFrequency.QuadPart;
      }
      else
      {
        v17.QuadPart = v52 / PerformanceFrequency.QuadPart;
        v21 = 1000 * (v52 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
        v23 = 1000 * (v52 / PerformanceFrequency.QuadPart)
            + 1000 * (v52 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
      }
      if ( v14 != 1 )
      {
        v15[4].QuadPart += v23;
        goto LABEL_15;
      }
    }
    v15[3].QuadPart += v23;
    goto LABEL_15;
  }
  for ( i = 0; i < *((_DWORD *)this + 386); ++i )
    VSYNC_TIME_STATS::VSyncStateChange(
      (VSYNC_TIME_STATS *)(*((_QWORD *)this + 511) + 112LL * i),
      *(enum _DXGK_CRTC_VSYNC_STATE *)(*((_QWORD *)this + 498) + 4LL * i),
      (enum _DXGK_CRTC_VSYNC_STATE)PerformanceFrequency.HighPart);
LABEL_18:
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC && !v8 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 4032, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v59 = *((unsigned int *)this + 1014);
        if ( (_DWORD)v59 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, "g", v25, v59);
      }
      ExAcquirePushLockExclusiveEx((char *)this + 4032, 0LL);
    }
    *((_QWORD *)this + 505) = KeGetCurrentThread();
  }
  v26 = *((_QWORD *)this + 350);
  if ( !v26
    || (v27 = *(_QWORD *)(v26 + 632)) == 0
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v26 + 624) + 8LL) + 72LL))(v27)
    && *((struct _KTHREAD **)this + 351) != KeGetCurrentThread() )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)this + 248)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, "g", v29, 73LL);
      KeWaitForSingleObject((char *)this + 248, Executive, 0, 0, 0LL);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*((PERESOURCE *)this + 34), 1u);
  }
  if ( *((int *)this + 673) >= 2700 && *((_QWORD *)this + 174) )
  {
    v91[0] = a2.InterruptType;
    v91[1] = HighPart;
    v91[2] = v4;
    _InterlockedIncrement((volatile signed __int32 *)this + 1121);
    CurrentIrql = KeGetCurrentIrql();
    v60 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v60 = Current) != 0LL) )
      v62 = *((_DWORD *)Current + 12);
    else
      v62 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v94, this);
    v35 = (*((int (__fastcall **)(_QWORD, _DWORD *))this + 174))(*((_QWORD *)this + 35), v91);
    if ( v94[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v63 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, CurrentIrql, v63);
    }
    if ( v60 && *((_DWORD *)v60 + 12) != v62 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v60 + 12), v62, 0LL);
    _InterlockedDecrement((volatile signed __int32 *)this + 1121);
    if ( (_DWORD)v35 != -1073741823 && (_DWORD)v35 != -1073741822 )
    {
      if ( (_DWORD)v35 )
      {
        WdLogSingleEntry1(2LL, v35);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            goto LABEL_141;
        }
      }
    }
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 1121);
    v30 = KeGetCurrentIrql();
    v31 = v30;
    v32 = 0LL;
    if ( v30 < 2u && (v33 = DXGTHREAD::GetCurrent(), (v32 = v33) != 0LL) )
      LODWORD(v85) = *((_DWORD *)v33 + 12);
    else
      LODWORD(v85) = 0;
    v92 = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      if ( !DXGGLOBAL::m_pGlobal )
      {
        WdLogSingleEntry1(1LL, 2373LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v68,
              v67,
              v69,
              0,
              2,
              -1,
              (__int64)L"m_pGlobal != NULL",
              2373LL,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
      v34 = DXGGLOBAL::m_pGlobal;
      if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 429) )
      {
        v70 = *((_DWORD *)this + 109);
        if ( (v70 & 0x20) == 0 && (v70 & 4) == 0 )
        {
          v71 = DXGPROCESS::GetCurrent();
          if ( v71 )
          {
            if ( (*((_BYTE *)v71 + 424) & 1) == 0 && (*((_DWORD *)v71 + 106) & 2) == 0 )
            {
              v72 = v34[429];
              if ( v72 == 2 || v72 == 1 && *((_BYTE *)v71 + 589) )
              {
                Global = DXGGLOBAL_GetGlobal();
                SessionData = DXGGLOBAL::GetSessionData(Global);
                if ( SessionData )
                {
                  v75 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2340);
                  if ( v75 )
                  {
                    KeStackAttachProcess(v75, &v93);
                    v92 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    v35 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLINTERRUPT2))this + 111))(*((_QWORD *)this + 35), a2);
    if ( v92 )
      KeUnstackDetachProcess(&v93);
    if ( (_BYTE)v31 != KeGetCurrentIrql() )
    {
      v76 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v31, v76);
    }
    if ( v32 && *((_DWORD *)v32 + 12) != (_DWORD)v85 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v32 + 12), (int)v85, 0LL);
    _InterlockedDecrement((volatile signed __int32 *)this + 1121);
    if ( (_DWORD)v35 )
    {
      if ( (_DWORD)v35 != -1073741823 && (_DWORD)v35 != -1073741822 )
      {
        WdLogSingleEntry1(2LL, v35);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
LABEL_141:
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v65,
              v64,
              v66,
              0,
              0,
              -1,
              (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
              v35,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
    }
  }
  v36 = *((_QWORD *)this + 350);
  if ( !v36
    || (v37 = *(_QWORD *)(v36 + 632)) == 0
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v36 + 624) + 8LL) + 72LL))(v37)
    && *((struct _KTHREAD **)this + 351) != KeGetCurrentThread() )
  {
    ExReleaseResourceLite(*((PERESOURCE *)this + 34));
    KeLeaveCriticalRegion();
  }
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC )
  {
    if ( (int)v35 < 0 )
    {
      v38 = a4;
    }
    else
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 508, &LockHandle);
      if ( (*((_DWORD *)this + 666) & 0x10) != 0 )
      {
        v38 = a4;
        if ( a4 == -3 )
        {
          for ( j = 0; j < *((_DWORD *)this + 386); *(_DWORD *)(*((_QWORD *)this + 498) + 4 * v78) = HighPart )
            v78 = j++;
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)this + 498) + 4LL * a4) = HighPart;
        }
      }
      else
      {
        v38 = a4;
        **((_DWORD **)this + 498) = HighPart;
      }
      if ( (_DWORD)HighPart == 1 )
      {
        if ( (*((_DWORD *)this + 666) & 0x10) != 0 )
        {
          if ( v38 == -3 )
          {
            for ( k = 0; k < *((_DWORD *)this + 386); *(_QWORD *)(*((_QWORD *)this + 509) + 8 * v80) = 0LL )
              v80 = k++;
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 509) + 8LL * v38) = 0LL;
          }
        }
        else
        {
          **((_QWORD **)this + 509) = 0LL;
        }
      }
      v39 = *((_QWORD *)this + 349);
      if ( v39 && !(_DWORD)HighPart && *(_QWORD *)(v39 + 1016) )
        *(_BYTE *)(v39 + 960) = 1;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( (_DWORD)HighPart != 2 )
      {
        LOBYTE(v40) = (_DWORD)HighPart == 0;
        PoNotifyVSyncChange(v40);
      }
    }
    *((_QWORD *)this + 505) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 4032, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v38 = a4;
  }
  v41 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v41[3] = (int)v35;
  v41[4] = a2.InterruptType;
  v41[5] = HighPart;
  if ( (int)v35 >= 0 && (_DWORD)HighPart == 1 && a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC )
  {
    if ( v38 == -3 || (v45 = v38, (*((_DWORD *)this + 666) & 0x10) == 0) )
      v45 = 0;
    v46 = (volatile signed __int64 *)(*((_QWORD *)this + 510) + 8LL * v45);
    v47 = _InterlockedCompareExchange64(v46, *v46, *v46);
    v48 = *((_DWORD *)this + 1024);
    if ( v47 )
      v49.QuadPart = -(v47 * v48);
    else
      v49.QuadPart = -166667 * v48;
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    if ( (*((_DWORD *)this + 666) & 0x10) == 0 )
    {
      v50 = (struct _KDPC *)*((_QWORD *)this + 500);
      v51 = (struct _KTIMER *)*((_QWORD *)this + 499);
LABEL_72:
      KeSetTimer(v51, v49, v50);
      goto LABEL_61;
    }
    if ( v38 != -3 )
    {
      v81 = (unsigned __int64)v38 << 6;
      v50 = (struct _KDPC *)(v81 + *((_QWORD *)this + 500));
      v51 = (struct _KTIMER *)(*((_QWORD *)this + 499) + v81);
      goto LABEL_72;
    }
    if ( *((_DWORD *)this + 386) )
    {
      do
      {
        KeSetTimer(
          (PKTIMER)(*((_QWORD *)this + 499) + ((unsigned __int64)v7 << 6)),
          v49,
          (PKDPC)(((unsigned __int64)v7 << 6) + *((_QWORD *)this + 500)));
        ++v7;
      }
      while ( v7 < *((_DWORD *)this + 386) );
    }
  }
LABEL_61:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v87);
  if ( v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v87);
  return (unsigned int)v35;
}
