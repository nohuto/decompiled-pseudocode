/*
 * XREFs of DxgkGetPresentStats @ 0x1C01CF460
 * Callers:
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C0017324 (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017ED90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetPresentStats(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r13d
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // edi
  __int64 v13; // rbx
  int v14; // edx
  __int64 v15; // rbx
  volatile signed __int64 *v16; // rsi
  struct DXGADAPTER *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned int v21; // edi
  struct DXGADAPTER *v22; // rcx
  struct DXGADAPTER *v23; // rcx
  struct DXGTHREAD *Current; // rax
  int v26; // r9d
  __int64 v27; // rsi
  __int64 v28; // r8
  int v29; // edx
  __int64 v30; // r14
  const wchar_t *v31; // r9
  unsigned int v32; // [rsp+50h] [rbp-B0h]
  DXGFASTMUTEX *v34; // [rsp+60h] [rbp-A0h]
  char v35; // [rsp+68h] [rbp-98h]
  unsigned int v36; // [rsp+70h] [rbp-90h]
  unsigned int v37; // [rsp+74h] [rbp-8Ch]
  char v38; // [rsp+81h] [rbp-7Fh]
  char v39[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40; // [rsp+90h] [rbp-70h]
  struct DXGADAPTER *v41; // [rsp+98h] [rbp-68h]
  char v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  char v44[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v45; // [rsp+D0h] [rbp-30h]
  struct DXGADAPTER *v46; // [rsp+D8h] [rbp-28h]
  char v47; // [rsp+E0h] [rbp-20h]
  char *v48; // [rsp+E8h] [rbp-18h]

  v4 = a1;
  v36 = a3;
  v37 = a2;
  v32 = a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v8 = *((_QWORD *)Current + 3)) == 0 )
  {
    v8 = v7;
    if ( !v7 )
    {
      v21 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid process context, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return v21;
    }
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v8 + 88) + 216LL))() )
  {
    v21 = -1073741790;
    WdLogSingleEntry2(3LL, v8, -1073741790LL);
    return v21;
  }
  v35 = 0;
  v34 = (DXGFASTMUTEX *)(v8 + 104);
  if ( v8 == -104 )
  {
    WdLogSingleEntry1(1LL, 573LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 573LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v34 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 580LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 580LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire(v34);
  v9 = v8 + 248;
  v35 = 1;
  if ( v8 != -248 && *(struct _KTHREAD **)(v8 + 256) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1425LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1425LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v26 = *(_DWORD *)(v8 + 272);
      if ( v26 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (const EVENT_DESCRIPTOR *)"g", v11, v26);
    }
    ExAcquirePushLockSharedEx(v8 + 248, 0LL);
  }
  v12 = (v4 >> 6) & 0xFFFFFF;
  if ( (*(_DWORD *)(v8 + 424) & 0x100) != 0 )
  {
    v27 = *(_QWORD *)(v8 + 608);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v27 + 248));
    if ( v12 < *(_DWORD *)(v27 + 296)
      && (v28 = *(_QWORD *)(v27 + 280),
          v29 = *(_DWORD *)(v28 + 16LL * v12 + 8),
          ((v32 >> 25) & 0x60) == (*(_BYTE *)(v28 + 16LL * v12 + 8) & 0x60))
      && (v29 & 0x2000) == 0
      && (v29 & 0x1F) != 0 )
    {
      if ( (v29 & 0x1F) == 1 )
      {
        v15 = *(_QWORD *)(v28 + 16LL * v12);
      }
      else
      {
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        v15 = 0LL;
      }
    }
    else
    {
      v15 = 0LL;
    }
    ExReleasePushLockSharedEx(v27 + 248, 0LL);
    KeLeaveCriticalRegion();
    v4 = v32;
  }
  else
  {
    if ( v12 < *(_DWORD *)(v8 + 296) )
    {
      v13 = *(_QWORD *)(v8 + 280);
      v14 = *(_DWORD *)(v13 + 16LL * v12 + 8);
      if ( ((v4 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x60) && (v14 & 0x2000) == 0 && (v14 & 0x1F) != 0 )
      {
        if ( (v14 & 0x1F) == 1 )
        {
          v15 = *(_QWORD *)(v13 + 16LL * v12);
          goto LABEL_22;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v15 = 0LL;
  }
LABEL_22:
  v16 = (volatile signed __int64 *)(v15 + 24);
  if ( v15 )
    _InterlockedIncrement64(v16);
  ExReleasePushLockSharedEx(v9, 0LL);
  KeLeaveCriticalRegion();
  if ( v15 )
  {
    v38 = 0;
    v41 = (struct DXGADAPTER *)v15;
    v42 = 0;
    v43 = 0LL;
    _InterlockedIncrement64(v16);
    v46 = (struct DXGADAPTER *)v15;
    v40 = -1LL;
    v47 = 0;
    v48 = 0LL;
    _InterlockedIncrement64(v16);
    v45 = -1LL;
    if ( v47 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v44, 0LL, 0LL);
    v17 = v46;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v46 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v46 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, (const EVENT_DESCRIPTOR *)"g", v19, 72);
        KeWaitForSingleObject((char *)v46 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v46, 0LL);
      v17 = v46;
    }
    v48 = 0LL;
    v47 = 1;
    if ( *((_DWORD *)v17 + 50) == 1 )
    {
      if ( v41 == v46 || (COREACCESS::AcquireShared((COREACCESS *)v39, 0LL), *((_DWORD *)v41 + 50) == 1) )
      {
        v38 = 1;
        if ( !*(_BYTE *)(v15 + 2705) )
        {
          v20 = *(_QWORD *)(v15 + 2800);
          if ( v20 )
          {
            v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v20 + 624) + 8LL)
                                                                             + 496LL))(
                    *(_QWORD *)(v20 + 632),
                    v37,
                    v36,
                    a4);
LABEL_35:
            if ( v38 )
            {
              if ( v41 != v46 )
                COREACCESS::Release((COREACCESS *)v39);
              if ( !v47 )
                WdLogSingleEntry5(0LL, 275LL, 4LL, v44, 0LL, 0LL);
              v47 = 0;
              v22 = v46;
              if ( KeGetCurrentThread() != *((struct _KTHREAD **)v46 + 23) )
              {
                DXGADAPTER::ReleaseCoreResource(v46, v48);
                v22 = v46;
              }
              v48 = 0LL;
              v38 = 0;
            }
            else
            {
              v22 = v46;
            }
            if ( v22 )
            {
              if ( v47 )
              {
                COREACCESS::Release((COREACCESS *)v44);
                v22 = v46;
              }
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v22 + 2), v22);
            }
            v23 = v41;
            if ( v41 )
            {
              if ( v42 )
              {
                COREACCESS::Release((COREACCESS *)v39);
                v23 = v41;
              }
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v23 + 2), v23);
            }
            if ( _InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v15 + 16), (struct DXGADAPTER *)v15);
            goto LABEL_55;
          }
        }
        v21 = -1073741811;
        WdLogSingleEntry2(2LL, v15, -1073741811LL);
        v31 = L"DXGADAPTER 0x%I64x is not an active render adapter, returning 0x%I64x";
        v30 = -1073741811LL;
LABEL_85:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v31, v15, v30, 0LL, 0LL, 0LL);
        goto LABEL_35;
      }
      COREACCESS::Release((COREACCESS *)v39);
    }
    COREACCESS::Release((COREACCESS *)v44);
    v30 = -1073741130LL;
    WdLogSingleEntry2(2LL, v15, -1073741130LL);
    v31 = L"Failed to acquire shared access for DXGADAPTER 0x%I64x, returning 0x%I64x";
    v21 = -1073741130;
    goto LABEL_85;
  }
  v21 = -1073741811;
  WdLogSingleEntry2(2LL, v4, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid hAdapter (0x%I64x) specified, returning 0x%I64x",
    v4,
    -1073741811LL,
    0LL,
    0LL,
    0LL);
LABEL_55:
  if ( v35 )
  {
    v35 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v34);
  }
  return v21;
}
