/*
 * XREFs of HalpGenericErrorSourceRecovery @ 0x1404CFF58
 * Callers:
 *     HalpRequestGenericErrorRecovery @ 0x1404D0480 (HalpRequestGenericErrorRecovery.c)
 * Callees:
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 *     HalpGhesMemoryErrorHandler @ 0x1404D0078 (HalpGhesMemoryErrorHandler.c)
 *     HalpPmemErrorDeferredRecovery @ 0x1404D0388 (HalpPmemErrorDeferredRecovery.c)
 */

__int64 __fastcall HalpGenericErrorSourceRecovery(__int64 a1, _DWORD *a2)
{
  unsigned int *v2; // r14
  __int64 v5; // r15
  _DWORD *v6; // rbp
  unsigned int v7; // ebx
  int v8; // r12d
  _DWORD *v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rdx

  v2 = (unsigned int *)(a1 + 128);
  v5 = 0LL;
  v6 = 0LL;
  v7 = -1073741637;
  v8 = 0;
  if ( *(_WORD *)(a1 + 10) )
  {
    v9 = (_DWORD *)(a1 + 144);
    while ( 1 )
    {
      if ( (unsigned int)(v9[8] - 2) <= 1 )
        goto LABEL_18;
      if ( RtlCompareMemory(v9, &MEMORY_ERROR_SECTION_GUID, 0x10uLL) == 16 )
        break;
      if ( RtlCompareMemory(v9, PMEM_ERROR_SECTION_GUID, 0x10uLL) == 16 )
      {
        v12 = *v2;
        if ( *(_DWORD *)(a1 + 20) >= (unsigned int)(v12 + *(v9 - 3)) )
          v6 = (_DWORD *)(a1 + v12);
        if ( !v6 || !v6[21] )
        {
          v7 = -1073741637;
          goto LABEL_16;
        }
        v11 = HalpPmemErrorDeferredRecovery(v6);
        goto LABEL_14;
      }
LABEL_16:
      if ( (v7 & 0x80000000) == 0 )
      {
        *a2 = 2;
        return v7;
      }
      v2 += 18;
      v9 += 18;
LABEL_18:
      if ( ++v8 >= (unsigned int)*(unsigned __int16 *)(a1 + 10) )
        return v7;
    }
    v10 = *v2;
    if ( *(_DWORD *)(a1 + 20) >= (unsigned int)(v10 + *(v9 - 3)) )
      v5 = a1 + v10;
    v11 = HalpGhesMemoryErrorHandler(v5);
LABEL_14:
    v7 = v11;
    goto LABEL_16;
  }
  return v7;
}
