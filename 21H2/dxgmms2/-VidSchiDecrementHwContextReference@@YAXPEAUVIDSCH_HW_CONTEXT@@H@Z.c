/*
 * XREFs of ?VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z @ 0x1C003FCB8
 * Callers:
 *     ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z @ 0x1C003FE50 (-VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z.c)
 *     VidSchTerminateHwContext @ 0x1C00428B0 (VidSchTerminateHwContext.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C0013948 (VidSchiDecrementDeviceReference.c)
 */

void __fastcall VidSchiDecrementHwContextReference(unsigned int *P, int a2)
{
  __int64 v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int **v7; // rcx
  PVOID *v8; // rdx
  unsigned int **v9; // rdx
  PVOID *v10; // rcx
  void *v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_QWORD *)P + 2);
  v5 = *(_QWORD *)(v2 + 24);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1728), &LockHandle);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 10, 0xFFFFFFFF) == 1 )
  {
    v6 = P[60];
    if ( *((unsigned int **)P + 28) != P + 56 || (_DWORD)v6 )
    {
      WdLogSingleEntry5(0LL, 281LL, 12288LL, P, v6, 0LL);
      __debugbreak();
      JUMPOUT(0x1C003FE49LL);
    }
    v7 = (unsigned int **)*((_QWORD *)P + 24);
    if ( v7[1] != P + 48
      || (v8 = (PVOID *)*((_QWORD *)P + 25), *v8 != P + 48)
      || (*v8 = v7, v7[1] = (unsigned int *)v8, v9 = (unsigned int **)*((_QWORD *)P + 26), v9[1] != P + 52)
      || (v10 = (PVOID *)*((_QWORD *)P + 27), *v10 != P + 52) )
    {
      __fastfail(3u);
    }
    *v10 = v9;
    v9[1] = (unsigned int *)v10;
    if ( *((_BYTE *)P + 91) )
    {
      RtlAvlRemoveNode(v2 + 1736, P + 24);
      RtlAvlRemoveNode(v2 + 1744, P + 30);
      *((_BYTE *)P + 91) = 0;
    }
    VidSchiDecrementDeviceReference(*((char **)P + 1), 1);
    if ( *((_BYTE *)P + 90) )
    {
      v11 = (void *)*((_QWORD *)P + 4);
      if ( v11 )
        ExFreePoolWithTag(v11, 0x4B677844u);
    }
    ExFreePoolWithTag(P, 0);
  }
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
