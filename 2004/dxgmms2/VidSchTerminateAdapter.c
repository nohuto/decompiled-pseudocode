/*
 * XREFs of VidSchTerminateAdapter @ 0x1C00D3F50
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C008D4B0 (VidSchInitializeAdapter.c)
 *     VidSchiHandleControlEvent @ 0x1C00D12B8 (VidSchiHandleControlEvent.c)
 * Callees:
 *     VidSchiAcceptsIncomingWork @ 0x1C0008B78 (VidSchiAcceptsIncomingWork.c)
 *     VidSchiDecrementContextReference @ 0x1C0010EB0 (VidSchiDecrementContextReference.c)
 *     VidSchIsWorkerThread @ 0x1C00113B0 (VidSchIsWorkerThread.c)
 *     VidSchiClearPeriodicFrameNotifications @ 0x1C002F2A0 (VidSchiClearPeriodicFrameNotifications.c)
 *     ??1_VIDSCH_GLOBAL@@QEAA@XZ @ 0x1C0032A10 (--1_VIDSCH_GLOBAL@@QEAA@XZ.c)
 *     VidSchTerminateHwContext @ 0x1C003AB60 (VidSchTerminateHwContext.c)
 *     VidSchTerminateHwQueue @ 0x1C003AC80 (VidSchTerminateHwQueue.c)
 *     VidSchTerminateDevice @ 0x1C0080110 (VidSchTerminateDevice.c)
 *     VidSchTerminateContext @ 0x1C0080230 (VidSchTerminateContext.c)
 *     VidSchControlVSyncAdapter @ 0x1C0087C30 (VidSchControlVSyncAdapter.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C008F4F8 (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C00D2940 (VidSchFlushAdapter.c)
 *     VidSchiBlockDriverCallback @ 0x1C00D58B4 (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchTerminateAdapter(struct _VIDSCH_GLOBAL *a1)
{
  int v2; // ebp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  void *v8; // rbx
  char v9; // cl
  unsigned int v10; // eax
  _QWORD *v11; // rcx
  unsigned int i; // ebx
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  unsigned int j; // ebx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  unsigned int k; // ebx
  __int64 v19; // rdx
  _QWORD **v20; // rcx
  unsigned int m; // ebx
  char *v22; // rcx
  unsigned int n; // ebx
  __int64 *v24; // rsi
  __int64 v25; // rsi
  struct _VIDSCH_CONTEXT *v26; // rcx
  struct _VIDSCH_CONTEXT *v27; // rcx
  char *v28; // rcx
  __int64 v29; // rcx
  unsigned int ii; // ebx
  _QWORD **v31; // rsi
  _QWORD *v32; // rsi
  struct _VIDSCH_CONTEXT *v33; // rcx
  void *v34; // rcx
  void *v35; // rcx
  _QWORD *v36; // rcx
  unsigned int v37; // ebx
  int jj; // eax
  PVOID *v39; // rcx
  void *v40; // rcx
  void *v41; // rbx
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
  {
    if ( VidSchiAcceptsIncomingWork((__int64)a1) )
    {
      if ( !VidSchIsWorkerThread(v4) )
      {
        VidSchFlushAdapter(a1, 15LL, v7);
        v8 = (void *)*((_QWORD *)a1 + 20);
        ObfReferenceObject(v8);
        VidSchiRequestSchedulerStatus((__int64)a1, 2, 0);
        KeWaitForSingleObject(v8, Executive, 0, 0, 0LL);
        ObfDereferenceObject(v8);
        return 0LL;
      }
      VidSchFlushAdapter(a1, 15LL, v7);
      v9 = 0;
      v10 = 0;
      if ( *((_DWORD *)a1 + 10) )
      {
        do
        {
          if ( *((_DWORD *)a1 + v10 + 452) )
          {
            *((_DWORD *)a1 + v10 + 452) = 1;
            v9 = 1;
          }
          ++v10;
        }
        while ( v10 < *((_DWORD *)a1 + 10) );
        if ( v9 )
          VidSchControlVSyncAdapter(a1, 4LL, 0LL, 0xFFFFFFFD);
      }
      VidSchiBlockDriverCallback(a1);
      while ( *((_DWORD *)a1 + 546) )
      {
        Interval.QuadPart = -1000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      v2 = 1;
    }
    v11 = (_QWORD *)*((_QWORD *)a1 + 35);
    if ( v11 )
    {
      for ( i = 0; i < *((_DWORD *)a1 + 17); ++i )
      {
        v11 = (_QWORD *)*((_QWORD *)a1 + 35);
        v13 = v11[i];
        if ( v13 )
        {
          VidSchTerminateContext((struct _VIDSCH_CONTEXT *)v11[i], v13, v5);
          v11 = (_QWORD *)*((_QWORD *)a1 + 35);
        }
      }
      ExFreePoolWithTag(v11, 0);
      *((_QWORD *)a1 + 35) = 0LL;
    }
    v14 = (_QWORD *)*((_QWORD *)a1 + 32);
    if ( v14 )
    {
      for ( j = 0; j < *((_DWORD *)a1 + 17); ++j )
      {
        v14 = (_QWORD *)*((_QWORD *)a1 + 32);
        v16 = v14[j];
        if ( v16 )
        {
          VidSchTerminateContext((struct _VIDSCH_CONTEXT *)v14[j], v16, v5);
          v14 = (_QWORD *)*((_QWORD *)a1 + 32);
        }
      }
      ExFreePoolWithTag(v14, 0);
      *((_QWORD *)a1 + 32) = 0LL;
    }
    v17 = (_QWORD *)*((_QWORD *)a1 + 34);
    if ( v17 )
    {
      for ( k = 0; k < *((_DWORD *)a1 + 17); ++k )
      {
        v17 = (_QWORD *)*((_QWORD *)a1 + 34);
        v19 = v17[k];
        if ( v19 )
        {
          VidSchTerminateHwQueue((struct VIDSCH_HW_QUEUE *)v17[k], v19, v5, v6);
          v17 = (_QWORD *)*((_QWORD *)a1 + 34);
        }
      }
      ExFreePoolWithTag(v17, 0);
      *((_QWORD *)a1 + 34) = 0LL;
    }
    v20 = (_QWORD **)*((_QWORD *)a1 + 33);
    if ( v20 )
    {
      for ( m = 0; m < *((_DWORD *)a1 + 17); ++m )
      {
        v20 = (_QWORD **)*((_QWORD *)a1 + 33);
        if ( v20[m] )
        {
          VidSchTerminateHwContext(v20[m]);
          v20 = (_QWORD **)*((_QWORD *)a1 + 33);
        }
      }
      ExFreePoolWithTag(v20, 0);
      *((_QWORD *)a1 + 33) = 0LL;
    }
    v22 = (char *)*((_QWORD *)a1 + 31);
    if ( v22 )
    {
      VidSchTerminateDevice(v22, v3, v5);
      *((_QWORD *)a1 + 31) = 0LL;
    }
    for ( n = 0; n < *((_DWORD *)a1 + 18); ++n )
    {
      v24 = (__int64 *)*((_QWORD *)a1 + 78);
      if ( n < *((_DWORD *)a1 + 174) )
        v24 += n;
      v25 = *v24;
      if ( v25 )
      {
        v26 = *(struct _VIDSCH_CONTEXT **)(v25 + 32);
        if ( v26 )
        {
          VidSchTerminateContext(v26, v3, v5);
          *(_QWORD *)(v25 + 32) = 0LL;
        }
      }
    }
    v27 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)a1 + 30);
    if ( v27 )
    {
      VidSchTerminateContext(v27, v3, v5);
      *((_QWORD *)a1 + 30) = 0LL;
    }
    v28 = (char *)*((_QWORD *)a1 + 29);
    if ( v28 )
    {
      VidSchTerminateDevice(v28, v3, v5);
      *((_QWORD *)a1 + 29) = 0LL;
    }
    v29 = *((_QWORD *)a1 + 22);
    if ( v29 )
    {
      LOBYTE(v3) = 1;
      ExDeleteTimer(v29, v3, 0LL, 0LL);
    }
    for ( ii = 0; ii < *((_DWORD *)a1 + 19); *v36 = 0LL )
    {
      v31 = (_QWORD **)*((_QWORD *)a1 + 78);
      if ( ii < *((_DWORD *)a1 + 174) )
        v31 += ii;
      v32 = *v31;
      v33 = (struct _VIDSCH_CONTEXT *)v32[27];
      if ( v33 )
      {
        VidSchiDecrementContextReference(v33, 0);
        v32[27] = 0LL;
      }
      v34 = (void *)v32[23];
      if ( v34 )
        ExFreePoolWithTag(v34, 0);
      v35 = (void *)v32[25];
      if ( v35 )
        ExFreePoolWithTag(v35, 0);
      ExFreePoolWithTag(v32, 0);
      v36 = (_QWORD *)*((_QWORD *)a1 + 78);
      if ( ii < *((_DWORD *)a1 + 174) )
        v36 += ii;
      ++ii;
    }
    v37 = 0;
    for ( *((_DWORD *)a1 + 76) = 2; v37 < *((_DWORD *)a1 + 10); ++v37 )
    {
      if ( *((_QWORD *)a1 + v37 + 388) )
      {
        for ( jj = -1; jj != *((_DWORD *)a1 + 36); ++jj )
          ;
        VidSchiClearPeriodicFrameNotifications((__int64)a1, v37);
        v39 = (PVOID *)*((_QWORD *)a1 + v37 + 388);
        if ( v39[15] )
        {
          ExFreePoolWithTag(v39[15], 0);
          v39 = (PVOID *)*((_QWORD *)a1 + v37 + 388);
        }
        ExFreePoolWithTag(v39, 0);
        *((_QWORD *)a1 + v37 + 388) = 0LL;
      }
      v40 = (void *)*((_QWORD *)a1 + v37 + 794);
      if ( v40 )
      {
        ExFreePoolWithTag(v40, 0);
        *((_QWORD *)a1 + v37 + 794) = 0LL;
      }
    }
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 2784));
    ExDeleteResourceLite((PERESOURCE)a1 + 3);
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 1072));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 968));
    if ( *((_BYTE *)a1 + 960) )
    {
      ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)a1 + 9);
      *((_BYTE *)a1 + 960) = 0;
    }
    v41 = (void *)*((_QWORD *)a1 + 20);
    _VIDSCH_GLOBAL::~_VIDSCH_GLOBAL(a1);
    ExFreePoolWithTag(a1, 0);
    if ( v2 )
    {
      ObfDereferenceObject(v41);
      PsTerminateSystemThread(0);
    }
  }
  return 0LL;
}
