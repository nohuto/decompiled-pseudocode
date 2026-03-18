/*
 * XREFs of EditionHandleAltTab @ 0x1C0126BE0
 * Callers:
 *     <none>
 * Callees:
 *     SetNewForegroundQueue @ 0x1C0033BA0 (SetNewForegroundQueue.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     HasHidTable @ 0x1C0090220 (HasHidTable.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     PtiKbdFromQ @ 0x1C00B04B8 (PtiKbdFromQ.c)
 *     PostInputMessage @ 0x1C00B19CC (PostInputMessage.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C00F9BD0 (AdjustPwndPtiPqForDelegation.c)
 *     xxxCancelCoolSwitch @ 0x1C011C044 (xxxCancelCoolSwitch.c)
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
  __int64 v35; // r8
  struct tagWND *v36; // rbx
  __int64 v37; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // [rsp+78h] [rbp-39h] BYREF
  __int128 *v43; // [rsp+80h] [rbp-31h] BYREF
  __int64 v44; // [rsp+88h] [rbp-29h] BYREF
  __int64 v45; // [rsp+90h] [rbp-21h] BYREF
  _QWORD v46[3]; // [rsp+98h] [rbp-19h] BYREF
  __int128 v47; // [rsp+B0h] [rbp-1h]
  __int64 v48; // [rsp+C0h] [rbp+Fh]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+3Fh] BYREF

  result = &retaddr;
  v9 = a3;
  v11 = a2;
  v12 = a1;
  v46[2] = 0LL;
  if ( gspwndAltTab )
  {
    if ( gpqForeground )
    {
      v13 = PtiKbdFromQ(gpqForeground);
      if ( !(unsigned int)HasHidTable(v13)
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 416) + 832LL) + 100LL) & 0x20) == 0 )
      {
        *(_DWORD *)(gpqForeground + 388LL) |= 0x80u;
        v43 = (__int128 *)gpqForeground;
        v45 = 0LL;
        v44 = 0LL;
        v42 = 0;
        if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                             (__int64 *)&v43,
                             &v45,
                             (struct tagTHREADINFO **)&v44,
                             a8,
                             a6,
                             &v42) )
        {
          v14 = *((_QWORD *)v43 + 15);
          if ( v14 )
            v14 = *(_QWORD *)(v14 + 16);
          v15 = (__int128 *)gObjDummyLock;
          if ( v14 )
            v15 = (__int128 *)(v14 + 384);
          v16 = *((_QWORD *)v43 + 11);
          v17 = (__int128 *)gObjDummyLock;
          if ( v16 )
            v17 = (__int128 *)(v16 + 384);
          v18 = *((_QWORD *)v43 + 12);
          v19 = (__int128 *)gObjDummyLock;
          if ( v18 )
            v19 = (__int128 *)(v18 + 384);
          v20 = gObjDummyLock;
          if ( v44 )
            v20 = v44 + 384;
          v21 = (__int128 *)gObjDummyLock;
          if ( v45 )
            v21 = (__int128 *)(v45 + 56);
          v22 = *((_QWORD *)&gpsiLock + 2);
          v47 = gpsiLock;
          v23 = *v21;
          v48 = v22;
          v24 = *((_QWORD *)v21 + 2);
          v47 = v23;
          v25 = *(_OWORD *)v20;
          v48 = v24;
          v26 = *(_QWORD *)(v20 + 16);
          v47 = v25;
          v27 = *v43;
          v48 = v26;
          v28 = *((_QWORD *)v43 + 2);
          v47 = v27;
          v29 = *v19;
          v48 = v28;
          v30 = *((_QWORD *)v19 + 2);
          v47 = v29;
          v31 = *v17;
          v48 = v30;
          v32 = *((_QWORD *)v17 + 2);
          v47 = v31;
          v33 = *v15;
          v48 = v32;
          v34 = *((_QWORD *)v15 + 2);
          v47 = v33;
          v48 = v34;
          PostInputMessage(gpqForeground, 0LL, a8, v12, ((v9 | v11) << 16) | 1, a4, 0LL, a5, 0, a6, a7, 0LL, v42, v44);
        }
      }
    }
    result = (_UNKNOWN **)xxxCancelCoolSwitch();
    v36 = gspwndActivate;
    if ( gspwndActivate )
    {
      v37 = *((_QWORD *)gspwndActivate + 2);
      if ( gpqForeground == *(_QWORD *)(v37 + 424) )
      {
        SetNewForegroundQueue(0LL, v37, v35);
        v37 = *((_QWORD *)v36 + 2);
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, (struct tagTHREADINFO *)v37, 0);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v46[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v46;
      v46[1] = v36;
      HMLockObject(v36);
      xxxSetForegroundWindow2((__int64)v36, 0LL, 18);
      if ( (*(_BYTE *)(*((_QWORD *)v36 + 5) + 31LL) & 0x40) != 0 )
        xxxSetWindowPos(v36, 0LL, 0LL, 0LL, 0, 0, 16387);
      ThreadUnlock1(v40, v39, v41);
      return (_UNKNOWN **)HMAssignmentUnlock(&gspwndActivate);
    }
  }
  return result;
}
