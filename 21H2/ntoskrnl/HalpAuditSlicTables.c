/*
 * XREFs of HalpAuditSlicTables @ 0x140A66410
 * Callers:
 *     HalpAuditAcpiTables @ 0x140A66350 (HalpAuditAcpiTables.c)
 * Callees:
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 */

__int64 __fastcall HalpAuditSlicTables(__int64 a1)
{
  char v1; // si
  char v2; // r15
  unsigned int v3; // edi
  char i; // r14
  __int64 v6; // rbp
  __int64 result; // rax
  char v8; // dl
  __int64 v9; // r9
  unsigned int v10; // eax

  v1 = 0;
  v2 = 0;
  v3 = 0;
  for ( i = 1; v3 < *(_DWORD *)(a1 + 4); ++v3 )
  {
    v6 = 32LL * v3;
    if ( v3 )
    {
      v8 = 0;
      v9 = 32LL * (v3 - 1);
      v10 = *(_DWORD *)(a1 + v6 + 24);
      if ( *(_QWORD *)(a1 + v6 + 8) == *(_QWORD *)(v9 + a1 + 8) )
        v8 = i;
      i = v8;
      if ( v10 != *(_DWORD *)(v9 + a1 + 24)
        || RtlCompareMemory(*(const void **)(a1 + v6 + 32), *(const void **)(v9 + a1 + 32), 8LL * v10) )
      {
        v2 = 1;
      }
    }
    if ( *(_DWORD *)(a1 + v6 + 24) )
      v1 = 1;
  }
  HalpAuditResults = 0LL;
  result = *(unsigned int *)(a1 + 4);
  LODWORD(HalpAuditResults) = *(_DWORD *)(a1 + 4);
  if ( i )
    HIDWORD(HalpAuditResults) |= 1u;
  if ( v1 )
    HIDWORD(HalpAuditResults) |= 2u;
  if ( v2 )
    HIDWORD(HalpAuditResults) |= 4u;
  return result;
}
