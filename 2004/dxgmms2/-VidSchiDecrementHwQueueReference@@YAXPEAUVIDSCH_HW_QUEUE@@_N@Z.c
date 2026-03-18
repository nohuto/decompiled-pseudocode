/*
 * XREFs of ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z @ 0x1C0037690
 * Callers:
 *     VidSchTerminateHwQueue @ 0x1C003AC80 (VidSchTerminateHwQueue.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C00073B0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0024FB8 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z @ 0x1C00374F0 (-VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z.c)
 */

void __fastcall VidSchiDecrementHwQueueReference(char *P)
{
  __int64 v2; // rdi
  char **v3; // rcx
  PVOID *v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 5) + 16LL) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 1712), &LockHandle);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 30, 0xFFFFFFFF) != 1 )
    goto LABEL_19;
  v3 = (char **)*((_QWORD *)P + 1);
  if ( v3[1] != P + 8 || (v4 = (PVOID *)*((_QWORD *)P + 2), *v4 != P + 8) )
LABEL_21:
    __fastfail(3u);
  *v4 = v3;
  v3[1] = (char *)v4;
  while ( 1 )
  {
    v5 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v2 + 1720), (_QWORD **)P + 27, (_DWORD *)P + 58);
    if ( !v5 )
      break;
    ExFreePoolWithTag(v5 - 1, 0);
  }
  VidSchiDecrementHwContextReference(*((unsigned int **)P + 5), 1LL);
  if ( *((char **)P + 26) != P + 160 || *((_DWORD *)P + 37) || *((_QWORD *)P + 3) || *((_QWORD *)P + 4) )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6);
    v11[3] = 281LL;
    v11[4] = 12288LL;
    v11[5] = P;
    v12 = *((unsigned int *)P + 37);
    v11[7] = 0LL;
    v11[6] = v12;
    WdLogEvent5_WdCriticalError(v11);
    __debugbreak();
    goto LABEL_21;
  }
  if ( !*((_QWORD *)P + 6) && bTracingEnabled )
  {
    v9 = *((_QWORD *)P + 5);
    v10 = *(_QWORD *)(v9 + 24);
    if ( !v10 || (*(_DWORD *)(v9 + 56) & 0x40) != 0 )
      v10 = *((_QWORD *)P + 5);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(v9, &EventDestroyHwQueue, v8, v10, 0LL, P);
  }
  ExFreePoolWithTag(P, 0);
LABEL_19:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
