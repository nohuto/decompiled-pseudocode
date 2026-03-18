/*
 * XREFs of xxxHkCallHook @ 0x1C0056CC0
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0055FC0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     SfnDWORD @ 0x1C004CB10 (SfnDWORD.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00571B0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     fnHkINLPMSG @ 0x1C0057310 (fnHkINLPMSG.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0071090 (fnHkINLPCBTCREATESTRUCT.c)
 *     fnHkINDWORD @ 0x1C00D6144 (fnHkINDWORD.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C010F9B8 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C015146C (fnHkINLPCBTACTIVATESTRUCT.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C0230988 (fnHkINLPDEBUGHOOKSTRUCT.c)
 *     fnHkINLPKBDLLHOOKSTRUCT @ 0x1C0230B68 (fnHkINLPKBDLLHOOKSTRUCT.c)
 *     fnHkINLPMSLLHOOKSTRUCT @ 0x1C0230CE0 (fnHkINLPMSLLHOOKSTRUCT.c)
 *     fnHkINLPRECT @ 0x1C0230E5C (fnHkINLPRECT.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C0231050 (fnHkOPTINLPEVENTMSG.c)
 *     ??1CCheckLLHookTime@@QEAA@XZ @ 0x1C0246BE4 (--1CCheckLLHookTime@@QEAA@XZ.c)
 */

__int64 __fastcall xxxHkCallHook(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // r12
  __int64 v7; // rbx
  __int64 v8; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v15; // r12
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 *v20; // rax
  __int64 CurrentProcessWin32Process; // rax
  _DWORD *v22; // r15
  int v23; // edx
  __int64 *v24; // rdi
  __int64 *v25; // r9
  int v26; // r8d
  bool v27; // zf
  __int64 v28; // rax
  _QWORD *v29; // rcx
  __int64 v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 *v34; // rax
  unsigned __int64 *v35; // r12
  unsigned __int64 v36; // rax
  __int64 v37; // rdi
  unsigned __int64 v38; // rax
  unsigned int v39; // esi
  int v40; // edi
  __int64 (__fastcall **v41)(int, int, int, int, __int64, __int64); // rbx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v45; // rax
  __int64 *v46; // rax
  unsigned __int16 v47; // r10
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v50; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v52; // rax
  int v53; // edi
  __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // ecx
  __int64 v57; // rax
  int v58; // edi
  __int64 v59; // rcx
  __int64 v60; // rax
  unsigned int v61; // r13d
  __int64 *v62; // rax
  __int64 (__fastcall **v63)(int, int, int, int, __int64, __int64); // rdi
  __int64 v64; // rcx
  __int64 *v65; // [rsp+50h] [rbp-C8h]
  __int64 v66; // [rsp+50h] [rbp-C8h]
  __int64 *v67; // [rsp+58h] [rbp-C0h]
  char v68; // [rsp+58h] [rbp-C0h]
  __int64 v69; // [rsp+60h] [rbp-B8h]
  struct _KTHREAD *v70; // [rsp+68h] [rbp-B0h]
  unsigned __int64 v71; // [rsp+68h] [rbp-B0h]
  _QWORD *v72; // [rsp+70h] [rbp-A8h]
  __int64 v73; // [rsp+88h] [rbp-90h] BYREF
  int v74; // [rsp+90h] [rbp-88h]
  __int64 v75; // [rsp+98h] [rbp-80h]
  __int64 v76; // [rsp+A0h] [rbp-78h] BYREF
  int v77; // [rsp+A8h] [rbp-70h]
  __int64 v78; // [rsp+B0h] [rbp-68h]
  unsigned int v79; // [rsp+120h] [rbp+8h]
  int v80; // [rsp+128h] [rbp+10h]

  v80 = a2;
  v5 = a3;
  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 56);
  if ( v8 )
  {
    if ( *(_DWORD *)(a1 + 68) != -1 )
    {
      CurrentThread = KeGetCurrentThread();
      v10 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(a1)
        || (CurrentProcess = PsGetCurrentProcess(v12, v11, v13),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v50),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v10 = *ThreadWin32Thread;
      }
      a2 = *(int *)(a1 + 68);
      v8 = *(_QWORD *)(a1 + 56) + *(_QWORD *)(*(_QWORD *)(v10 + 424) + 8 * a2 + 408);
      if ( (_DWORD)a2 != -1 )
      {
        v15 = KeGetCurrentThread();
        v16 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(a1)
          || (v52 = PsGetCurrentProcess(v18, v17, v19),
              v53 = PsGetProcessSessionIdEx(v52),
              v55 = PsGetCurrentThreadProcess(v54),
              v53 == (unsigned int)PsGetProcessSessionIdEx(v55)) )
        {
          v20 = (__int64 *)PsGetThreadWin32Thread(v15);
          if ( v20 )
            v16 = *v20;
        }
        *(_QWORD *)(*(_QWORD *)(v16 + 480) + 224LL) |= 0x200uLL;
        v5 = a3;
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
    v79 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(CurrentProcessWin32Process + 280));
    v22 = (_DWORD *)(a1 + 64);
    v23 = *(_DWORD *)(a1 + 64) & 2;
    if ( v23 )
    {
      v67 = (__int64 *)(gpsi + 536LL);
      v24 = (__int64 *)(gpsi + 528LL);
      v25 = (__int64 *)(gpsi + 544LL);
    }
    else
    {
      v67 = (__int64 *)(gpsi + 728LL);
      v24 = (__int64 *)(gpsi + 720LL);
      v25 = (__int64 *)(gpsi + 736LL);
    }
    v65 = v24;
    v26 = *(_DWORD *)(a1 + 48);
    v27 = v26 == 4;
    if ( v26 != 4 )
    {
      if ( v26 == 3 )
      {
LABEL_37:
        LOBYTE(v7) = v23 != 0;
        v45 = fnHkINLPMSG((unsigned __int16)v80 | ((unsigned __int16)v26 << 16), v5, (_DWORD)a4, v8, *v25, v7, a1 + 64);
      }
      else
      {
        switch ( v26 )
        {
          case -1:
          case 6:
            goto LABEL_37;
          case 0:
            v45 = fnHkOPTINLPEVENTMSG((unsigned __int16)v80 | ((unsigned __int16)v26 << 16), v5, (_DWORD)a4, v8, *v25);
            break;
          case 1:
            v45 = fnHkOPTINLPEVENTMSG(
                    (unsigned __int16)v80 | ((unsigned __int16)v26 << 16),
                    *(_QWORD *)a1,
                    (_DWORD)a4,
                    v8,
                    *v25);
            *v22 &= ~4u;
            break;
          case 2:
          case 11:
            v47 = v80;
            goto LABEL_49;
          case 5:
            v47 = v80;
            if ( v80 == 3 )
            {
              LOBYTE(v7) = v23 != 0;
              v7 = fnHkINLPCBTCREATESTRUCT(((unsigned __int16)v26 << 16) | 3u, v5, (_DWORD)a4, v8, v7);
              goto LABEL_35;
            }
            if ( v80 )
            {
              if ( v80 == 5 )
              {
                v7 = fnHkINLPCBTACTIVATESTRUCT(((unsigned __int16)v26 << 16) | 5u, v5, (_DWORD)a4, v8, *v25);
              }
              else if ( v80 == 6 )
              {
LABEL_53:
                v7 = fnHkINLPMOUSEHOOKSTRUCTEX(v47 | ((unsigned __int16)v26 << 16), v5, (_DWORD)a4, v8, *v25, a1 + 64);
              }
              else
              {
LABEL_49:
                v7 = fnHkINDWORD(v47 | ((unsigned __int16)v26 << 16), v5, (_DWORD)a4, v8, *v25, a1 + 64);
              }
              goto LABEL_35;
            }
            v56 = (unsigned __int16)v26 << 16;
LABEL_61:
            v45 = fnHkINLPRECT(v56, v5, (_DWORD)a4, v8, *v25);
            break;
          case 7:
            v47 = v80;
            goto LABEL_53;
          case 9:
            v45 = fnHkINLPDEBUGHOOKSTRUCT((unsigned __int16)v80 | ((unsigned __int16)v26 << 16), v5, a4, v8, *v25);
            break;
          case 10:
            v47 = v80;
            if ( v80 != 5 )
              goto LABEL_49;
            v56 = ((unsigned __int16)v26 << 16) | 5;
            goto LABEL_61;
          case 12:
            v27 = v26 == 4;
            v28 = a4[5];
            goto LABEL_15;
          case 13:
            v73 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
            v74 = v26;
            v75 = v8;
            *(_DWORD *)(gptiCurrent + 696LL) = 1;
            v7 = fnHkINLPKBDLLHOOKSTRUCT(
                   (unsigned __int16)v80 | (*(unsigned __int16 *)(a1 + 48) << 16),
                   v5,
                   (_DWORD)a4,
                   v8,
                   *v25);
            CCheckLLHookTime::~CCheckLLHookTime((CCheckLLHookTime *)&v73);
            goto LABEL_35;
          case 14:
            v76 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
            v77 = v26;
            v78 = v8;
            *(_DWORD *)(gptiCurrent + 696LL) = 1;
            v7 = fnHkINLPMSLLHOOKSTRUCT(
                   (unsigned __int16)v80 | (*(unsigned __int16 *)(a1 + 48) << 16),
                   v5,
                   (_DWORD)a4,
                   v8,
                   *v25);
            CCheckLLHookTime::~CCheckLLHookTime((CCheckLLHookTime *)&v76);
            goto LABEL_35;
          default:
            goto LABEL_35;
        }
      }
      v7 = v45;
      goto LABEL_35;
    }
    v28 = a4[4];
LABEL_15:
    v69 = v28;
    v29 = 0LL;
    if ( !v27 )
      v29 = a4;
    v72 = v29;
    if ( !v27 )
      a4 = 0LL;
    if ( v28 && (*(_DWORD *)(v28 + 84) & 5) != 0 )
    {
LABEL_35:
      W32SetCurrentThreadDpiAwarenessContext(v79);
      return v7;
    }
    v70 = KeGetCurrentThread();
    v30 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v29)
      || (v57 = PsGetCurrentProcess(v32, v31, v33),
          v58 = PsGetProcessSessionIdEx(v57),
          v60 = PsGetCurrentThreadProcess(v59),
          v27 = v58 == (unsigned int)PsGetProcessSessionIdEx(v60),
          v24 = v65,
          v27) )
    {
      v34 = (__int64 *)PsGetThreadWin32Thread(v70);
      if ( v34 )
        v30 = *v34;
    }
    v35 = *(unsigned __int64 **)(v30 + 480);
    if ( *(_DWORD *)(a1 + 48) == 4 )
    {
      v66 = *v24;
    }
    else
    {
      v66 = *v67;
      v35[13] = *v72;
    }
    v36 = *v35;
    v37 = *v35 & 0x10;
    v68 = v37;
    v71 = v35[13];
    if ( a3 )
      v38 = v36 | 0x10;
    else
      v38 = v36 & 0xFFFFFFFFFFFFFFEFuLL;
    *v35 = v38;
    if ( *(_DWORD *)(a1 + 48) == 4 )
    {
      v39 = *((_DWORD *)a4 + 4);
      if ( (v39 & 0x1FFFF) >= 0x400 )
      {
        v46 = (__int64 *)_HMObjectFromHandle(a4[3]);
        v43 = SfnDWORD(v46, v39, a4[1], *a4, v8, v66);
      }
      else
      {
        if ( (*v22 & 2) != 0 )
          v40 = 3;
        else
          v40 = 2;
        v41 = &gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v39]];
        v42 = _HMObjectFromHandle(a4[3]);
        v43 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, __int64, __int64, int, __int64))*v41)(
                v42,
                v39,
                a4[1],
                *a4,
                v8,
                v66,
                v40,
                v69);
      }
    }
    else
    {
      v61 = *((_DWORD *)v72 + 6);
      if ( (v61 & 0x1FFFF) >= 0x400 )
      {
        v62 = (__int64 *)_HMObjectFromHandle(v72[4]);
        v43 = SfnDWORD(v62, v61, v72[2], v72[1], v8, v66);
        goto LABEL_34;
      }
      v63 = &gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v61]];
      LOBYTE(v7) = (*v22 & 2) != 0;
      v64 = _HMObjectFromHandle(v72[4]);
      v43 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, __int64, __int64, int, __int64))*v63)(
              v64,
              v61,
              v72[2],
              v72[1],
              v8,
              v66,
              (int)v7 + 2,
              v69);
    }
    LOBYTE(v37) = v68;
LABEL_34:
    v7 = v43;
    *v35 ^= ((unsigned __int8)v37 ^ (unsigned __int8)*v35) & 0x10;
    v35[13] = v71;
    goto LABEL_35;
  }
  return 0LL;
}
