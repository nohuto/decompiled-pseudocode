/*
 * XREFs of VidSchSetNodePowerState @ 0x1C0013270
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0009AD0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiUpdateContextStatus @ 0x1C000D200 (VidSchiUpdateContextStatus.c)
 */

void __fastcall VidSchSetNodePowerState(__int64 a1, unsigned int a2, int a3, char a4)
{
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdi
  char v8; // r14
  _QWORD *v9; // rsi
  char i; // r15
  _QWORD *v11; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v18; // [rsp+28h] [rbp-28h]
  char v19; // [rsp+30h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  v5 = *(__int64 **)(a1 + 632);
  v6 = a3 + (unsigned int)*(unsigned __int8 *)(a2 + a1 + 88);
  if ( (unsigned int)v6 < *(_DWORD *)(a1 + 704) )
    v5 += v6;
  v7 = *v5;
  if ( a4 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 168)
      || *(_BYTE *)(a1 + 54)
      || (unsigned int)KeIsExecutingDpc() )
    {
      v8 = 1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1728), &LockHandle);
    }
    else
    {
      v8 = 0;
    }
    *(_BYTE *)(v7 + 11244) = 1;
    v9 = (_QWORD *)(v7 + 2600);
    for ( i = 0; ; i = 1 )
    {
      v11 = (_QWORD *)*v9;
      if ( (_QWORD *)*v9 == v9 )
        break;
      *((_DWORD *)v11 + 44) &= ~0x80u;
      VidSchiUpdateContextStatus((__int64)(v11 - 1), 5LL, 12688LL);
    }
    v12 = (_QWORD *)(v7 + 2632);
    v18 = &v17;
    v17 = (__int64)&v17;
LABEL_11:
    v19 = 0;
    while ( 1 )
    {
      v13 = (_QWORD *)*v12;
      if ( *(_QWORD **)(*v12 + 8LL) != v12 )
        goto LABEL_28;
      v14 = *v13;
      if ( *(_QWORD **)(*v13 + 8LL) != v13 )
        goto LABEL_28;
      *v12 = v14;
      *(_QWORD *)(v14 + 8) = v12;
      if ( v13 == v12 )
        break;
      *v13 = 0LL;
      v13[1] = 0LL;
      v15 = v13 - 2;
      if ( !*v15 )
      {
        v16 = v18;
        if ( (__int64 *)*v18 != &v17 )
LABEL_28:
          __fastfail(3u);
        *v15 = (__int64)&v17;
        v15[1] = (__int64)v16;
        *v16 = (__int64)v15;
        v18 = v15;
        goto LABEL_11;
      }
    }
    if ( !v19 )
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v17);
    if ( v8 )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( i )
    {
      *(_QWORD *)(a1 + 1224) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(a1 + 1192), 0, 0);
    }
  }
  else
  {
    *(_BYTE *)(v7 + 11244) = 0;
  }
}
