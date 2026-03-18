/*
 * XREFs of sub_1C0011C40 @ 0x1C0011C40
 * Callers:
 *     sub_1C000BEB0 @ 0x1C000BEB0 (sub_1C000BEB0.c)
 *     sub_1C000C0F0 @ 0x1C000C0F0 (sub_1C000C0F0.c)
 *     sub_1C000D970 @ 0x1C000D970 (sub_1C000D970.c)
 *     sub_1C000FE00 @ 0x1C000FE00 (sub_1C000FE00.c)
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 *     sub_1C0015B1C @ 0x1C0015B1C (sub_1C0015B1C.c)
 *     sub_1C002F4AC @ 0x1C002F4AC (sub_1C002F4AC.c)
 *     sub_1C002F594 @ 0x1C002F594 (sub_1C002F594.c)
 *     sub_1C0042430 @ 0x1C0042430 (sub_1C0042430.c)
 *     sub_1C00430F0 @ 0x1C00430F0 (sub_1C00430F0.c)
 *     sub_1C0055820 @ 0x1C0055820 (sub_1C0055820.c)
 *     sub_1C0059910 @ 0x1C0059910 (sub_1C0059910.c)
 *     sub_1C0059FC0 @ 0x1C0059FC0 (sub_1C0059FC0.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C00125E0 @ 0x1C00125E0 (sub_1C00125E0.c)
 *     sub_1C001B88C @ 0x1C001B88C (sub_1C001B88C.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

void __fastcall sub_1C0011C40(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // rsi
  __int64 v8; // r12
  __int64 v10; // r15
  KIRQL v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rbx
  __int64 v24; // r8
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  KIRQL v30; // si
  __int64 v31; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  ULONG TimeIncrement; // eax
  KIRQL v36; // dl
  ULONG *p_SortKey; // rcx
  int v38; // r11d
  KIRQL v39; // [rsp+6Ch] [rbp-4Dh]

  v6 = a4;
  v8 = a3;
  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 )
    goto LABEL_51;
  if ( *(_DWORD *)v10 != 541218120 )
    sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
  if ( a2 )
  {
    v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 3728));
    v11 = v39;
    if ( (dword_1C006B268 & 0x2000) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 827616869;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = a2;
        *(_QWORD *)(v13 + 24) = v8;
      }
      if ( (dword_1C006B268 & 0x2000) != 0 )
      {
        v14 = *(_QWORD *)(a1 + 64);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
          *(_DWORD *)v15 = 829451877;
          *(_QWORD *)(v15 + 24) = a5;
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)(v15 + 16) = v6;
        }
      }
    }
    if ( (dword_1C006B268 & 0x2000) != 0 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
        *(_DWORD *)v17 = 846229093;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = a6;
        *(_QWORD *)(v17 + 24) = 0LL;
      }
    }
    if ( dword_1C006B650 )
    {
      v18 = *(_DWORD **)(a1 + 64);
      if ( !v18 )
        sub_1C002DC78(a1, 0LL);
      if ( *v18 != 541218120 )
        sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
      sub_1C00125E0(&stru_1C0061DF0, 0LL);
      v11 = v39;
    }
    *(_QWORD *)(a2 + 40) = a5;
    v19 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 28) = a6;
    *(_DWORD *)(a2 + 32) = 0;
    *(_DWORD *)(a2 + 24) = v6;
    *(_DWORD *)(a2 + 16) = v8;
    *(_DWORD *)(a2 + 12) = v8;
    if ( v19 )
    {
      if ( v19 == 2 )
      {
        sub_1C000FD80(a1, 0x2000, 1701729331, a2, v10 + 3744);
        *(_DWORD *)(a2 + 4) = v38;
      }
    }
    else
    {
      if ( (dword_1C006B268 & 0x2000) != 0 )
      {
        v20 = *(_QWORD *)(a1 + 64);
        if ( v20 )
        {
          v21 = *(_QWORD *)(v20 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
          *(_DWORD *)v21 = 844394085;
          *(_QWORD *)(v21 + 24) = v10 + 3744;
          *(_QWORD *)(v21 + 8) = 0LL;
          *(_QWORD *)(v21 + 16) = a2;
        }
      }
      *(_DWORD *)(a2 + 4) = 1;
      v22 = *(_QWORD **)(v10 + 3752);
      v23 = (_QWORD *)(a2 + 56);
      if ( *v22 != v10 + 3744 )
        goto LABEL_50;
      v23[1] = v22;
      *v23 = v10 + 3744;
      *v22 = v23;
      *(_QWORD *)(v10 + 3752) = v23;
      v24 = *(int *)(v10 + 3736);
      v25 = *(_DWORD *)(v10 + 3736);
      if ( (dword_1C006B268 & 0x2000) != 0 )
      {
        v26 = *(_QWORD *)(a1 + 64);
        if ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
          *(_DWORD *)v27 = 1414819172;
          *(_QWORD *)(v27 + 8) = 0LL;
          *(_QWORD *)(v27 + 16) = a1;
          *(_QWORD *)(v27 + 24) = v24;
          v25 = *(_DWORD *)(v10 + 3736);
        }
      }
      if ( v25 == 2 )
      {
        if ( (dword_1C006B268 & 0x2000) != 0 )
        {
          v28 = *(_QWORD *)(a1 + 64);
          if ( v28 )
          {
            v29 = *(_QWORD *)(v28 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
            *(_DWORD *)v29 = 809382500;
            *(_QWORD *)(v29 + 8) = 0LL;
            *(_QWORD *)(v29 + 16) = a1;
            *(_QWORD *)(v29 + 24) = 2LL;
          }
        }
        *(_DWORD *)(v10 + 3736) = 1;
        KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 3728), v11);
        v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
        stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&stru_1C006B480.Dpc.DeferredContext;
        v31 = *(_QWORD *)(a1 + 64);
        if ( v31 )
        {
          if ( *(_DWORD *)v31 != 541218120 )
            sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
          if ( *(_BYTE *)(v31 + 2480) )
          {
            PoolWithTag = ExAllocatePoolWithTag(PoolType, 0x30uLL, 0x42554855u);
            if ( !PoolWithTag )
            {
              ++*(_DWORD *)(v31 + 2528);
LABEL_36:
              stru_1C006B480.Dpc.DeferredRoutine = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v30);
              TimeIncrement = KeQueryTimeIncrement();
              if ( KeSetTimer((PKTIMER)(v10 + 3848), (LARGE_INTEGER)(int)(-149999 - TimeIncrement), (PKDPC)(v10 + 3784)) )
                sub_1C001B88C(a1, v10 + 3848);
              return;
            }
            *PoolWithTag = 1397515890LL;
            PoolWithTag[3] = 0LL;
            PoolWithTag[4] = 0LL;
            PoolWithTag[5] = 1380799588LL;
            PoolWithTag[2] = v10 + 3848;
            PoolWithTag[1] = a1;
            v33 = PoolWithTag + 3;
            v34 = *(_QWORD **)(v31 + 2520);
            if ( *v34 == v31 + 2512 )
            {
              *v33 = v31 + 2512;
              v33[1] = v34;
              *v34 = v33;
              *(_QWORD *)(v31 + 2520) = v33;
              goto LABEL_36;
            }
LABEL_50:
            __fastfail(3u);
          }
          p_SortKey = &stru_1C006B480.Queue.Wcb.WaitQueueEntry.SortKey;
          stru_1C006B480.Dpc.DeferredRoutine = 0LL;
          v36 = v30;
LABEL_42:
          KeReleaseSpinLock((PKSPIN_LOCK)p_SortKey, v36);
          return;
        }
LABEL_51:
        sub_1C002DC78(a1, 0LL);
      }
    }
    v36 = v11;
    p_SortKey = (ULONG *)(v10 + 3728);
    goto LABEL_42;
  }
}
