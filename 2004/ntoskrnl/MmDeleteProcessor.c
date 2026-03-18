/*
 * XREFs of MmDeleteProcessor @ 0x140528B00
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408B757C (KiStartDynamicProcessor.c)
 *     MmInitializeProcessor @ 0x14099BD3C (MmInitializeProcessor.c)
 *     KeStartAllProcessors @ 0x140A45D28 (KeStartAllProcessors.c)
 * Callees:
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiDeleteUltraThreadContext @ 0x1402E14F0 (MiDeleteUltraThreadContext.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall MmDeleteProcessor(__int64 a1)
{
  unsigned __int64 v1; // rdx
  void *v3; // rdi

  v1 = *(_QWORD *)(a1 + 33280);
  if ( v1 )
  {
    MiReleasePtes((__int64)&qword_140C4ED40, (_QWORD *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), 0x40u);
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
