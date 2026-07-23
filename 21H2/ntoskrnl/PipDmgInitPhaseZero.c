/*
 * XREFs of PipDmgInitPhaseZero @ 0x140A54178
 * Callers:
 *     PiDmaGuardInitialize @ 0x1403B7498 (PiDmaGuardInitialize.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 PipDmgInitPhaseZero()
{
  char v0; // al
  char v2; // [rsp+40h] [rbp+8h] BYREF
  int v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v2 = 0;
  if ( ((int (__fastcall *)(__int64, __int64, char *, int *))off_140C00A68[0])(47LL, 1LL, &v2, &v3) >= 0 && v3 == 1 )
    v0 = v2;
  else
    v0 = 0;
  PipHalIommuSecurityEnabled = v0;
  if ( v0 || PipDmaGuardTestMode )
  {
    PipDmaGuardPolicy = 3;
    ExInitializeResourceLite(&PipDgqListLock);
    qword_140C430F8 = (__int64)&PipDgqListHead;
    PipDgqListHead = &PipDgqListHead;
  }
  else
  {
    PipDmaGuardPolicy = 0;
  }
  return 0LL;
}
