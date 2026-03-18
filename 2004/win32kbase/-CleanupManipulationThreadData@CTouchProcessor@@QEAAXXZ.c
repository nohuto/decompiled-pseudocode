/*
 * XREFs of ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C005F150
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069090 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006EEE0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0074820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1334 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D13EC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1F20 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C018E8E8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C0193F60 (-GetPrevMTNodeTarget@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInp.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0194EC0 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0198698 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01998E4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C019CF04 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CleanupManipulationThreadData(CTouchProcessor *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  struct CPointerInputFrame *v7; // r12
  void *v8; // r14
  _DWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rsi
  _DWORD *i; // r15
  __int64 v16; // rdi
  CPointerInfoNode *v17; // rcx
  const struct tagINPUTDEST *PrevMTNodeTarget; // rax
  bool v19; // r14
  __int64 v20; // r10
  int v21; // r14d
  __int64 j; // rdi
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // r9
  int v30; // [rsp+38h] [rbp-D0h]
  int v31; // [rsp+3Ch] [rbp-CCh]
  struct CPointerInputFrame *v32; // [rsp+40h] [rbp-C8h]
  __m256i v33; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v34[6]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v35[40]; // [rsp+98h] [rbp-70h] BYREF
  CInpLockGuard *v36; // [rsp+C0h] [rbp-48h]
  int v37; // [rsp+C8h] [rbp-40h]
  _BYTE v38[40]; // [rsp+D0h] [rbp-38h] BYREF
  CInpLockGuard *v39; // [rsp+F8h] [rbp-10h]
  _BYTE v40[128]; // [rsp+108h] [rbp+0h] BYREF
  char v41[112]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v42[128]; // [rsp+1F8h] [rbp+F0h] BYREF

  v30 = 0;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v35,
    (CTouchProcessor *)((char *)this + 40),
    0LL);
  v6 = *((_QWORD *)this + 17);
  while ( (CTouchProcessor *)v6 != (CTouchProcessor *)((char *)this + 128) )
  {
    v7 = (struct CPointerInputFrame *)(v6 - 8);
    v32 = (struct CPointerInputFrame *)(v6 - 8);
    if ( v6 == 8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 36));
    v31 = 0;
    v8 = Win32AllocPoolZInit(4LL * *(unsigned int *)(v6 + 40), 1851878741LL);
    v33.m256i_i64[0] = (__int64)v8;
    v9 = Win32AllocPoolZInit(4LL * *(unsigned int *)(v6 + 40), 1851878741LL);
    v13 = *(unsigned int *)(v6 + 40);
    v14 = 0LL;
    for ( i = v9; (unsigned int)v14 < (unsigned int)v13; v14 = (unsigned int)(v14 + 1) )
    {
      v16 = *(_QWORD *)(v6 + 128) + 480LL * (unsigned int)v14;
      memset(v40, 0, 113);
      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v16)
        && (unsigned int)CPointerInfoNode::IsForManipulationThread(v17)
        && (*(_DWORD *)(v16 + 4) & 0x200) == 0 )
      {
        v19 = 1;
        if ( v8 )
        {
          if ( i )
          {
            PrevMTNodeTarget = (const struct tagINPUTDEST *)CTouchProcessor::GetPrevMTNodeTarget(this, v41, v16, v32);
            CInputDest::CInputDest((CInputDest *)v42, PrevMTNodeTarget);
            v30 |= 1u;
            if ( *(_DWORD *)CInputDest::operator=(v40, v42) )
              v19 = 0;
          }
        }
        if ( (v30 & 1) != 0 )
        {
          v30 &= ~1u;
          CInputDest::SetEmpty((CInputDest *)v42);
        }
        if ( v19 )
        {
          v7 = (struct CPointerInputFrame *)(v6 - 8);
          if ( (*(_DWORD *)(v16 + 180) & 0x40000) != 0 )
            CTouchProcessor::ProcessRoutedAwayList(
              this,
              *(_WORD *)(v16 + 172),
              1,
              v32,
              v14,
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          CTouchProcessor::FreePointerInfoNodeInt(this, v32, v14);
          v8 = (void *)v33.m256i_i64[0];
          goto LABEL_25;
        }
        ++v31;
        v8 = (void *)v33.m256i_i64[0];
        *(_QWORD *)(v16 + 192) = CInputDest::GetWindowHandle((CInputDest *)v40);
        i[v14] = 1;
      }
      v7 = (struct CPointerInputFrame *)(v6 - 8);
LABEL_25:
      CInputDest::SetEmpty((CInputDest *)v40);
      v13 = *(unsigned int *)(v6 + 40);
    }
    v20 = v33.m256i_i64[0];
    v21 = 0;
    if ( v33.m256i_i64[0] )
    {
      if ( i )
      {
        for ( j = 0LL; (unsigned int)j < (unsigned int)v13; j = (unsigned int)(j + 1) )
        {
          if ( i[j] )
          {
            v23 = 480LL * (unsigned int)j;
            v24 = 0LL;
            v25 = (unsigned int)j;
            v26 = *(_QWORD *)(v23 + *(_QWORD *)(v6 + 128) + 192);
            if ( (unsigned int)j >= (unsigned int)v13 )
              goto LABEL_36;
            do
            {
              v13 = (unsigned int)v25;
              if ( i[(unsigned int)v25] )
              {
                v27 = *(_QWORD *)(v6 + 128) + 480LL * (unsigned int)v25;
                if ( *(_QWORD *)(v27 + 192) == v26 )
                {
                  v23 = *(unsigned __int16 *)(v27 + 172);
                  *(_DWORD *)(v20 + 4 * v24) = v23;
                  v24 = (unsigned int)(v24 + 1);
                  i[(unsigned int)v25] = 0;
                }
              }
              v25 = (unsigned int)(v25 + 1);
            }
            while ( (unsigned int)v25 < *(_DWORD *)(v6 + 40) );
            if ( !(_DWORD)v24 )
            {
LABEL_36:
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v13, v25, v26);
              v20 = v33.m256i_i64[0];
            }
            memset(v34, 0, sizeof(v34));
            memset(&v33.m256i_u64[1], 0, 24);
            if ( qword_1C0251EC0 )
            {
              qword_1C0251EC0(v20, &v34[3], Win32FreePool, v26);
              if ( qword_1C0251EC0 )
              {
                qword_1C0251EC0(i, v34, Win32FreePool, v28);
                if ( qword_1C0251EC0 )
                  qword_1C0251EC0(v7, &v33.m256i_u64[1], CTouchProcessor::DereferencePointerInputFrame, v29);
              }
            }
            CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
              (CInpUnlockGuardExclusive *)v38,
              (CTouchProcessor *)((char *)this + 40),
              0LL);
            CTouchProcessor::SetManipulationInputTarget(
              this,
              *(_DWORD *)(v6 + 32),
              v24,
              (unsigned int *)v33.m256i_i64[0],
              0LL);
            CInpLockGuard::UnRefPointerMsgIdAndLockExclusive(v39, (struct CRefUnRefPointerMsgId *)v38);
            if ( qword_1C0251ED0 )
            {
              qword_1C0251ED0(&v33.m256i_u64[1]);
              if ( qword_1C0251ED0 )
              {
                qword_1C0251ED0(v34);
                if ( qword_1C0251ED0 )
                  qword_1C0251ED0(&v34[3]);
              }
            }
            v20 = v33.m256i_i64[0];
            v21 += v24;
          }
          v13 = *(unsigned int *)(v6 + 40);
        }
        if ( v21 != v31 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v13, v11, v12);
      }
      Win32FreePool(v33.m256i_i64[0]);
    }
    if ( i )
      Win32FreePool(i);
    v6 = *(_QWORD *)(v6 + 8);
    CTouchProcessor::UnreferenceFrameInt(this, v7);
  }
  if ( !v37 )
    CInpLockGuard::UnLock(v36, (struct CRefUnRefPointerMsgId *)v35);
}
