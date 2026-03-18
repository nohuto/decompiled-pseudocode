/*
 * XREFs of ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z @ 0x1C003FE50
 * Callers:
 *     VidSchTerminateHwQueue @ 0x1C0042A20 (VidSchTerminateHwQueue.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0005BF0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C002F09C (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z @ 0x1C003FCB8 (-VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z.c)
 */

void __fastcall VidSchiDecrementHwQueueReference(char *P)
{
  __int64 v2; // rdi
  char **v3; // rcx
  PVOID *v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 5) + 16LL) + 24LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 1728), &LockHandle);
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
    v5 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v2 + 1736), (_QWORD **)P + 27, (_DWORD *)P + 58);
    if ( !v5 )
      break;
    ExFreePoolWithTag(v5 - 1, 0);
  }
  VidSchiDecrementHwContextReference(*((unsigned int **)P + 5), 1);
  if ( *((char **)P + 26) != P + 160 || *((_DWORD *)P + 37) || *((_QWORD *)P + 3) || *((_QWORD *)P + 4) )
  {
    WdLogSingleEntry5(0LL, 281LL, 12288LL, P, *((unsigned int *)P + 37), 0LL);
    __debugbreak();
    goto LABEL_21;
  }
  if ( !*((_QWORD *)P + 6) && bTracingEnabled )
  {
    v7 = *((_QWORD *)P + 5);
    v8 = *(_QWORD *)(v7 + 24);
    if ( !v8 || (*(_DWORD *)(v7 + 56) & 0x40) != 0 )
      v8 = *((_QWORD *)P + 5);
    if ( (byte_1C006E941 & 4) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(v7, &EventDestroyHwQueue, v6, v8, 0LL, P);
  }
  ExFreePoolWithTag(P, 0);
LABEL_19:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
