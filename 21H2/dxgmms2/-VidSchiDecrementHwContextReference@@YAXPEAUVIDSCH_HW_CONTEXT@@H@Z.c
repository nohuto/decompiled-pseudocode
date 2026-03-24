/*
 * XREFs of ?VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z @ 0x1C00374C0
 * Callers:
 *     ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z @ 0x1C0037660 (-VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z.c)
 *     VidSchTerminateHwContext @ 0x1C003AB00 (VidSchTerminateHwContext.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C0011678 (VidSchiDecrementDeviceReference.c)
 */

void __fastcall VidSchiDecrementHwContextReference(unsigned int *P, __int64 a2)
{
  __int64 v2; // rdi
  int v3; // esi
  unsigned int **v5; // rcx
  PVOID *v6; // rdx
  unsigned int **v7; // rdx
  PVOID *v8; // rcx
  void *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)P + 2);
  v3 = a2;
  if ( !(_DWORD)a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v2 + 24) + 1712LL), &LockHandle);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 10, 0xFFFFFFFF) == 1 )
  {
    if ( *((unsigned int **)P + 28) != P + 56 || P[60] )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(P, a2);
      v10[3] = 281LL;
      v10[4] = 12288LL;
      v10[5] = P;
      v11 = P[60];
      v10[7] = 0LL;
      v10[6] = v11;
      WdLogEvent5_WdCriticalError(v10);
      __debugbreak();
      JUMPOUT(0x1C0037659LL);
    }
    v5 = (unsigned int **)*((_QWORD *)P + 24);
    if ( v5[1] != P + 48
      || (v6 = (PVOID *)*((_QWORD *)P + 25), *v6 != P + 48)
      || (*v6 = v5, v5[1] = (unsigned int *)v6, v7 = (unsigned int **)*((_QWORD *)P + 26), v7[1] != P + 52)
      || (v8 = (PVOID *)*((_QWORD *)P + 27), *v8 != P + 52) )
    {
      __fastfail(3u);
    }
    *v8 = v7;
    v7[1] = (unsigned int *)v8;
    if ( *((_BYTE *)P + 91) )
    {
      RtlAvlRemoveNode(v2 + 1728, P + 24);
      RtlAvlRemoveNode(v2 + 1736, P + 30);
      *((_BYTE *)P + 91) = 0;
    }
    VidSchiDecrementDeviceReference(*((char **)P + 1), 1);
    if ( *((_BYTE *)P + 90) )
    {
      v9 = (void *)*((_QWORD *)P + 4);
      if ( v9 )
        ExFreePoolWithTag(v9, 0x4B677844u);
    }
    ExFreePoolWithTag(P, 0);
  }
  if ( !v3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
