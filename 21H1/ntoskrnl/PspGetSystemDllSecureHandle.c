/*
 * XREFs of PspGetSystemDllSecureHandle @ 0x140A914E8
 * Callers:
 *     PspInitPhase3 @ 0x140A70188 (PspInitPhase3.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140206540 (ObFastDereferenceObject.c)
 *     PspReferenceSystemDll @ 0x14064E740 (PspReferenceSystemDll.c)
 *     MmGetSectionStrongImageReference @ 0x1408D35D8 (MmGetSectionStrongImageReference.c)
 */

__int64 __fastcall PspGetSystemDllSecureHandle(signed __int64 *a1, _QWORD *a2)
{
  struct _DMA_ADAPTER *v4; // rax
  struct _DMA_ADAPTER *v5; // rdi
  unsigned int SectionStrongImageReference; // ebx

  v4 = (struct _DMA_ADAPTER *)PspReferenceSystemDll(a1);
  v5 = v4;
  if ( !v4 )
    return 3221225480LL;
  SectionStrongImageReference = MmGetSectionStrongImageReference(0LL, 0, v4, a2);
  ObFastDereferenceObject(a1, v5);
  return SectionStrongImageReference;
}
