/*
 * XREFs of ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C002AA5C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     IsNonImmersiveBand @ 0x1C0022AB4 (IsNonImmersiveBand.c)
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     FindOldMonitor @ 0x1C0026B78 (FindOldMonitor.c)
 *     xxxComputeProposedPerMonRect @ 0x1C002A9E8 (xxxComputeProposedPerMonRect.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C002C7DC (xxxDeferWindowPosAndCheckPoint.c)
 *     InternalBeginDeferWindowPos @ 0x1C006A404 (InternalBeginDeferWindowPos.c)
 *     xxxNotifyMonitorChanged @ 0x1C006B018 (xxxNotifyMonitorChanged.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006DEE0 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

void __fastcall xxxProcessDesktopRecalc(struct tagASYNCDTOPRECALC *a1)
{
  __int64 v2; // rdx
  struct tagSMWP *v3; // r14
  int v4; // r15d
  char *v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 Prop; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // edi
  _QWORD *v17; // rsi
  struct tagWND *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  __int128 v21; // [rsp+40h] [rbp-29h] BYREF
  __int64 v22; // [rsp+50h] [rbp-19h]
  _QWORD v23[3]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v24[3]; // [rsp+70h] [rbp+7h] BYREF
  struct tagRECT v25; // [rsp+88h] [rbp+1Fh] BYREF

  if ( a1 )
  {
    v3 = (struct tagSMWP *)InternalBeginDeferWindowPos(*((unsigned int *)a1 + 3));
    if ( v3 )
    {
      v22 = 0LL;
      v21 = 0LL;
      PushW32ThreadLock((__int64)v3, &v21, (__int64)DestroySMWP);
      v4 = 0;
      if ( *((int *)a1 + 3) > 0 )
      {
        v5 = (char *)a1 + 16;
        do
        {
          v6 = *(_QWORD *)v5;
          LOBYTE(v2) = 1;
          v7 = HMValidateHandleNoSecure(*(_QWORD *)v5, v2);
          v8 = v7;
          if ( v7 )
          {
            v2 = *(_QWORD *)(v7 + 40);
            if ( *(char *)(v2 + 24) < 0 || !IsNonImmersiveBand(v7) )
              goto LABEL_11;
            v9 = v4 + 1LL;
            v10 = *(_QWORD *)(v2 + 88) - *((_QWORD *)a1 + 3 * v9);
            if ( !v10 )
              v10 = *(_QWORD *)(v2 + 96) - *((_QWORD *)a1 + 3 * v9 + 1);
            if ( !v10 )
              v11 = 1;
            else
LABEL_11:
              v11 = 0;
            if ( v11 )
            {
              v23[2] = 0LL;
              ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
              v23[0] = *(_QWORD *)(ThreadWin32Thread + 408);
              *(_QWORD *)(ThreadWin32Thread + 408) = v23;
              v23[1] = v8;
              HMLockObject(v8);
              Prop = GetProp(v8, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL);
              if ( v3 )
              {
                v3 = (struct tagSMWP *)xxxDeferWindowPosAndCheckPoint(
                                         v3,
                                         v8,
                                         *(_QWORD *)a1,
                                         *(_QWORD *)(v8 + 40) + 88LL,
                                         Prop,
                                         *((_DWORD *)a1 + 2),
                                         0);
                if ( !v3 )
                {
                  v20 = W32GetThreadWin32Thread(KeGetCurrentThread());
                  *(_QWORD *)(v20 + 16) = v21;
                }
              }
              ThreadUnlock1();
              LOBYTE(v14) = 1;
              v8 = HMValidateHandleNoSecure(v6, v14);
              if ( !v8 )
                goto LABEL_34;
            }
            v25 = 0LL;
            if ( (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL) & 0xF) == 2
              && (*(_DWORD *)(*(_QWORD *)(v8 + 16) + 640LL) & 0x2000000) == 0
              && (unsigned int)xxxComputeProposedPerMonRect((struct tagWND *)v8, *(struct tagMONITORRECTS **)a1, &v25)
              && (LOBYTE(v2) = 1, HMValidateHandleNoSecure(v6, v2)) )
            {
              *(struct tagRECT *)(v5 + 8) = v25;
            }
            else
            {
LABEL_34:
              *(_QWORD *)v5 = 0LL;
            }
          }
          ++v4;
          v5 += 24;
        }
        while ( v4 < *((_DWORD *)a1 + 3) );
      }
      if ( v3 )
      {
        v15 = W32GetThreadWin32Thread(KeGetCurrentThread());
        *(_QWORD *)(v15 + 16) = v21;
        xxxEndDeferWindowPosEx(v3);
      }
    }
    v16 = 0;
    if ( *((int *)a1 + 3) > 0 )
    {
      v17 = (_QWORD *)((char *)a1 + 16);
      do
      {
        if ( *v17 )
        {
          LOBYTE(v2) = 1;
          v18 = (struct tagWND *)HMValidateHandleNoSecure(*v17, v2);
          if ( v18 )
          {
            v24[2] = 0LL;
            v19 = W32GetThreadWin32Thread(KeGetCurrentThread());
            v24[0] = *(_QWORD *)(v19 + 408);
            *(_QWORD *)(v19 + 408) = v24;
            v24[1] = v18;
            HMLockObject(v18);
            FindOldMonitor((__int64)v18, *(_DWORD **)a1, 0LL);
            xxxNotifyMonitorChanged(v18, (struct tagRECT *)((char *)a1 + 24 * v16 + 24), 0LL);
            ThreadUnlock1();
          }
        }
        ++v16;
        v17 += 3;
      }
      while ( v16 < *((_DWORD *)a1 + 3) );
    }
    Win32FreePool(*(_QWORD *)a1);
    Win32FreePool(a1);
  }
}
