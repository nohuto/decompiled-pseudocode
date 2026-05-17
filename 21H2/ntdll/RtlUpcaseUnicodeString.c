/*
 * XREFs of RtlUpcaseUnicodeString @ 0x180015D20
 * Callers:
 *     RtlpComputeLangListCheckSum @ 0x18001532C (RtlpComputeLangListCheckSum.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18001FD40 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCreateServiceSid @ 0x18003FA80 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x180084530 (RtlCreateVirtualAccountSid.c)
 * Callees:
 *     NLS_UPCASE @ 0x180016160 (NLS_UPCASE.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x18006EBE0 (NtdllpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlUpcaseUnicodeString(__int64 a1, unsigned __int16 *a2, char a3)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned int v7; // r10d
  __int16 v8; // ax
  __int64 v9; // r9
  __int64 StringRoutine; // rax

  v5 = *a2;
  v6 = 0;
  if ( a3 )
  {
    *(_WORD *)(a1 + 2) = v5;
    StringRoutine = NtdllpAllocateStringRoutine(v5);
    *(_QWORD *)(a1 + 8) = StringRoutine;
    if ( !StringRoutine )
      return 3221225495LL;
    LOWORD(v5) = *a2;
  }
  else if ( (unsigned __int16)v5 > *(_WORD *)(a1 + 2) )
  {
    return 2147483653LL;
  }
  v7 = (unsigned __int16)v5 >> 1;
  while ( v6 < v7 )
  {
    v8 = NLS_UPCASE(*(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * v6));
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * v9) = v8;
    ++v6;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
