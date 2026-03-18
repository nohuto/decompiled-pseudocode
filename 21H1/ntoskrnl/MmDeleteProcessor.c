/*
 * XREFs of MmDeleteProcessor @ 0x1405284B0
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408B625C (KiStartDynamicProcessor.c)
 *     MmInitializeProcessor @ 0x14099A5A0 (MmInitializeProcessor.c)
 *     KeStartAllProcessors @ 0x140A404CC (KeStartAllProcessors.c)
 * Callees:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiDeleteUltraThreadContext @ 0x1403265F0 (MiDeleteUltraThreadContext.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MmDeleteProcessor(__int64 a1)
{
  unsigned __int64 v1; // rdx
  void *v3; // rdi

  v1 = *(_QWORD *)(a1 + 33280);
  if ( v1 )
  {
    MiReleasePtes((__int64)&qword_140C4EE80, (_QWORD *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), 0x40u);
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
