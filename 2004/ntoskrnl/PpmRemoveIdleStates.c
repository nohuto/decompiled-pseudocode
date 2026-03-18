/*
 * XREFs of PpmRemoveIdleStates @ 0x140562040
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x14021E120 (KeAddProcessorAffinityEx.c)
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmRemoveIdleStates(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rcx
  _DWORD v5[44]; // [rsp+20h] [rbp-C8h] BYREF

  memset(&v5[2], 0, 0xA0uLL);
  v2 = *(void **)(a1 + 0x8000);
  if ( v2 )
  {
    v5[0] = 1310721;
    memset(&v5[1], 0, 0xA4uLL);
    KeAddProcessorAffinityEx(v5, *(_DWORD *)(a1 + 36));
    LOBYTE(v3) = 1;
    ((void (__fastcall *)(__int64, _DWORD *))off_140C006A8[0])(v3, v5);
    KxAcquireSpinLock(&PpmIdleVetoLock);
    *(_QWORD *)(a1 + 0x8000) = 0LL;
    KxReleaseSpinLock(&PpmIdleVetoLock);
    *(_QWORD *)(a1 + 32776) = 0LL;
    ExFreePoolWithTag(v2, 0x694D5050u);
  }
  return 0LL;
}
