/*
 * XREFs of ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0098440
 * Callers:
 *     xxxSendMessageCallback @ 0x1C0036784 (xxxSendMessageCallback.c)
 *     xxxReceiveMessage @ 0x1C0097200 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     SfnDWORD @ 0x1C00A3480 (SfnDWORD.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxDefWindowProc @ 0x1C00AF770 (xxxDefWindowProc.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01F0110 (PrepareSentPointerMessageForClient.c)
 */

void __fastcall xxxSendMessageToClient(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagSMS *a5,
        int a6,
        __int64 *a7)
{
  __int64 v7; // r12
  unsigned __int64 v8; // r15
  unsigned int v9; // edi
  int v11; // ecx
  char v12; // si
  __int64 v13; // r13
  BOOL v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned __int16 v19; // cx
  __int64 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r11
  __int64 v25; // rdx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v32; // rcx
  __int64 v33; // r15
  _QWORD *v34; // rdi
  ULONG v35; // r8d
  int v36; // esi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 *v40; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v43; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v45; // rax
  signed __int32 v46[8]; // [rsp+0h] [rbp-B8h] BYREF
  BOOL v47; // [rsp+30h] [rbp-88h]
  struct tagSMS *v48; // [rsp+38h] [rbp-80h]
  char v49; // [rsp+50h] [rbp-68h]
  BOOL v50; // [rsp+54h] [rbp-64h]
  __int128 v51; // [rsp+60h] [rbp-58h] BYREF
  __int64 v52; // [rsp+70h] [rbp-48h]
  unsigned int v53; // [rsp+C8h] [rbp+10h] BYREF
  unsigned __int64 v54; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v55; // [rsp+D8h] [rbp+20h] BYREF

  v55 = a4;
  v54 = a3;
  v53 = a2;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( a2 - 577 <= 0x16 && (v11 = 8122367, _bittest(&v11, a2 - 577)) || a2 == 528 && (_WORD)a3 == 582 )
  {
    if ( (_WORD)a3 != 1 )
    {
      if ( !(unsigned int)PrepareSentPointerMessageForClient(&v53, &v54, &v55, 0LL) )
      {
        *a7 = 0LL;
        return;
      }
      v7 = v55;
      v8 = v54;
      v9 = v53;
    }
  }
  v12 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 8;
  v49 = v12;
  v13 = 0LL;
  v14 = v12 != 0;
  v50 = v14;
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
  {
    CurrentThread = KeGetCurrentThread();
    v27 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v15)
      || (CurrentProcess = PsGetCurrentProcess(v29, v28, v30),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v43),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v27 = *ThreadWin32Thread;
    }
    v33 = *(_QWORD *)(v27 + 472);
    v34 = *(_QWORD **)(v33 + 248);
    _InterlockedOr(v46, 0);
    if ( v34 )
    {
      v35 = PsGetCurrentProcessWow64Process(v32) ? 1 : 4;
      ProbeForRead(v34, 0x20uLL, v35);
      if ( *v34 )
      {
        *(_QWORD *)(v33 + 224) |= 0x100uLL;
        v7 = v55;
        v8 = v54;
        v9 = v53;
LABEL_6:
        v16 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL);
        if ( (v9 & 0x1FFFF) >= 0x400 )
        {
          v48 = a5;
          v47 = v14;
          v17 = SfnDWORD((_DWORD)a1, v9, v8, v7, v16, *(_QWORD *)(gpsi + 752LL));
        }
        else
        {
          v17 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, __int64, __int64, _QWORD, BOOL, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v9]])(
                  a1,
                  v9,
                  v8,
                  v7,
                  v16,
                  *(_QWORD *)(gpsi + 752LL),
                  v14,
                  a5);
        }
LABEL_8:
        *a7 = v17;
        return;
      }
    }
    v7 = v55;
    v8 = v54;
    v9 = v53;
  }
  if ( gihmodUserApiHook >= 0 )
    goto LABEL_6;
  if ( gihmodDManipHook >= 0 )
    goto LABEL_6;
  if ( v9 == 90 )
    goto LABEL_6;
  v18 = *((_QWORD *)a1 + 5);
  v19 = *(_WORD *)(v18 + 42) & 0x3FFF;
  if ( (unsigned __int16)(v19 - 673) > 9u )
    goto LABEL_6;
  v20 = v19;
  v21 = v19 - 666LL;
  v22 = *(_QWORD *)(v18 + 120);
  if ( v22 != *(_QWORD *)(gpsi + 8 * v21 + 584) && v22 != *(_QWORD *)(gpsi + 8 * v21 + 392) )
    goto LABEL_6;
  v23 = 2 * v21;
  v24 = gSharedInfo[v23 + 6];
  if ( !v24
    || v9 <= LODWORD(gSharedInfo[v23 + 5])
    && ((unsigned __int8)(1 << (v9 & 7)) & *(_BYTE *)(((unsigned __int64)v9 >> 3) + v24)) != 0
    || (*(_BYTE *)(v18 + 18) & 1) != 0 )
  {
    LOBYTE(v13) = v12 != 0;
    v25 = gpsi + 8 * v20;
    if ( (v9 & 0x1FFFF) >= 0x400 )
    {
      v48 = a5;
      v47 = v14;
      v17 = SfnDWORD((_DWORD)a1, v9, v8, v7, v13, *(_QWORD *)(v25 - 4608));
    }
    else
    {
      v17 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, __int64, __int64, _QWORD, BOOL, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v9]])(
              a1,
              v9,
              v8,
              v7,
              v13,
              *(_QWORD *)(v25 - 4608),
              v14,
              a5);
    }
    goto LABEL_8;
  }
  v51 = 0LL;
  v52 = 0LL;
  v36 = a6;
  if ( a6 )
  {
    v45 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v51 = *(_QWORD *)(v45 + 408);
    *(_QWORD *)(v45 + 408) = &v51;
    *((_QWORD *)&v51 + 1) = a1;
    HMLockObject(a1);
    v7 = v55;
    v8 = v54;
    v9 = v53;
  }
  v37 = xxxDefWindowProc((int)a1, v9, v8, v7);
  v40 = a7;
  *a7 = v37;
  if ( v36 )
    ThreadUnlock1(v40, v38, v39);
}
