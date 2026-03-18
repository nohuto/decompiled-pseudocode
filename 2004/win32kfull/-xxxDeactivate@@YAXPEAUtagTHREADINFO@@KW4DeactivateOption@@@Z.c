/*
 * XREFs of ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0037E18
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 * Callees:
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C003277C (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ??0?$CLockDomainExclusive@VDLT_ACTIVE@@@@QEAA@XZ @ 0x1C0032EC8 (--0-$CLockDomainExclusive@VDLT_ACTIVE@@@@QEAA@XZ.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00336A4 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     LockW32Thread @ 0x1C00343CC (LockW32Thread.c)
 *     xxxFocusSetInputContext @ 0x1C0034B4C (xxxFocusSetInputContext.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00350E4 (zzzInputFocusLostWindowEvent.c)
 *     PostIAMShellHookMessageEx @ 0x1C0058320 (PostIAMShellHookMessageEx.c)
 *     SetWakeBit @ 0x1C008FD50 (SetWakeBit.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxDeactivate(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // r13d
  char v4; // bl
  int v6; // r12d
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r13
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // ebx
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rax
  __int64 *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // [rsp+28h] [rbp-49h] BYREF
  __int64 v36; // [rsp+30h] [rbp-41h]
  __int128 v37; // [rsp+38h] [rbp-39h] BYREF
  __int64 v38; // [rsp+48h] [rbp-29h]
  __int128 v39; // [rsp+50h] [rbp-21h] BYREF
  __int64 v40; // [rsp+60h] [rbp-11h]
  __int128 v41; // [rsp+68h] [rbp-9h] BYREF
  __int64 v42; // [rsp+78h] [rbp+7h]
  __int128 v43; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v44; // [rsp+90h] [rbp+1Fh]

  v40 = 0LL;
  v38 = 0LL;
  v3 = a2;
  v44 = 0LL;
  v42 = 0LL;
  v4 = a3;
  v39 = 0LL;
  v6 = 0;
  v37 = 0LL;
  result = *(_QWORD *)(a1 + 424);
  v43 = 0LL;
  v41 = 0LL;
  if ( !*(_QWORD *)(result + 120) )
    return result;
  if ( a1 != gptiCurrent )
    LockW32Thread(a1, &v43);
  v8 = *(_DWORD *)(a1 + 480);
  if ( (v8 & 0x200) == 0 )
  {
    v6 = 1;
    *(_DWORD *)(a1 + 480) = v8 | 0x200;
  }
  v9 = *(_QWORD *)(a1 + 424);
  v10 = *(_QWORD *)(v9 + 104);
  if ( v10 )
  {
    *(_QWORD *)&v39 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v39;
    *((_QWORD *)&v39 + 1) = v10;
    HMLockObject(v10);
    xxxSendMessage(*(_QWORD *)(*(_QWORD *)(a1 + 424) + 104LL), 31LL, 0LL, 0LL);
    ThreadUnlock1(v30, v29, v31);
    SetWakeBit(a1, 2LL);
    v9 = *(_QWORD *)(a1 + 424);
  }
  v11 = *(_QWORD *)(v9 + 120);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 16);
    LockW32Thread(v12, &v41);
    *(_QWORD *)&v37 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v37;
    *((_QWORD *)&v37 + 1) = v11;
    HMLockObject(v11);
    v13 = (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v11 + 40) + 31LL) & 0x20) << 16;
    if ( (a3 & 1) == 0 && !anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v11, 0LL, 0LL) )
    {
      ThreadUnlock1(v15, v14, v16);
      result = PopAndFreeW32ThreadLock(&v41);
      goto LABEL_28;
    }
    xxxSendMessage(v11, 6LL, v13, 0LL);
    v17 = *(_QWORD *)(a1 + 424);
    if ( *(_QWORD *)(v17 + 120) == v11 )
    {
      v36 = *(_QWORD *)(v17 + 120);
      v35 = v17 + 128;
      HMAssignmentLock(&v35);
      CLockDomainExclusive<DLT_ACTIVE>::CLockDomainExclusive<DLT_ACTIVE>((__int64)&v35);
      HMAssignmentUnlock(*(_QWORD *)(a1 + 424) + 120LL);
    }
    SetOrClrWF(0LL, v11, 64LL, 1LL);
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 37LL, *(_QWORD *)v11);
    ThreadUnlock1(v19, v18, v20);
    v21 = *(_DWORD *)(v12 + 480) & 1;
    v22 = v12;
    if ( v21 )
      v22 = 0LL;
    v35 = v22;
    PopAndFreeW32ThreadLock(&v41);
    v23 = v21 == 0;
    v24 = 0LL;
    v4 = a3;
    if ( v23 )
      v24 = v12;
    v3 = a2;
  }
  else
  {
    v11 = -1LL;
    v35 = a1;
    v24 = a1;
  }
  if ( v24 )
  {
    v36 = v3;
    xxxSendActivateAppMessage((const struct tagAAS *)&v35);
  }
  result = *(_QWORD *)(a1 + 424);
  if ( *(_QWORD *)(result + 120) != v11 )
    goto LABEL_21;
  *(_QWORD *)&v37 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v37;
  *((_QWORD *)&v37 + 1) = v11;
  HMLockObject(v11);
  if ( (v4 & 1) != 0 || anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v11, 0LL, 0LL) )
  {
    xxxSendMessage(v11, 6LL, 0LL, 0LL);
    ThreadUnlock1(v33, v32, v34);
    result = *(_QWORD *)(a1 + 424);
    if ( *(_QWORD *)(result + 120) == v11 )
    {
      v36 = *(_QWORD *)(result + 120);
      v35 = result + 128;
      HMAssignmentLock(&v35);
      HMAssignmentUnlock(*(_QWORD *)(a1 + 424) + 120LL);
      result = *(_QWORD *)(a1 + 424);
    }
LABEL_21:
    if ( !*(_QWORD *)(result + 112) )
      goto LABEL_28;
    result = HMAssignmentUnlock(result + 112);
    v25 = (__int64 *)result;
    if ( !result )
      goto LABEL_28;
    *(_QWORD *)&v37 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v37;
    *((_QWORD *)&v37 + 1) = result;
    HMLockObject(result);
    if ( *(_QWORD *)(a1 + 424) == gpqForeground )
      zzzInputFocusLostWindowEvent((__int64)v25);
    xxxSendMessage(v25, 8LL, 0LL, 0LL);
    v28 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v25, 0, 0);
  }
  result = ThreadUnlock1(v28, v26, v27);
LABEL_28:
  if ( v6 )
    *(_DWORD *)(a1 + 480) &= ~0x200u;
  if ( a1 != gptiCurrent )
    return PopAndFreeW32ThreadLock(&v43);
  return result;
}
