/*
 * XREFs of ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0223280
 * Callers:
 *     xxxSysCommand @ 0x1C01266FC (xxxSysCommand.c)
 * Callees:
 *     AdjustPwndPtiPqForDelegation @ 0x1C00BEC60 (AdjustPwndPtiPqForDelegation.c)
 *     PostInputMessage @ 0x1C00D6C28 (PostInputMessage.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C011B3B0 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0128DE0 (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0210DA4 (WPP_RECORDER_SF_qd.c)
 */

void __fastcall DelegateMoveSizeToShell(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  struct tagWND *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rcx
  unsigned __int16 v9; // r14
  int v10; // ecx
  __int16 v11; // bx
  _OWORD *v12; // rax
  int v13; // ecx
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rax
  __int128 *v17; // r10
  __int64 v18; // rax
  __int128 *v19; // r9
  __int64 v20; // rax
  __int128 *v21; // r8
  __int64 v22; // xmm1_8
  __int128 v23; // xmm0
  __int64 v24; // xmm1_8
  __int128 v25; // xmm0
  __int64 v26; // xmm1_8
  struct tagQ *v27; // rcx
  __int128 v28; // xmm0
  __int64 v29; // xmm1_8
  __int128 v30; // xmm0
  __int64 v31; // xmm1_8
  __int128 v32; // xmm0
  __int64 v33; // xmm1_8
  __int128 v34; // xmm0
  __int64 v35; // xmm1_8
  unsigned __int64 v36; // [rsp+30h] [rbp-D0h]
  int v37; // [rsp+70h] [rbp-90h] BYREF
  __int128 v38; // [rsp+78h] [rbp-88h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  __int64 v40; // [rsp+90h] [rbp-70h] BYREF
  struct tagWND *v41; // [rsp+98h] [rbp-68h] BYREF
  __int128 *v42; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v44[28]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v45[7]; // [rsp+120h] [rbp+20h] BYREF

  v3 = *((_QWORD *)a1 + 3);
  v4 = *((_QWORD *)a1 + 2);
  v5 = a1;
  v6 = (unsigned int)a2;
  v41 = a1;
  v7 = *(_QWORD *)(v3 + 328);
  v43 = v4;
  if ( !(_DWORD)a2 || (LOBYTE(a2) = 1, (_DWORD)v6 == 10) )
    LOBYTE(a2) = 0;
  v8 = *(_QWORD *)(v7 + 16);
  v9 = 0;
  if ( *(_QWORD *)(v4 + 432) != *(_QWORD *)(v8 + 432) )
    *(_DWORD *)(v8 + 488) |= 0x20u;
  if ( (_BYTE)a2 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)(v4 + 432) + 388LL);
    if ( (v10 & 0x800000) != 0 || (v10 & 0x1000000) != 0 )
    {
      v11 = word_1C0339AE0[0];
      if ( CTouchProcessor::ThreadHasPrimaryCapture(
             gpTouchProcessor,
             (struct tagTHREADINFO *const)v4,
             word_1C0339AE0[0]) )
      {
        v9 = v11;
      }
    }
    else
    {
      v9 = 1;
    }
    v12 = INPUTDEST_FROM_PWND(v44, v7);
    v45[0] = *v12;
    v45[1] = v12[1];
    v45[2] = v12[2];
    v45[3] = v12[3];
    v45[4] = v12[4];
    v45[5] = v12[5];
    v45[6] = v12[6];
    ForceCapture(1LL, v45);
    v40 = 0LL;
    SetSystemInputSource(&v40);
    v13 = *(unsigned __int16 *)(v4 + 764) | (*(unsigned __int16 *)(v4 + 768) << 16);
    v37 = 0;
    v42 = *(__int128 **)(v4 + 432);
    v14 = v13;
    if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                         (__int64 *)&v42,
                         (__int64 *)&v41,
                         (struct tagTHREADINFO **)&v43,
                         0x202u,
                         &v40,
                         &v37) )
    {
      v15 = *((_QWORD *)v42 + 15);
      if ( v15 )
        v16 = *(_QWORD *)(v15 + 16);
      else
        v16 = 0LL;
      v17 = (__int128 *)gObjDummyLock;
      if ( v16 )
        v17 = (__int128 *)(v16 + 392);
      v18 = *((_QWORD *)v42 + 11);
      v19 = (__int128 *)gObjDummyLock;
      if ( v18 )
        v19 = (__int128 *)(v18 + 392);
      v20 = *((_QWORD *)v42 + 12);
      v21 = (__int128 *)gObjDummyLock;
      if ( v20 )
        v21 = (__int128 *)(v20 + 392);
      v5 = v41;
      v22 = *((_QWORD *)&gpsiLock + 2);
      v38 = gpsiLock;
      v23 = *(_OWORD *)((char *)v41 + 56);
      v39 = v22;
      v24 = *((_QWORD *)v41 + 9);
      v38 = v23;
      v25 = *(_OWORD *)(v43 + 392);
      v39 = v24;
      v26 = *(_QWORD *)(v43 + 408);
      v27 = *(struct tagQ **)(v43 + 432);
      v38 = v25;
      v28 = *v42;
      v39 = v26;
      v29 = *((_QWORD *)v42 + 2);
      v38 = v28;
      v30 = *v21;
      v39 = v29;
      v31 = *((_QWORD *)v21 + 2);
      v38 = v30;
      v32 = *v19;
      v39 = v31;
      v33 = *((_QWORD *)v19 + 2);
      v38 = v32;
      v34 = *v17;
      v39 = v33;
      v35 = *((_QWORD *)v17 + 2);
      v38 = v34;
      v39 = v35;
      PostInputMessage(
        v27,
        v41,
        0x202u,
        0LL,
        v14,
        0,
        0LL,
        0LL,
        0,
        (struct tagINPUT_MESSAGE_SOURCE *)&v40,
        0LL,
        0LL,
        v37,
        v43);
    }
    else
    {
      v5 = v41;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v36) = v6;
    WPP_RECORDER_SF_qd(v8, a2, a3, 0xCu, (__int64)&WPP_df8d2832c9f0384c87c95eb8329d57df_Traceguids, v5, v36);
  }
  anonymous_namespace_::NotifyShellSimplePayload(*(_QWORD *)v5, 4, v6, v9);
}
