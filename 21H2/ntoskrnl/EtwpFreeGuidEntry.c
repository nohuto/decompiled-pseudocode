/*
 * XREFs of EtwpFreeGuidEntry @ 0x1406BCEEC
 * Callers:
 *     EtwpAddGuidEntry @ 0x1406BAE90 (EtwpAddGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406ECBA8 (EtwpUnreferenceGuidEntry.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ObDereferenceSecurityDescriptor @ 0x1406544C0 (ObDereferenceSecurityDescriptor.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406ECBA8 (EtwpUnreferenceGuidEntry.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeGuidEntry(char *P)
{
  void *v2; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char **v4; // rdx
  PVOID *v5; // rcx

  if ( *((_QWORD *)P + 50) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(*((_QWORD *)P + 50) + 408LL, 0LL);
    *(_QWORD *)(*((_QWORD *)P + 50) + 416LL) = KeGetCurrentThread();
    v4 = (char **)*((_QWORD *)P + 2);
    if ( v4[1] != P + 16 || (v5 = (PVOID *)*((_QWORD *)P + 3), *v5 != P + 16) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = (char *)v5;
    *(_QWORD *)(*((_QWORD *)P + 50) + 416LL) = 0LL;
    ExReleasePushLockEx(*((_QWORD *)P + 50) + 408LL, 0LL);
    KeLeaveCriticalRegion();
    EtwpUnreferenceGuidEntry(*((PVOID *)P + 50));
  }
  ObDereferenceSecurityDescriptor(*((_QWORD *)P + 9), 1u);
  v2 = (void *)*((_QWORD *)P + 48);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)P + 49) + 4112LL), 0xFFFFFFFF);
  ExFreePoolWithTag(P, 0);
}
