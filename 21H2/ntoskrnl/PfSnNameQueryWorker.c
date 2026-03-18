/*
 * XREFs of PfSnNameQueryWorker @ 0x1402298D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x140229990 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PfSnVolumeKeyQuery @ 0x1406A05E4 (PfSnVolumeKeyQuery.c)
 */

void __fastcall PfSnNameQueryWorker(struct _EX_RUNDOWN_REF *a1)
{
  volatile LONG *v1; // rdi
  KIRQL v3; // al
  unsigned __int64 *Count; // rsi
  void *v5; // rsi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v1 = (volatile LONG *)&a1[72];
  while ( 1 )
  {
    v3 = ExAcquireSpinLockExclusive(v1);
    Count = (unsigned __int64 *)a1[67].Count;
    if ( !Count )
      break;
    a1[67].Count = *Count;
    *Count = 0LL;
    ExReleaseSpinLockExclusive(v1, v3);
    v5 = (void *)Count[1];
    if ( (*(int (__fastcall **)(unsigned __int64, void *, __int64 *))(qword_140C54638 + 16))(a1[44].Count, v5, &v6) >= 0 )
      PfSnVolumeKeyQuery(a1, v6, v5);
    ObfDereferenceObject(v5);
  }
  a1[71].Count = 0LL;
  ExReleaseSpinLockExclusive(v1, v3);
  ExReleaseRundownProtection(a1 + 45);
}
