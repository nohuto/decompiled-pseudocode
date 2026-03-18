/*
 * XREFs of ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C00BF4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C002C860 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0033F64 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1224 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12DC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1EB0 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C018C3C8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C0191A30 (-GetPrevMTNodeTarget@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInp.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0192990 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0196168 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01973B4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C019AA04 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  void *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 i; // r15
  __int64 v16; // rdi
  __int64 v17; // rdx
  CPointerInfoNode *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  const struct tagINPUTDEST *PrevMTNodeTarget; // rax
  bool v22; // r14
  __int64 v23; // r10
  int v24; // r14d
  __int64 j; // rdi
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  int v31; // [rsp+38h] [rbp-D0h]
  int v32; // [rsp+3Ch] [rbp-CCh]
  struct CPointerInputFrame *v33; // [rsp+40h] [rbp-C8h]
  __m256i v34; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v35[6]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v36[40]; // [rsp+98h] [rbp-70h] BYREF
  CInpLockGuard *v37; // [rsp+C0h] [rbp-48h]
  int v38; // [rsp+C8h] [rbp-40h]
  _BYTE v39[40]; // [rsp+D0h] [rbp-38h] BYREF
  CInpLockGuard *v40; // [rsp+F8h] [rbp-10h]
  _BYTE v41[128]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v42[112]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v43[16]; // [rsp+1F8h] [rbp+F0h] BYREF

  v31 = 0;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v36,
    (CTouchProcessor *)((char *)this + 40),
    0LL);
  v6 = *((_QWORD *)this + 17);
  while ( (CTouchProcessor *)v6 != (CTouchProcessor *)((char *)this + 128) )
  {
    v7 = (struct CPointerInputFrame *)(v6 - 8);
    v33 = (struct CPointerInputFrame *)(v6 - 8);
    if ( v6 == 8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 36));
    v32 = 0;
    v8 = Win32AllocPoolZInit(4LL * *(unsigned int *)(v6 + 40), 0x6E616D55u);
    v34.m256i_i64[0] = (__int64)v8;
    v9 = Win32AllocPoolZInit(4LL * *(unsigned int *)(v6 + 40), 0x6E616D55u);
    v13 = *(unsigned int *)(v6 + 40);
    v14 = 0LL;
    for ( i = (__int64)v9; (unsigned int)v14 < (unsigned int)v13; v14 = (unsigned int)(v14 + 1) )
    {
      v16 = *(_QWORD *)(v6 + 128) + 480LL * (unsigned int)v14;
      memset(v41, 0, 113);
      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v16)
        && (unsigned int)CPointerInfoNode::IsForManipulationThread(v18)
        && (*(_DWORD *)(v16 + 4) & 0x200) == 0 )
      {
        v22 = 1;
        if ( v8 )
        {
          if ( i )
          {
            PrevMTNodeTarget = (const struct tagINPUTDEST *)CTouchProcessor::GetPrevMTNodeTarget(this, v42, v16, v33);
            CInputDest::CInputDest((CInputDest *)v43, PrevMTNodeTarget);
            v31 |= 1u;
            if ( *(_DWORD *)CInputDest::operator=((__int64)v41, v43) )
              v22 = 0;
          }
        }
        if ( (v31 & 1) != 0 )
        {
          v31 &= ~1u;
          CInputDest::SetEmpty((CInputDest *)v43, v17, v19, v20);
        }
        if ( v22 )
        {
          v7 = (struct CPointerInputFrame *)(v6 - 8);
          if ( (*(_DWORD *)(v16 + 180) & 0x40000) != 0 )
            CTouchProcessor::ProcessRoutedAwayList(
              this,
              *(_WORD *)(v16 + 172),
              1,
              v33,
              v14,
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          CTouchProcessor::FreePointerInfoNodeInt(this, v33, v14);
          v8 = (void *)v34.m256i_i64[0];
          goto LABEL_25;
        }
        ++v32;
        v8 = (void *)v34.m256i_i64[0];
        *(_QWORD *)(v16 + 192) = CInputDest::GetWindowHandle((CInputDest *)v41);
        *(_DWORD *)(i + 4 * v14) = 1;
      }
      v7 = (struct CPointerInputFrame *)(v6 - 8);
LABEL_25:
      CInputDest::SetEmpty((CInputDest *)v41, v17, v19, v20);
      v13 = *(unsigned int *)(v6 + 40);
    }
    v23 = v34.m256i_i64[0];
    v24 = 0;
    if ( v34.m256i_i64[0] )
    {
      if ( i )
      {
        for ( j = 0LL; (unsigned int)j < (unsigned int)v13; j = (unsigned int)(j + 1) )
        {
          if ( *(_DWORD *)(i + 4 * j) )
          {
            v26 = 480LL * (unsigned int)j;
            v27 = 0LL;
            v28 = (unsigned int)j;
            v29 = *(_QWORD *)(v26 + *(_QWORD *)(v6 + 128) + 192);
            if ( (unsigned int)j >= (unsigned int)v13 )
              goto LABEL_36;
            do
            {
              v13 = (unsigned int)v28;
              if ( *(_DWORD *)(i + 4LL * (unsigned int)v28) )
              {
                v30 = *(_QWORD *)(v6 + 128) + 480LL * (unsigned int)v28;
                if ( *(_QWORD *)(v30 + 192) == v29 )
                {
                  v26 = *(unsigned __int16 *)(v30 + 172);
                  *(_DWORD *)(v23 + 4 * v27) = v26;
                  v27 = (unsigned int)(v27 + 1);
                  *(_DWORD *)(i + 4LL * (unsigned int)v28) = 0;
                }
              }
              v28 = (unsigned int)(v28 + 1);
            }
            while ( (unsigned int)v28 < *(_DWORD *)(v6 + 40) );
            if ( !(_DWORD)v27 )
            {
LABEL_36:
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v13, v28, v29);
              v23 = v34.m256i_i64[0];
            }
            memset(v35, 0, sizeof(v35));
            memset(&v34.m256i_u64[1], 0, 24);
            if ( qword_1C024FEC0 )
            {
              qword_1C024FEC0(v23, &v35[3], Win32FreePool);
              if ( qword_1C024FEC0 )
              {
                qword_1C024FEC0(i, v35, Win32FreePool);
                if ( qword_1C024FEC0 )
                  qword_1C024FEC0(v7, &v34.m256i_u64[1], CTouchProcessor::DereferencePointerInputFrame);
              }
            }
            CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
              (CInpUnlockGuardExclusive *)v39,
              (CTouchProcessor *)((char *)this + 40),
              0LL);
            CTouchProcessor::SetManipulationInputTarget(
              this,
              *(_DWORD *)(v6 + 32),
              v27,
              (unsigned int *)v34.m256i_i64[0],
              0LL);
            CInpLockGuard::UnRefPointerMsgIdAndLockExclusive(v40, (struct CRefUnRefPointerMsgId *)v39);
            if ( qword_1C024FED0 )
            {
              qword_1C024FED0(&v34.m256i_u64[1]);
              if ( qword_1C024FED0 )
              {
                qword_1C024FED0(v35);
                if ( qword_1C024FED0 )
                  qword_1C024FED0(&v35[3]);
              }
            }
            v23 = v34.m256i_i64[0];
            v24 += v27;
          }
          v13 = *(unsigned int *)(v6 + 40);
        }
        if ( v24 != v32 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v13, v11, v12);
      }
      Win32FreePool(v34.m256i_i64[0]);
    }
    if ( i )
      Win32FreePool(i);
    v6 = *(_QWORD *)(v6 + 8);
    CTouchProcessor::UnreferenceFrameInt(this, v7);
  }
  if ( !v38 )
    CInpLockGuard::UnLock(v37, (struct CRefUnRefPointerMsgId *)v36);
}
