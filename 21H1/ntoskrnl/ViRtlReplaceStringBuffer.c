/*
 * XREFs of ViRtlReplaceStringBuffer @ 0x1409E2CCC
 * Callers:
 *     VerifierRtlAnsiStringToUnicodeString @ 0x1409E2700 (VerifierRtlAnsiStringToUnicodeString.c)
 *     VerifierRtlCreateUnicodeString @ 0x1409E2770 (VerifierRtlCreateUnicodeString.c)
 *     VerifierRtlDowncaseUnicodeString @ 0x1409E27F0 (VerifierRtlDowncaseUnicodeString.c)
 *     VerifierRtlDuplicateUnicodeString @ 0x1409E2840 (VerifierRtlDuplicateUnicodeString.c)
 *     VerifierRtlOemStringToCountedUnicodeString @ 0x1409E2920 (VerifierRtlOemStringToCountedUnicodeString.c)
 *     VerifierRtlOemStringToUnicodeString @ 0x1409E2970 (VerifierRtlOemStringToUnicodeString.c)
 *     VerifierRtlUnicodeStringToAnsiString @ 0x1409E2A10 (VerifierRtlUnicodeStringToAnsiString.c)
 *     VerifierRtlUnicodeStringToCountedOemString @ 0x1409E2A60 (VerifierRtlUnicodeStringToCountedOemString.c)
 *     VerifierRtlUnicodeStringToOemString @ 0x1409E2AB0 (VerifierRtlUnicodeStringToOemString.c)
 *     VerifierRtlUpcaseUnicodeString @ 0x1409E2B50 (VerifierRtlUpcaseUnicodeString.c)
 *     VerifierRtlUpcaseUnicodeStringToAnsiString @ 0x1409E2BA0 (VerifierRtlUpcaseUnicodeStringToAnsiString.c)
 *     VerifierRtlUpcaseUnicodeStringToCountedOemString @ 0x1409E2BF0 (VerifierRtlUpcaseUnicodeStringToCountedOemString.c)
 *     VerifierRtlUpcaseUnicodeStringToOemString @ 0x1409E2C40 (VerifierRtlUpcaseUnicodeStringToOemString.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D15B0 (VeAllocatePoolWithTagPriority.c)
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
