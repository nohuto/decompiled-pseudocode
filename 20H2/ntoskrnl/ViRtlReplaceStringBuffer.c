/*
 * XREFs of ViRtlReplaceStringBuffer @ 0x1409E8D4C
 * Callers:
 *     VerifierRtlAnsiStringToUnicodeString @ 0x1409E8780 (VerifierRtlAnsiStringToUnicodeString.c)
 *     VerifierRtlCreateUnicodeString @ 0x1409E87F0 (VerifierRtlCreateUnicodeString.c)
 *     VerifierRtlDowncaseUnicodeString @ 0x1409E8870 (VerifierRtlDowncaseUnicodeString.c)
 *     VerifierRtlDuplicateUnicodeString @ 0x1409E88C0 (VerifierRtlDuplicateUnicodeString.c)
 *     VerifierRtlOemStringToCountedUnicodeString @ 0x1409E89A0 (VerifierRtlOemStringToCountedUnicodeString.c)
 *     VerifierRtlOemStringToUnicodeString @ 0x1409E89F0 (VerifierRtlOemStringToUnicodeString.c)
 *     VerifierRtlUnicodeStringToAnsiString @ 0x1409E8A90 (VerifierRtlUnicodeStringToAnsiString.c)
 *     VerifierRtlUnicodeStringToCountedOemString @ 0x1409E8AE0 (VerifierRtlUnicodeStringToCountedOemString.c)
 *     VerifierRtlUnicodeStringToOemString @ 0x1409E8B30 (VerifierRtlUnicodeStringToOemString.c)
 *     VerifierRtlUpcaseUnicodeString @ 0x1409E8BD0 (VerifierRtlUpcaseUnicodeString.c)
 *     VerifierRtlUpcaseUnicodeStringToAnsiString @ 0x1409E8C20 (VerifierRtlUpcaseUnicodeStringToAnsiString.c)
 *     VerifierRtlUpcaseUnicodeStringToCountedOemString @ 0x1409E8C70 (VerifierRtlUpcaseUnicodeStringToCountedOemString.c)
 *     VerifierRtlUpcaseUnicodeStringToOemString @ 0x1409E8CC0 (VerifierRtlUpcaseUnicodeStringToOemString.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D75E0 (VeAllocatePoolWithTagPriority.c)
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
