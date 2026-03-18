/*
 * XREFs of VidSchTerminateAdapter @ 0x1C00F55F0
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C00AE220 (VidSchInitializeAdapter.c)
 *     VidSchiHandleControlEvent @ 0x1C00F322C (VidSchiHandleControlEvent.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     VidSchiAcceptsIncomingWork @ 0x1C0007330 (VidSchiAcceptsIncomingWork.c)
 *     VidSchIsWorkerThread @ 0x1C00134F0 (VidSchIsWorkerThread.c)
 *     VidSchiDecrementContextReference @ 0x1C0013610 (VidSchiDecrementContextReference.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0013F70 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     VidSchiClearPeriodicFrameNotifications @ 0x1C001B554 (VidSchiClearPeriodicFrameNotifications.c)
 *     ??1_VIDSCH_GLOBAL@@QEAA@XZ @ 0x1C003B504 (--1_VIDSCH_GLOBAL@@QEAA@XZ.c)
 *     VidSchTerminateHwContext @ 0x1C00428B0 (VidSchTerminateHwContext.c)
 *     VidSchTerminateHwQueue @ 0x1C0042A20 (VidSchTerminateHwQueue.c)
 *     VidSchTerminateDevice @ 0x1C0098CB0 (VidSchTerminateDevice.c)
 *     VidSchTerminateContext @ 0x1C0098F20 (VidSchTerminateContext.c)
 *     VidSchControlVSyncAdapter @ 0x1C00A3620 (VidSchControlVSyncAdapter.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C00B05F4 (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C00F4140 (VidSchFlushAdapter.c)
 *     VidSchiBlockDriverCallback @ 0x1C00F6DDC (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchTerminateAdapter(struct _VIDSCH_GLOBAL *a1)
{
  int v2; // r14d
  __int64 v3; // rdx
  __int64 v4; // rcx
  void *v5; // rbx
  char v6; // cl
  unsigned int v7; // eax
  struct _VIDSCH_CONTEXT **v8; // rcx
  unsigned int i; // ebx
  struct _VIDSCH_CONTEXT **v10; // rcx
  unsigned int j; // ebx
  struct VIDSCH_HW_QUEUE **v12; // rcx
  unsigned int k; // ebx
  PVOID *v14; // rcx
  unsigned int m; // ebx
  char *v16; // rcx
  unsigned int n; // ebx
  __int64 *v18; // rsi
  __int64 v19; // rsi
  struct _VIDSCH_CONTEXT *v20; // rcx
  struct _VIDSCH_CONTEXT *v21; // rcx
  char *v22; // rcx
  __int64 v23; // rcx
  unsigned int ii; // ebx
  _QWORD **v25; // rsi
  _QWORD *v26; // rsi
  struct _VIDSCH_CONTEXT *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  _QWORD *v30; // rcx
  unsigned int v31; // ebp
  int jj; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  void *v35; // rbx
  void *v36; // rcx
  void *v37; // rbx
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
  {
    if ( VidSchiAcceptsIncomingWork((__int64)a1) )
    {
      if ( !VidSchIsWorkerThread(v4) )
      {
        VidSchFlushAdapter(a1, 17);
        v5 = (void *)*((_QWORD *)a1 + 21);
        ObfReferenceObject(v5);
        VidSchiRequestSchedulerStatus((__int64)a1, 2, 0);
        KeWaitForSingleObject(v5, Executive, 0, 0, 0LL);
        ObfDereferenceObject(v5);
        return 0LL;
      }
      VidSchFlushAdapter(a1, 17);
      v6 = 0;
      v7 = 0;
      if ( *((_DWORD *)a1 + 10) )
      {
        do
        {
          if ( *((_DWORD *)a1 + v7 + 456) )
          {
            *((_DWORD *)a1 + v7 + 456) = 1;
            v6 = 1;
          }
          ++v7;
        }
        while ( v7 < *((_DWORD *)a1 + 10) );
        if ( v6 )
          VidSchControlVSyncAdapter(a1, 5u, 0, 0xFFFFFFFD);
      }
      VidSchiBlockDriverCallback(a1);
      while ( *((_DWORD *)a1 + 566) )
      {
        Interval.QuadPart = -1000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      v2 = 1;
    }
    v8 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 36);
    if ( v8 )
    {
      for ( i = 0; i < *((_DWORD *)a1 + 19); ++i )
      {
        v8 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 36);
        if ( v8[i] )
        {
          VidSchTerminateContext(v8[i]);
          v8 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 36);
        }
      }
      ExFreePoolWithTag(v8, 0);
      *((_QWORD *)a1 + 36) = 0LL;
    }
    v10 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 33);
    if ( v10 )
    {
      for ( j = 0; j < *((_DWORD *)a1 + 19); ++j )
      {
        v10 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 33);
        if ( v10[j] )
        {
          VidSchTerminateContext(v10[j]);
          v10 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 33);
        }
      }
      ExFreePoolWithTag(v10, 0);
      *((_QWORD *)a1 + 33) = 0LL;
    }
    v12 = (struct VIDSCH_HW_QUEUE **)*((_QWORD *)a1 + 35);
    if ( v12 )
    {
      for ( k = 0; k < *((_DWORD *)a1 + 19); ++k )
      {
        v12 = (struct VIDSCH_HW_QUEUE **)*((_QWORD *)a1 + 35);
        if ( v12[k] )
        {
          VidSchTerminateHwQueue(v12[k]);
          v12 = (struct VIDSCH_HW_QUEUE **)*((_QWORD *)a1 + 35);
        }
      }
      ExFreePoolWithTag(v12, 0);
      *((_QWORD *)a1 + 35) = 0LL;
    }
    v14 = (PVOID *)*((_QWORD *)a1 + 34);
    if ( v14 )
    {
      for ( m = 0; m < *((_DWORD *)a1 + 19); ++m )
      {
        v14 = (PVOID *)*((_QWORD *)a1 + 34);
        if ( v14[m] )
        {
          VidSchTerminateHwContext(v14[m]);
          v14 = (PVOID *)*((_QWORD *)a1 + 34);
        }
      }
      ExFreePoolWithTag(v14, 0);
      *((_QWORD *)a1 + 34) = 0LL;
    }
    v16 = (char *)*((_QWORD *)a1 + 32);
    if ( v16 )
    {
      VidSchTerminateDevice(v16);
      *((_QWORD *)a1 + 32) = 0LL;
    }
    for ( n = 0; n < *((_DWORD *)a1 + 20); ++n )
    {
      v18 = (__int64 *)*((_QWORD *)a1 + 79);
      if ( n < *((_DWORD *)a1 + 176) )
        v18 += n;
      v19 = *v18;
      if ( v19 )
      {
        v20 = *(struct _VIDSCH_CONTEXT **)(v19 + 32);
        if ( v20 )
        {
          VidSchTerminateContext(v20);
          *(_QWORD *)(v19 + 32) = 0LL;
        }
      }
    }
    v21 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)a1 + 31);
    if ( v21 )
    {
      VidSchTerminateContext(v21);
      *((_QWORD *)a1 + 31) = 0LL;
    }
    v22 = (char *)*((_QWORD *)a1 + 30);
    if ( v22 )
    {
      VidSchTerminateDevice(v22);
      *((_QWORD *)a1 + 30) = 0LL;
    }
    v23 = *((_QWORD *)a1 + 23);
    if ( v23 )
    {
      LOBYTE(v3) = 1;
      ExDeleteTimer(v23, v3, 0LL, 0LL);
    }
    for ( ii = 0; ii < *((_DWORD *)a1 + 21); *v30 = 0LL )
    {
      v25 = (_QWORD **)*((_QWORD *)a1 + 79);
      if ( ii < *((_DWORD *)a1 + 176) )
        v25 += ii;
      v26 = *v25;
      v27 = (struct _VIDSCH_CONTEXT *)v26[27];
      if ( v27 )
      {
        VidSchiDecrementContextReference(v27, 0);
        v26[27] = 0LL;
      }
      v28 = (void *)v26[23];
      if ( v28 )
        ExFreePoolWithTag(v28, 0);
      v29 = (void *)v26[25];
      if ( v29 )
        ExFreePoolWithTag(v29, 0);
      ExFreePoolWithTag(v26, 0);
      v30 = (_QWORD *)*((_QWORD *)a1 + 79);
      if ( ii < *((_DWORD *)a1 + 176) )
        v30 += ii;
      ++ii;
    }
    v31 = 0;
    for ( *((_DWORD *)a1 + 78) = 2; v31 < *((_DWORD *)a1 + 10); ++v31 )
    {
      if ( *((_QWORD *)a1 + v31 + 400) )
      {
        for ( jj = -1; jj != *((_DWORD *)a1 + 38); ++jj )
          ;
        VidSchiClearPeriodicFrameNotifications((__int64)a1, v31);
        v33 = *((_QWORD *)a1 + v31 + 400);
        v34 = *(_QWORD *)(v33 + 128);
        if ( v34 )
        {
          v35 = (void *)(v34 - 8);
          `vector destructor iterator'(
            *(char **)(v33 + 128),
            112LL,
            *(_QWORD *)(v34 - 8),
            (void (__fastcall *)(char *))VIDSCH_FLIP_QUEUE_HISTORY_ENTRY::~VIDSCH_FLIP_QUEUE_HISTORY_ENTRY);
          operator delete(v35);
          v33 = *((_QWORD *)a1 + v31 + 400);
        }
        operator delete(*(void **)(v33 + 44152));
        ExFreePoolWithTag(*((PVOID *)a1 + v31 + 400), 0);
        *((_QWORD *)a1 + v31 + 400) = 0LL;
      }
      v36 = (void *)*((_QWORD *)a1 + v31 + 807);
      if ( v36 )
      {
        ExFreePoolWithTag(v36, 0);
        *((_QWORD *)a1 + v31 + 807) = 0LL;
      }
    }
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 2880));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 320));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 1088));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 984));
    if ( *((_BYTE *)a1 + 976) )
    {
      ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)a1 + 880));
      *((_BYTE *)a1 + 976) = 0;
    }
    v37 = (void *)*((_QWORD *)a1 + 21);
    _VIDSCH_GLOBAL::~_VIDSCH_GLOBAL(a1);
    ExFreePoolWithTag(a1, 0);
    if ( v2 )
    {
      ObfDereferenceObject(v37);
      PsTerminateSystemThread(0);
    }
  }
  return 0LL;
}
