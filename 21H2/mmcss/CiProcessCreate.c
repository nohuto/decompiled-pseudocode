/*
 * XREFs of CiProcessCreate @ 0x1C000B400
 * Callers:
 *     CiThreadCreate @ 0x1C000AB70 (CiThreadCreate.c)
 *     CiDispatchCreateNotificationClient @ 0x1C000C640 (CiDispatchCreateNotificationClient.c)
 * Callees:
 *     memset @ 0x1C0003480 (memset.c)
 *     CiProcessComparer @ 0x1C000A3D0 (CiProcessComparer.c)
 */

__int64 __fastcall CiProcessCreate(_QWORD *a1)
{
  char *PoolWithQuotaTag; // rax
  char *v3; // rsi
  char *v4; // rbp
  __int64 v5; // r8
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rdi
  int v8; // eax
  _QWORD *v9; // rax
  __int64 result; // rax

  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x60uLL, 0x5073634Du);
  v3 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225495LL;
  memset(PoolWithQuotaTag, 0, 0x60uLL);
  *(_DWORD *)v3 = 1;
  *((_QWORD *)v3 + 4) = 1LL;
  *((_QWORD *)v3 + 10) = PsGetCurrentProcess();
  *((_QWORD *)v3 + 9) = v3 + 64;
  *((_QWORD *)v3 + 8) = v3 + 64;
  ObfReferenceObject(*((PVOID *)v3 + 10));
  v4 = 0LL;
  ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  LOBYTE(v5) = 0;
  v6 = (_QWORD *)WPP_MAIN_CB.DeviceQueue.1;
  WPP_MAIN_CB.DeviceQueue.Lock = (KSPIN_LOCK)KeGetCurrentThread();
  v7 = *((_QWORD *)v3 + 10);
  if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 )
  {
LABEL_10:
    RtlRbInsertNodeEx(&WPP_MAIN_CB.DeviceQueue.Busy, v6, v5, v3 + 40);
    goto LABEL_11;
  }
  while ( 1 )
  {
    v8 = CiProcessComparer(v7, (__int64)v6);
    if ( v8 <= 0 )
      break;
    v9 = (_QWORD *)v6[1];
    if ( !v9 )
    {
      v5 = 1LL;
      goto LABEL_10;
    }
LABEL_5:
    v6 = v9;
  }
  if ( v8 < 0 )
  {
    v9 = (_QWORD *)*v6;
    if ( !*v6 )
    {
      LOBYTE(v5) = 0;
      goto LABEL_10;
    }
    goto LABEL_5;
  }
  v4 = (char *)(v6 - 5);
  if ( _InterlockedIncrement64(v6 - 1) <= 1 )
    __fastfail(0xEu);
LABEL_11:
  WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  if ( v4 )
  {
    ObfDereferenceObject(*((PVOID *)v3 + 10));
    ExFreePoolWithTag(v3, 0x5073634Du);
    v3 = v4;
  }
  result = 0LL;
  *a1 = v3;
  return result;
}
