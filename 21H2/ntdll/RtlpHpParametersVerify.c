/*
 * XREFs of RtlpHpParametersVerify @ 0x18010B4D4
 * Callers:
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 * Callees:
 *     RtlCompareMemoryUlong @ 0x1800A2030 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall RtlpHpParametersVerify(__int64 a1)
{
  int v2; // edi
  bool v3; // zf
  unsigned int v5; // eax
  int v6; // edi

  v2 = *(_DWORD *)(a1 + 12);
  if ( *(_WORD *)a1 == 2
    && *(_WORD *)(a1 + 2) == 80
    && (*(_DWORD *)(a1 + 4) & 0xFFFFFFFE) == 0
    && RtlCompareMemoryUlong((PVOID)(a1 + 48), 0x20uLL, 0) == 32 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
    {
      v3 = RtlCompareMemoryUlong((PVOID)(a1 + 8), 0x28uLL, 0) == 40;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 4) )
        return 0LL;
      if ( *(_DWORD *)(a1 + 8) )
        return 0LL;
      if ( (unsigned int)(v2 - 1) > 0xE )
        return 0LL;
      if ( (v2 & 2) != 0 )
        return 0LL;
      if ( *(_DWORD *)(a1 + 16) != -1 )
        return 0LL;
      if ( RtlCompareMemoryUlong((PVOID)(a1 + 32), 0x10uLL, 0) != 16 )
        return 0LL;
      v5 = v2 & 0xFFFFFFF3;
      if ( *(_QWORD *)(a1 + 24) )
      {
        if ( v5 )
          return 0LL;
      }
      v6 = v2 & 0xC;
      if ( v6 == 8 )
        return 0LL;
      v3 = v6 == 0 || v5 == 0;
    }
    if ( v3 )
      return 1LL;
  }
  return 0LL;
}
