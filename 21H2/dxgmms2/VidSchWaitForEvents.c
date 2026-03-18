/*
 * XREFs of VidSchWaitForEvents @ 0x1C0002F70
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x1C0013A10 (VidSchSuspendResumeDevice.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00937C4 (VidSchWaitForCompletionEvent.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C009A7E0 (VidSchiSwitchNodeFromContext.c)
 *     VidSchSuspendAdapter @ 0x1C00A6140 (VidSchSuspendAdapter.c)
 *     VidSchSwitchFromContext @ 0x1C00A6240 (VidSchSwitchFromContext.c)
 *     VidSchSwitchFromDevice @ 0x1C00A63A0 (VidSchSwitchFromDevice.c)
 * Callees:
 *     VidSchiCheckHwProgress @ 0x1C00978E0 (VidSchiCheckHwProgress.c)
 */

__int64 __fastcall VidSchWaitForEvents(
        struct _VIDSCH_GLOBAL *a1,
        ULONG Count,
        PVOID Object[],
        PLARGE_INTEGER Timeout,
        BOOLEAN Alertable)
{
  union _LARGE_INTEGER *v5; // r14
  bool v9; // di
  char v10; // bp
  unsigned int v11; // r8d
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  ULONG v16; // esi
  char v17; // bp
  NTSTATUS v18; // eax
  unsigned int v19; // edi
  __int64 v20; // [rsp+40h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-40h] BYREF

  v5 = Timeout;
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)a1 + 21) )
  {
    v16 = 0;
    v17 = 0;
    v20 = 0LL;
    if ( !Timeout )
    {
      v5 = (union _LARGE_INTEGER *)&v20;
      v17 = 1;
      v20 = -(__int64)((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1);
    }
    do
    {
      v18 = KeWaitForMultipleObjects(Count, Object, WaitAny, Executive, 0, 0, v5, 0LL);
      v19 = v18;
      if ( !v17 || v18 != 258 )
        return v19;
    }
    while ( (unsigned int)VidSchiCheckHwProgress(a1) );
    if ( !*((_DWORD *)a1 + 753) || !Count )
      return v19;
    while ( !KeReadStateEvent((PRKEVENT)*Object) )
    {
      ++v16;
      ++Object;
      if ( v16 >= Count )
        return v19;
    }
    return v16;
  }
  else
  {
    v9 = *((_DWORD *)a1 + 182) || *((_DWORD *)a1 + 17) || *((_DWORD *)a1 + 18);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v10 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 216, &LockHandle);
    v11 = *((_DWORD *)a1 + 10);
    v12 = 0;
    if ( v11 )
    {
      while ( 1 )
      {
        v13 = *((_QWORD *)a1 + v12 + 400);
        if ( v13 )
        {
          if ( *(_DWORD *)(v13 + 3000) )
            break;
        }
        if ( ++v12 >= v11 )
          goto LABEL_8;
      }
      v10 = 1;
    }
LABEL_8:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v9 || v10 )
    {
      if ( *((_BYTE *)a1 + 716) )
      {
        *((_QWORD *)a1 + 174) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)((char *)a1 + 1360), 0, 1u);
      }
    }
    while ( 1 )
    {
      v14 = KeWaitForMultipleObjects(Count, Object, WaitAny, Executive, 0, Alertable, v5, 0LL);
      if ( Alertable )
      {
        if ( PsIsThreadTerminating(KeGetCurrentThread()) )
          break;
      }
      if ( v14 != 257 )
        return v14;
    }
    WdLogSingleEntry0(3LL);
    return 3221226166LL;
  }
}
