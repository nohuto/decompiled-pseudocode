/*
 * XREFs of ?VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0013210
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCheckYieldExitCondition @ 0x1C0013338 (VidSchiCheckYieldExitCondition.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0024290 (McTemplateK0p_EtwWriteTransfer.c)
 */

void __fastcall VidSchiWorkerThreadTimerCallback(struct _EX_TIMER *a1, void *a2)
{
  LARGE_INTEGER v3; // rbp
  char v4; // si
  __int64 v5; // rdi
  __int64 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  char v11; // [rsp+68h] [rbp+10h] BYREF
  union _LARGE_INTEGER v12; // [rsp+70h] [rbp+18h] BYREF

  v12.QuadPart = 0LL;
  v3 = KeQueryPerformanceCounter(&v12);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a2 + 214, &LockHandle);
  if ( v3.QuadPart >= *((_QWORD *)a2 + 23) )
  {
    ExCancelTimer(*((_QWORD *)a2 + 22), 0LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0p_EtwWriteTransfer(v8, &EventYieldCancelExpirationTimer, v9, *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 23) = 0LL;
  }
  else
  {
    v4 = 0;
    v5 = 0LL;
    if ( *((_DWORD *)a2 + 18) )
    {
      do
      {
        v6 = (__int64 *)*((_QWORD *)a2 + 78);
        if ( (unsigned int)v5 < *((_DWORD *)a2 + 174) )
          v6 += v5;
        v7 = *v6;
        v11 = 0;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiCheckYieldExitCondition)(
          v7,
          (LARGE_INTEGER)v3.QuadPart,
          &v11);
        if ( v11 )
          v4 = 1;
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *((_DWORD *)a2 + 18) );
      if ( v4 )
      {
        *((_QWORD *)a2 + 151) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)a2 + 49, 0, 0);
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
