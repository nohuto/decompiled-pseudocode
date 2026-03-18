/*
 * XREFs of MmDeleteProcessor @ 0x14052C4D0
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BD198 (KiStartDynamicProcessor.c)
 *     MmInitializeProcessor @ 0x1409A1E3C (MmInitializeProcessor.c)
 *     KeStartAllProcessors @ 0x140A4BFC8 (KeStartAllProcessors.c)
 * Callees:
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiDeleteUltraThreadContext @ 0x1403338B8 (MiDeleteUltraThreadContext.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MmDeleteProcessor(__int64 a1)
{
  unsigned __int64 v1; // rdx
  void *v3; // rdi

  v1 = *(_QWORD *)(a1 + 33280);
  if ( v1 )
  {
    MiReleasePtes((__int64)&qword_140C4EDC0, (_QWORD *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), 0x40u);
    *(_QWORD *)(a1 + 33280) = 0LL;
  }
  v3 = *(void **)(a1 + 32760);
  if ( v3 )
  {
    MiDeleteUltraThreadContext((__int64)v3 + 12352);
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 32760) = 0LL;
  }
}
