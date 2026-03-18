/*
 * XREFs of SeGetTokenControlInformation @ 0x14091F694
 * Callers:
 *     SepCreateClientSecurityEx @ 0x140682590 (SepCreateClientSecurityEx.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1408BEE7C (AlpcpQueryTokenModifiedIdMessage.c)
 *     SepUpdateSiloInClientSecurity @ 0x14091F218 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 */

void __fastcall SeGetTokenControlInformation(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax

  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 56);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
}
