/*
 * XREFs of ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C003A14C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C001B770 (xxxDeferWindowPosAndCheckPoint.c)
 *     xxxComputeProposedPerMonRect @ 0x1C003A4A0 (xxxComputeProposedPerMonRect.c)
 *     FindOldMonitor @ 0x1C003BC44 (FindOldMonitor.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00472F4 (xxxEndDeferWindowPosEx.c)
 *     xxxNotifyMonitorChanged @ 0x1C004A38C (xxxNotifyMonitorChanged.c)
 *     InternalBeginDeferWindowPos @ 0x1C004B3E8 (InternalBeginDeferWindowPos.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     IsNonImmersiveBand @ 0x1C00C9C04 (IsNonImmersiveBand.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

void __fastcall xxxProcessDesktopRecalc(struct tagASYNCDTOPRECALC *a1, __int64 a2)
{
  __int64 v3; // rdx
  struct tagSMWP *v4; // r14
  int v5; // r15d
  char *v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 ThreadWin32Thread; // rax
  struct tagRECT *Prop; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // edi
  _QWORD *v21; // rsi
  struct tagWND *v22; // r14
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // [rsp+28h] [rbp-41h]
  __int128 v29; // [rsp+40h] [rbp-29h] BYREF
  __int64 v30; // [rsp+50h] [rbp-19h]
  _QWORD v31[3]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v32[3]; // [rsp+70h] [rbp+7h] BYREF
  struct tagRECT v33; // [rsp+88h] [rbp+1Fh] BYREF

  if ( a1 )
  {
    v4 = (struct tagSMWP *)InternalBeginDeferWindowPos(*((unsigned int *)a1 + 3), a2);
    if ( v4 )
    {
      v30 = 0LL;
      v29 = 0LL;
      PushW32ThreadLock(v4, &v29, DestroySMWP);
      v5 = 0;
      if ( *((int *)a1 + 3) > 0 )
      {
        v6 = (char *)a1 + 16;
        do
        {
          v7 = *(_QWORD *)v6;
          LOBYTE(v3) = 1;
          v8 = HMValidateHandleNoSecure(*(_QWORD *)v6, v3);
          v9 = v8;
          if ( v8 )
          {
            v3 = *(_QWORD *)(v8 + 40);
            if ( *(char *)(v3 + 24) < 0 || !(unsigned int)IsNonImmersiveBand(v8) )
              goto LABEL_11;
            v10 = v5 + 1LL;
            v11 = *(_QWORD *)(v3 + 88) - *((_QWORD *)a1 + 3 * v10);
            if ( !v11 )
              v11 = *(_QWORD *)(v3 + 96) - *((_QWORD *)a1 + 3 * v10 + 1);
            if ( !v11 )
              v12 = 1;
            else
LABEL_11:
              v12 = 0;
            if ( v12 )
            {
              v31[2] = 0LL;
              ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
              v31[0] = *(_QWORD *)(ThreadWin32Thread + 416);
              *(_QWORD *)(ThreadWin32Thread + 416) = v31;
              v31[1] = v9;
              HMLockObject(v9);
              Prop = (struct tagRECT *)GetProp(v9, LOWORD(WPP_MAIN_CB.DeviceQueue.Lock), 1LL);
              if ( v4 )
              {
                LODWORD(v28) = *((_DWORD *)a1 + 2);
                v4 = (struct tagSMWP *)xxxDeferWindowPosAndCheckPoint(
                                         (__int64)v4,
                                         (struct tagWND *)v9,
                                         *(struct tagMONITORRECTS **)a1,
                                         (struct tagRECT *)(*(_QWORD *)(v9 + 40) + 88LL),
                                         Prop,
                                         v28,
                                         0);
                if ( !v4 )
                {
                  v27 = W32GetThreadWin32Thread(KeGetCurrentThread());
                  v16 = v29;
                  *(_QWORD *)(v27 + 16) = v29;
                }
              }
              ThreadUnlock1(v16, v15, v17);
              LOBYTE(v18) = 1;
              v9 = HMValidateHandleNoSecure(v7, v18);
              if ( !v9 )
                goto LABEL_34;
            }
            v33 = 0LL;
            if ( (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 288LL) & 0xF) == 2
              && (*(_DWORD *)(*(_QWORD *)(v9 + 16) + 648LL) & 0x2000000) == 0
              && (unsigned int)xxxComputeProposedPerMonRect((struct tagWND *)v9, *(struct tagMONITORRECTS **)a1, &v33)
              && (LOBYTE(v3) = 1, HMValidateHandleNoSecure(v7, v3)) )
            {
              *(struct tagRECT *)(v6 + 8) = v33;
            }
            else
            {
LABEL_34:
              *(_QWORD *)v6 = 0LL;
            }
          }
          ++v5;
          v6 += 24;
        }
        while ( v5 < *((_DWORD *)a1 + 3) );
      }
      if ( v4 )
      {
        v19 = W32GetThreadWin32Thread(KeGetCurrentThread());
        *(_QWORD *)(v19 + 16) = v29;
        xxxEndDeferWindowPosEx(v4);
      }
    }
    v20 = 0;
    if ( *((int *)a1 + 3) > 0 )
    {
      v21 = (_QWORD *)((char *)a1 + 16);
      do
      {
        if ( *v21 )
        {
          LOBYTE(v3) = 1;
          v22 = (struct tagWND *)HMValidateHandleNoSecure(*v21, v3);
          if ( v22 )
          {
            v32[2] = 0LL;
            v23 = W32GetThreadWin32Thread(KeGetCurrentThread());
            v32[0] = *(_QWORD *)(v23 + 416);
            *(_QWORD *)(v23 + 416) = v32;
            v32[1] = v22;
            HMLockObject(v22);
            FindOldMonitor(v22, *(_QWORD *)a1, 0LL);
            xxxNotifyMonitorChanged(v22);
            ThreadUnlock1(v25, v24, v26);
          }
        }
        ++v20;
        v21 += 3;
      }
      while ( v20 < *((_DWORD *)a1 + 3) );
    }
    Win32FreePool(*(_QWORD *)a1);
    Win32FreePool(a1);
  }
}
