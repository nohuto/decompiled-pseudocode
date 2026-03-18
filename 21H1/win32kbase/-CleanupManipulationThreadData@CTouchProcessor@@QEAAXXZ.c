/*
 * XREFs of ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C0051490
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069AA8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006E1C0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0B3C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1600 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C01945E8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C0199C60 (-GetPrevMTNodeTarget@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInp.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C019ABC0 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C019E388 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019F5D4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01A2C64 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CleanupManipulationThreadData(CTouchProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  struct CPointerInputFrame *v4; // r12
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rsi
  __int64 i; // r15
  __int64 v11; // rdi
  CPointerInfoNode *v12; // rcx
  const struct tagINPUTDEST *PrevMTNodeTarget; // rax
  bool v14; // r14
  __int64 v15; // r10
  int v16; // r14d
  __int64 j; // rdi
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned int v20; // r8d
  __int64 v21; // r9
  __int64 v22; // rax
  int v23; // [rsp+38h] [rbp-D0h]
  int v24; // [rsp+3Ch] [rbp-CCh]
  struct CPointerInputFrame *v25; // [rsp+40h] [rbp-C8h]
  __m256i v26; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v27[6]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v28[40]; // [rsp+98h] [rbp-70h] BYREF
  CInpLockGuard *v29; // [rsp+C0h] [rbp-48h]
  int v30; // [rsp+C8h] [rbp-40h]
  _BYTE v31[40]; // [rsp+D0h] [rbp-38h] BYREF
  CInpLockGuard *v32; // [rsp+F8h] [rbp-10h]
  _BYTE v33[128]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v34[112]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v35[128]; // [rsp+1F8h] [rbp+F0h] BYREF

  v23 = 0;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v28,
    (CTouchProcessor *)((char *)this + 40),
    0LL);
  v3 = *((_QWORD *)this + 17);
  while ( (CTouchProcessor *)v3 != (CTouchProcessor *)((char *)this + 128) )
  {
    v4 = (struct CPointerInputFrame *)(v3 - 8);
    v25 = (struct CPointerInputFrame *)(v3 - 8);
    if ( v3 == 8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 36));
    v24 = 0;
    v5 = Win32AllocPoolZInit(4LL * *(unsigned int *)(v3 + 40));
    v26.m256i_i64[0] = v5;
    v6 = Win32AllocPoolZInit(4LL * *(unsigned int *)(v3 + 40));
    v8 = *(_DWORD *)(v3 + 40);
    v9 = 0LL;
    for ( i = v6; (unsigned int)v9 < v8; v9 = (unsigned int)(v9 + 1) )
    {
      v11 = *(_QWORD *)(v3 + 128) + 480LL * (unsigned int)v9;
      memset(v33, 0, 113);
      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v11)
        && (unsigned int)CPointerInfoNode::IsForManipulationThread(v12)
        && (*(_DWORD *)(v11 + 4) & 0x200) == 0 )
      {
        v14 = 1;
        if ( v5 )
        {
          if ( i )
          {
            PrevMTNodeTarget = (const struct tagINPUTDEST *)CTouchProcessor::GetPrevMTNodeTarget(this, v34, v11, v25);
            CInputDest::CInputDest((CInputDest *)v35, PrevMTNodeTarget);
            v23 |= 1u;
            if ( *(_DWORD *)CInputDest::operator=(v33, v35) )
              v14 = 0;
          }
        }
        if ( (v23 & 1) != 0 )
        {
          v23 &= ~1u;
          CInputDest::SetEmpty((CInputDest *)v35);
        }
        if ( v14 )
        {
          v4 = (struct CPointerInputFrame *)(v3 - 8);
          if ( (*(_DWORD *)(v11 + 180) & 0x40000) != 0 )
            CTouchProcessor::ProcessRoutedAwayList(
              this,
              *(_WORD *)(v11 + 172),
              1,
              v25,
              v9,
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          CTouchProcessor::FreePointerInfoNodeInt(this, v25, v9);
          v5 = v26.m256i_i64[0];
          goto LABEL_25;
        }
        ++v24;
        v5 = v26.m256i_i64[0];
        *(_QWORD *)(v11 + 192) = CInputDest::GetWindowHandle((CInputDest *)v33);
        *(_DWORD *)(i + 4 * v9) = 1;
      }
      v4 = (struct CPointerInputFrame *)(v3 - 8);
LABEL_25:
      CInputDest::SetEmpty((CInputDest *)v33);
      v8 = *(_DWORD *)(v3 + 40);
    }
    v15 = v26.m256i_i64[0];
    v16 = 0;
    if ( v26.m256i_i64[0] )
    {
      if ( i )
      {
        for ( j = 0LL; (unsigned int)j < v8; j = (unsigned int)(j + 1) )
        {
          if ( *(_DWORD *)(i + 4 * j) )
          {
            v18 = 480LL * (unsigned int)j;
            v19 = 0LL;
            v20 = j;
            v21 = *(_QWORD *)(v18 + *(_QWORD *)(v3 + 128) + 192);
            if ( (unsigned int)j >= v8 )
              goto LABEL_36;
            do
            {
              if ( *(_DWORD *)(i + 4LL * v20) )
              {
                v22 = *(_QWORD *)(v3 + 128) + 480LL * v20;
                if ( *(_QWORD *)(v22 + 192) == v21 )
                {
                  v18 = *(unsigned __int16 *)(v22 + 172);
                  *(_DWORD *)(v15 + 4 * v19) = v18;
                  v19 = (unsigned int)(v19 + 1);
                  *(_DWORD *)(i + 4LL * v20) = 0;
                }
              }
              ++v20;
            }
            while ( v20 < *(_DWORD *)(v3 + 40) );
            if ( !(_DWORD)v19 )
            {
LABEL_36:
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
              v15 = v26.m256i_i64[0];
            }
            memset(v27, 0, sizeof(v27));
            memset(&v26.m256i_u64[1], 0, 24);
            if ( qword_1C0257E80 )
            {
              qword_1C0257E80(v15, &v27[3], Win32FreePool);
              if ( qword_1C0257E80 )
              {
                qword_1C0257E80(i, v27, Win32FreePool);
                if ( qword_1C0257E80 )
                  qword_1C0257E80(v4, &v26.m256i_u64[1], CTouchProcessor::DereferencePointerInputFrame);
              }
            }
            CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
              (CInpUnlockGuardExclusive *)v31,
              (CTouchProcessor *)((char *)this + 40),
              0LL);
            CTouchProcessor::SetManipulationInputTarget(
              this,
              *(_DWORD *)(v3 + 32),
              v19,
              (unsigned int *)v26.m256i_i64[0],
              0LL);
            CInpLockGuard::UnRefPointerMsgIdAndLockExclusive(v32, (struct CRefUnRefPointerMsgId *)v31);
            if ( qword_1C0257E90 )
            {
              qword_1C0257E90(&v26.m256i_u64[1]);
              if ( qword_1C0257E90 )
              {
                qword_1C0257E90(v27);
                if ( qword_1C0257E90 )
                  qword_1C0257E90(&v27[3]);
              }
            }
            v15 = v26.m256i_i64[0];
            v16 += v19;
          }
          v8 = *(_DWORD *)(v3 + 40);
        }
        if ( v16 != v24 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
      }
      Win32FreePool(v26.m256i_i64[0]);
    }
    if ( i )
      Win32FreePool(i);
    v3 = *(_QWORD *)(v3 + 8);
    CTouchProcessor::UnreferenceFrameInt(this, v4);
  }
  if ( !v30 )
    CInpLockGuard::UnLock(v29, (struct CRefUnRefPointerMsgId *)v28);
}
