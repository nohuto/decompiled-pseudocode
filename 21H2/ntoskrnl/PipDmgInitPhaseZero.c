/*
 * XREFs of PipDmgInitPhaseZero @ 0x140B01314
 * Callers:
 *     PiDmaGuardInitialize @ 0x1403C09F8 (PiDmaGuardInitialize.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 PipDmgInitPhaseZero()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF
  int v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v1 = 0;
  if ( ((int (__fastcall *)(__int64, __int64, char *, int *))off_140C020D8[0])(47LL, 1LL, &v1, &v2) >= 0 && v2 == 1 )
  {
    PipHalIommuSecurityEnabled = v1;
    if ( v1 )
    {
LABEL_8:
      PipDmaGuardPolicy = 3;
      ExInitializeResourceLite(&PipDgqListLock);
      qword_140C44538 = (__int64)&KdDebuggerEnabled + 7;
      *(PBOOLEAN *)((char *)&KdDebuggerEnabled + 7) = (PBOOLEAN)&KdDebuggerEnabled + 7;
      return 0LL;
    }
  }
  else
  {
    PipHalIommuSecurityEnabled = 0;
  }
  if ( PipDmaGuardTestMode )
    goto LABEL_8;
  PipDmaGuardPolicy = 0;
  return 0LL;
}
