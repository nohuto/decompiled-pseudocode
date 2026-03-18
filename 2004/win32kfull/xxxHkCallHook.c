/*
 * XREFs of xxxHkCallHook @ 0x1C009AFE0
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C009A2E0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0044FDC (fnHkINLPCBTCREATESTRUCT.c)
 *     fnHkINDWORD @ 0x1C0090F64 (fnHkINDWORD.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C009B4D0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     fnHkINLPMSG @ 0x1C009B630 (fnHkINLPMSG.c)
 *     SfnDWORD @ 0x1C00A3480 (SfnDWORD.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C010DC94 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C014EE30 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C0231818 (fnHkINLPDEBUGHOOKSTRUCT.c)
 *     fnHkINLPKBDLLHOOKSTRUCT @ 0x1C02319F8 (fnHkINLPKBDLLHOOKSTRUCT.c)
 *     fnHkINLPMSLLHOOKSTRUCT @ 0x1C0231B70 (fnHkINLPMSLLHOOKSTRUCT.c)
 *     fnHkINLPRECT @ 0x1C0231CEC (fnHkINLPRECT.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C0231EE0 (fnHkOPTINLPEVENTMSG.c)
 *     ??1CCheckLLHookTime@@QEAA@XZ @ 0x1C0248194 (--1CCheckLLHookTime@@QEAA@XZ.c)
 */

__int64 __fastcall xxxHkCallHook(__int64 a1, int a2, __int64 a3, __int64 *a4)
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
  __int64 v15; // rdx
  struct _KTHREAD *v16; // r12
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 *v21; // rax
  __int64 CurrentProcessWin32Process; // rax
  _DWORD *v23; // r15
  int v24; // edx
  __int64 *v25; // rdi
  __int64 *v26; // r9
  int v27; // r8d
  bool v28; // zf
  __int64 v29; // rax
  __int64 *v30; // rcx
  __int64 v31; // r12
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 *v35; // rax
  unsigned __int64 *v36; // r12
  unsigned __int64 v37; // rax
  __int64 v38; // rdi
  unsigned __int64 v39; // rax
  unsigned int v40; // esi
  int v41; // edi
  __int64 (__fastcall **v42)(int, int, int, int, __int64, __int64); // rbx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v46; // rax
  int v47; // eax
  unsigned __int16 v48; // r10
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v51; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v53; // rax
  int v54; // edi
  __int64 v55; // rcx
  __int64 v56; // rax
  int v57; // ecx
  __int64 v58; // rax
  int v59; // edi
  __int64 v60; // rcx
  __int64 v61; // rax
  unsigned int v62; // r13d
  int v63; // eax
  __int64 (__fastcall **v64)(int, int, int, int, __int64, __int64); // rdi
  __int64 v65; // rcx
  __int64 *v66; // [rsp+50h] [rbp-C8h]
  __int64 v67; // [rsp+50h] [rbp-C8h]
  __int64 *v68; // [rsp+58h] [rbp-C0h]
  char v69; // [rsp+58h] [rbp-C0h]
  __int64 v70; // [rsp+60h] [rbp-B8h]
  struct _KTHREAD *v71; // [rsp+68h] [rbp-B0h]
  unsigned __int64 v72; // [rsp+68h] [rbp-B0h]
  __int64 *v73; // [rsp+70h] [rbp-A8h]
  __int64 v74; // [rsp+88h] [rbp-90h] BYREF
  int v75; // [rsp+90h] [rbp-88h]
  __int64 v76; // [rsp+98h] [rbp-80h]
  __int64 v77; // [rsp+A0h] [rbp-78h] BYREF
  int v78; // [rsp+A8h] [rbp-70h]
  __int64 v79; // [rsp+B0h] [rbp-68h]
  unsigned int v80; // [rsp+120h] [rbp+8h]

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
            CurrentThreadProcess = PsGetCurrentThreadProcess(v51),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v10 = *ThreadWin32Thread;
      }
      v15 = *(int *)(a1 + 68);
      v8 = *(_QWORD *)(a1 + 56) + *(_QWORD *)(*(_QWORD *)(v10 + 416) + 8 * v15 + 408);
      if ( (_DWORD)v15 != -1 )
      {
        v16 = KeGetCurrentThread();
        v17 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(a1)
          || (v53 = PsGetCurrentProcess(v19, v18, v20),
              v54 = PsGetProcessSessionIdEx(v53),
              v56 = PsGetCurrentThreadProcess(v55),
              v54 == (unsigned int)PsGetProcessSessionIdEx(v56)) )
        {
          v21 = (__int64 *)PsGetThreadWin32Thread(v16);
          if ( v21 )
            v17 = *v21;
        }
        *(_QWORD *)(*(_QWORD *)(v17 + 472) + 224LL) |= 0x200uLL;
        v5 = a3;
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    v80 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(CurrentProcessWin32Process + 280));
    v23 = (_DWORD *)(a1 + 64);
    v24 = *(_DWORD *)(a1 + 64) & 2;
    if ( v24 )
    {
      v68 = (__int64 *)(gpsi + 536LL);
      v25 = (__int64 *)(gpsi + 528LL);
      v26 = (__int64 *)(gpsi + 544LL);
    }
    else
    {
      v68 = (__int64 *)(gpsi + 728LL);
      v25 = (__int64 *)(gpsi + 720LL);
      v26 = (__int64 *)(gpsi + 736LL);
    }
    v66 = v25;
    v27 = *(_DWORD *)(a1 + 48);
    v28 = v27 == 4;
    if ( v27 != 4 )
    {
      if ( v27 == 3 )
      {
LABEL_37:
        LOBYTE(v7) = v24 != 0;
        v46 = fnHkINLPMSG((unsigned __int16)a2 | ((unsigned __int16)v27 << 16), v5, (_DWORD)a4, v8, *v26, v7, a1 + 64);
      }
      else
      {
        switch ( v27 )
        {
          case -1:
          case 6:
            goto LABEL_37;
          case 0:
            v46 = fnHkOPTINLPEVENTMSG((unsigned __int16)a2 | ((unsigned __int16)v27 << 16), v5, (_DWORD)a4, v8, *v26);
            break;
          case 1:
            v46 = fnHkOPTINLPEVENTMSG(
                    (unsigned __int16)a2 | ((unsigned __int16)v27 << 16),
                    *(_QWORD *)a1,
                    (_DWORD)a4,
                    v8,
                    *v26);
            *v23 &= ~4u;
            break;
          case 2:
          case 11:
            v48 = a2;
            goto LABEL_49;
          case 5:
            v48 = a2;
            if ( a2 == 3 )
            {
              LOBYTE(v7) = v24 != 0;
              v7 = fnHkINLPCBTCREATESTRUCT(((unsigned __int16)v27 << 16) | 3u, v5, a4, v8, v7);
              goto LABEL_35;
            }
            if ( a2 )
            {
              if ( a2 == 5 )
              {
                v7 = fnHkINLPCBTACTIVATESTRUCT(((unsigned __int16)v27 << 16) | 5u, v5, (_DWORD)a4, v8, *v26);
              }
              else if ( a2 == 6 )
              {
LABEL_53:
                v7 = fnHkINLPMOUSEHOOKSTRUCTEX(v48 | ((unsigned __int16)v27 << 16), v5, (_DWORD)a4, v8, *v26, a1 + 64);
              }
              else
              {
LABEL_49:
                v7 = fnHkINDWORD(v48 | ((unsigned __int16)v27 << 16), v5, (__int64)a4, v8, *v26, (_DWORD *)(a1 + 64));
              }
              goto LABEL_35;
            }
            v57 = (unsigned __int16)v27 << 16;
LABEL_61:
            v46 = fnHkINLPRECT(v57, v5, (_DWORD)a4, v8, *v26);
            break;
          case 7:
            v48 = a2;
            goto LABEL_53;
          case 9:
            v46 = fnHkINLPDEBUGHOOKSTRUCT((unsigned __int16)a2 | ((unsigned __int16)v27 << 16), v5, a4, v8, *v26);
            break;
          case 10:
            v48 = a2;
            if ( a2 != 5 )
              goto LABEL_49;
            v57 = ((unsigned __int16)v27 << 16) | 5;
            goto LABEL_61;
          case 12:
            v28 = v27 == 4;
            v29 = a4[5];
            goto LABEL_15;
          case 13:
            v74 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
            v75 = v27;
            v76 = v8;
            *(_DWORD *)(gptiCurrent + 688LL) = 1;
            v7 = fnHkINLPKBDLLHOOKSTRUCT(
                   (unsigned __int16)a2 | (*(unsigned __int16 *)(a1 + 48) << 16),
                   v5,
                   (_DWORD)a4,
                   v8,
                   *v26);
            CCheckLLHookTime::~CCheckLLHookTime((CCheckLLHookTime *)&v74);
            goto LABEL_35;
          case 14:
            v77 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
            v78 = v27;
            v79 = v8;
            *(_DWORD *)(gptiCurrent + 688LL) = 1;
            v7 = fnHkINLPMSLLHOOKSTRUCT(
                   (unsigned __int16)a2 | (*(unsigned __int16 *)(a1 + 48) << 16),
                   v5,
                   (_DWORD)a4,
                   v8,
                   *v26);
            CCheckLLHookTime::~CCheckLLHookTime((CCheckLLHookTime *)&v77);
            goto LABEL_35;
          default:
            goto LABEL_35;
        }
      }
      v7 = v46;
      goto LABEL_35;
    }
    v29 = a4[4];
LABEL_15:
    v70 = v29;
    v30 = 0LL;
    if ( !v28 )
      v30 = a4;
    v73 = v30;
    if ( !v28 )
      a4 = 0LL;
    if ( v29 && (*(_DWORD *)(v29 + 84) & 5) != 0 )
    {
LABEL_35:
      W32SetCurrentThreadDpiAwarenessContext(v80);
      return v7;
    }
    v71 = KeGetCurrentThread();
    v31 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v30)
      || (v58 = PsGetCurrentProcess(v33, v32, v34),
          v59 = PsGetProcessSessionIdEx(v58),
          v61 = PsGetCurrentThreadProcess(v60),
          v28 = v59 == (unsigned int)PsGetProcessSessionIdEx(v61),
          v25 = v66,
          v28) )
    {
      v35 = (__int64 *)PsGetThreadWin32Thread(v71);
      if ( v35 )
        v31 = *v35;
    }
    v36 = *(unsigned __int64 **)(v31 + 472);
    if ( *(_DWORD *)(a1 + 48) == 4 )
    {
      v67 = *v25;
    }
    else
    {
      v67 = *v68;
      v36[13] = *v73;
    }
    v37 = *v36;
    v38 = *v36 & 0x10;
    v69 = v38;
    v72 = v36[13];
    if ( a3 )
      v39 = v37 | 0x10;
    else
      v39 = v37 & 0xFFFFFFFFFFFFFFEFuLL;
    *v36 = v39;
    if ( *(_DWORD *)(a1 + 48) == 4 )
    {
      v40 = *((_DWORD *)a4 + 4);
      if ( (v40 & 0x1FFFF) >= 0x400 )
      {
        v47 = _HMObjectFromHandle(a4[3]);
        v44 = SfnDWORD(v47, v40, a4[1], *a4, v8, v67);
      }
      else
      {
        if ( (*v23 & 2) != 0 )
          v41 = 3;
        else
          v41 = 2;
        v42 = &gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v40]];
        v43 = _HMObjectFromHandle(a4[3]);
        v44 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, __int64, int, __int64))*v42)(
                v43,
                v40,
                a4[1],
                *a4,
                v8,
                v67,
                v41,
                v70);
      }
    }
    else
    {
      v62 = *((_DWORD *)v73 + 6);
      if ( (v62 & 0x1FFFF) >= 0x400 )
      {
        v63 = _HMObjectFromHandle(v73[4]);
        v44 = SfnDWORD(v63, v62, v73[2], v73[1], v8, v67);
        goto LABEL_34;
      }
      v64 = &gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v62]];
      LOBYTE(v7) = (*v23 & 2) != 0;
      v65 = _HMObjectFromHandle(v73[4]);
      v44 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, __int64, int, __int64))*v64)(
              v65,
              v62,
              v73[2],
              v73[1],
              v8,
              v67,
              (int)v7 + 2,
              v70);
    }
    LOBYTE(v38) = v69;
LABEL_34:
    v7 = v44;
    *v36 ^= ((unsigned __int8)v38 ^ (unsigned __int8)*v36) & 0x10;
    v36[13] = v72;
    goto LABEL_35;
  }
  return 0LL;
}
