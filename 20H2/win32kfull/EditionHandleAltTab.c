/*
 * XREFs of EditionHandleAltTab @ 0x1C01285A0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     PtiKbdFromQ @ 0x1C00BEA34 (PtiKbdFromQ.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C00BEC60 (AdjustPwndPtiPqForDelegation.c)
 *     SetNewForegroundQueue @ 0x1C00BF270 (SetNewForegroundQueue.c)
 *     HasHidTable @ 0x1C00D5400 (HasHidTable.c)
 *     PostInputMessage @ 0x1C00D6C28 (PostInputMessage.c)
 *     xxxCancelCoolSwitch @ 0x1C011D004 (xxxCancelCoolSwitch.c)
 */

_UNKNOWN **__fastcall EditionHandleAltTab(
        unsigned __int8 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int64 a5,
        struct tagINPUT_MESSAGE_SOURCE *a6,
        void *a7,
        unsigned __int16 a8)
{
  _UNKNOWN **result; // rax
  int v9; // r15d
  int v11; // r12d
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 *v15; // rbx
  __int64 v16; // rax
  __int128 *v17; // r11
  __int64 v18; // rax
  __int128 *v19; // r10
  __int64 v20; // r9
  __int128 *v21; // rdx
  __int64 v22; // xmm1_8
  __int128 v23; // xmm0
  __int64 v24; // xmm1_8
  __int128 v25; // xmm0
  __int64 v26; // xmm1_8
  __int128 v27; // xmm0
  __int64 v28; // xmm1_8
  __int128 v29; // xmm0
  __int64 v30; // xmm1_8
  __int128 v31; // xmm0
  __int64 v32; // xmm1_8
  __int128 v33; // xmm0
  __int64 v34; // xmm1_8
  struct tagWND *v35; // rbx
  __int64 v36; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // [rsp+78h] [rbp-39h] BYREF
  __int128 *v42; // [rsp+80h] [rbp-31h] BYREF
  __int64 v43; // [rsp+88h] [rbp-29h] BYREF
  __int64 v44; // [rsp+90h] [rbp-21h] BYREF
  _QWORD v45[3]; // [rsp+98h] [rbp-19h] BYREF
  __int128 v46; // [rsp+B0h] [rbp-1h]
  __int64 v47; // [rsp+C0h] [rbp+Fh]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+3Fh] BYREF

  result = &retaddr;
  v9 = a3;
  v11 = a2;
  v12 = a1;
  v45[2] = 0LL;
  if ( gspwndAltTab )
  {
    if ( gpqForeground )
    {
      v13 = PtiKbdFromQ(gpqForeground);
      if ( !(unsigned int)HasHidTable(v13)
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424) + 832LL) + 100LL) & 0x20) == 0 )
      {
        *(_DWORD *)(gpqForeground + 388LL) |= 0x80u;
        v42 = (__int128 *)gpqForeground;
        v44 = 0LL;
        v43 = 0LL;
        v41 = 0;
        if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                             (__int64 *)&v42,
                             &v44,
                             (struct tagTHREADINFO **)&v43,
                             a8,
                             a6,
                             &v41) )
        {
          v14 = *((_QWORD *)v42 + 15);
          if ( v14 )
            v14 = *(_QWORD *)(v14 + 16);
          v15 = (__int128 *)gObjDummyLock;
          if ( v14 )
            v15 = (__int128 *)(v14 + 392);
          v16 = *((_QWORD *)v42 + 11);
          v17 = (__int128 *)gObjDummyLock;
          if ( v16 )
            v17 = (__int128 *)(v16 + 392);
          v18 = *((_QWORD *)v42 + 12);
          v19 = (__int128 *)gObjDummyLock;
          if ( v18 )
            v19 = (__int128 *)(v18 + 392);
          v20 = gObjDummyLock;
          if ( v43 )
            v20 = v43 + 392;
          v21 = (__int128 *)gObjDummyLock;
          if ( v44 )
            v21 = (__int128 *)(v44 + 56);
          v22 = *((_QWORD *)&gpsiLock + 2);
          v46 = gpsiLock;
          v23 = *v21;
          v47 = v22;
          v24 = *((_QWORD *)v21 + 2);
          v46 = v23;
          v25 = *(_OWORD *)v20;
          v47 = v24;
          v26 = *(_QWORD *)(v20 + 16);
          v46 = v25;
          v27 = *v42;
          v47 = v26;
          v28 = *((_QWORD *)v42 + 2);
          v46 = v27;
          v29 = *v19;
          v47 = v28;
          v30 = *((_QWORD *)v19 + 2);
          v46 = v29;
          v31 = *v17;
          v47 = v30;
          v32 = *((_QWORD *)v17 + 2);
          v46 = v31;
          v33 = *v15;
          v47 = v32;
          v34 = *((_QWORD *)v15 + 2);
          v46 = v33;
          v47 = v34;
          PostInputMessage(gpqForeground, 0LL, a8, v12, ((v9 | v11) << 16) | 1, a4, 0LL, a5, 0, a6, a7, 0LL, v41, v43);
        }
      }
    }
    result = (_UNKNOWN **)xxxCancelCoolSwitch();
    v35 = gspwndActivate;
    if ( gspwndActivate )
    {
      v36 = *((_QWORD *)gspwndActivate + 2);
      if ( gpqForeground == *(_QWORD *)(v36 + 432) )
      {
        SetNewForegroundQueue(0LL);
        v36 = *((_QWORD *)v35 + 2);
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, (struct tagTHREADINFO *)v36, 0);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v45[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v45;
      v45[1] = v35;
      HMLockObject(v35);
      xxxSetForegroundWindow2((__int64)v35, 0LL, 18);
      if ( (*(_BYTE *)(*((_QWORD *)v35 + 5) + 31LL) & 0x40) != 0 )
        xxxSetWindowPos(v35, 0LL, 0LL, 0LL, 0, 0, 16387);
      ThreadUnlock1(v39, v38, v40);
      return (_UNKNOWN **)HMAssignmentUnlock(&gspwndActivate);
    }
  }
  return result;
}
