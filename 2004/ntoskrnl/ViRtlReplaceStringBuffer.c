/*
 * XREFs of ViRtlReplaceStringBuffer @ 0x1409E2D2C
 * Callers:
 *     VerifierRtlAnsiStringToUnicodeString @ 0x1409E2760 (VerifierRtlAnsiStringToUnicodeString.c)
 *     VerifierRtlCreateUnicodeString @ 0x1409E27D0 (VerifierRtlCreateUnicodeString.c)
 *     VerifierRtlDowncaseUnicodeString @ 0x1409E2850 (VerifierRtlDowncaseUnicodeString.c)
 *     VerifierRtlDuplicateUnicodeString @ 0x1409E28A0 (VerifierRtlDuplicateUnicodeString.c)
 *     VerifierRtlOemStringToCountedUnicodeString @ 0x1409E2980 (VerifierRtlOemStringToCountedUnicodeString.c)
 *     VerifierRtlOemStringToUnicodeString @ 0x1409E29D0 (VerifierRtlOemStringToUnicodeString.c)
 *     VerifierRtlUnicodeStringToAnsiString @ 0x1409E2A70 (VerifierRtlUnicodeStringToAnsiString.c)
 *     VerifierRtlUnicodeStringToCountedOemString @ 0x1409E2AC0 (VerifierRtlUnicodeStringToCountedOemString.c)
 *     VerifierRtlUnicodeStringToOemString @ 0x1409E2B10 (VerifierRtlUnicodeStringToOemString.c)
 *     VerifierRtlUpcaseUnicodeString @ 0x1409E2BB0 (VerifierRtlUpcaseUnicodeString.c)
 *     VerifierRtlUpcaseUnicodeStringToAnsiString @ 0x1409E2C00 (VerifierRtlUpcaseUnicodeStringToAnsiString.c)
 *     VerifierRtlUpcaseUnicodeStringToCountedOemString @ 0x1409E2C50 (VerifierRtlUpcaseUnicodeStringToCountedOemString.c)
 *     VerifierRtlUpcaseUnicodeStringToOemString @ 0x1409E2CA0 (VerifierRtlUpcaseUnicodeStringToOemString.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D15C0 (VeAllocatePoolWithTagPriority.c)
 */

void __fastcall ViRtlReplaceStringBuffer(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v5; // ebp
  PVOID PoolWithTagPriority; // rax
  PVOID v7; // rdi

  if ( (MmVerifierData & 9) != 0 && *(_WORD *)(a1 + 2) )
  {
    v5 = *(unsigned __int16 *)(a1 + 2);
    PoolWithTagPriority = VeAllocatePoolWithTagPriority(
                            (POOL_TYPE)129,
                            *(unsigned __int16 *)(a1 + 2),
                            0x72745356u,
                            HighPoolPriority,
                            a3);
    v7 = PoolWithTagPriority;
    if ( PoolWithTagPriority )
      memmove(PoolWithTagPriority, *(const void **)(a1 + 8), v5);
    else
      *a2 = -1073741801;
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    *(_QWORD *)(a1 + 8) = v7;
  }
}
