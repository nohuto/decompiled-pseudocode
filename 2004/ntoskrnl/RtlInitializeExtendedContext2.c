/*
 * XREFs of RtlInitializeExtendedContext2 @ 0x1402EA760
 * Callers:
 *     KiDispatchException @ 0x1402E5930 (KiDispatchException.c)
 *     RtlRaiseException @ 0x1402E6830 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x1402E6C20 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402E70E0 (RtlUnwindEx.c)
 *     RtlInitializeExtendedContext @ 0x1402E9C90 (RtlInitializeExtendedContext.c)
 *     KiContinuePreviousModeUser @ 0x1402EA1A0 (KiContinuePreviousModeUser.c)
 *     RtlUnwind @ 0x14035E150 (RtlUnwind.c)
 *     NtCreateUserProcess @ 0x1406149A0 (NtCreateUserProcess.c)
 *     NtCreateThreadEx @ 0x1406B1710 (NtCreateThreadEx.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x140354840 (RtlpGetEntireXStateAreaLength.c)
 *     memset @ 0x14040A280 (memset.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext2(
        PCONTEXT Context,
        ULONG ContextFlags,
        PCONTEXT_EX *ContextEx,
        ULONG64 EnabledExtendedFeatures)
{
  _CONTEXT_EX *v4; // rbx
  ULONG64 v5; // r14
  char v7; // r8
  _DWORD *v8; // rcx
  ULONG Length; // ecx
  NTSTATUS result; // eax
  ULONG v11; // ebp
  LONG v12; // esi
  ULONG v13; // esi

  v4 = 0LL;
  v5 = EnabledExtendedFeatures;
  if ( (ContextFlags & 0x27FFFF80) != 0x10000
    && (ContextFlags & 0x27FFFFA0) != 0x100000
    && (ContextFlags & 0x7FFFFF0) != 0x200000
    && (ContextFlags & 0x7FFFFE0) != 0x400000 )
  {
    return -1073741811;
  }
  v7 = 1;
  if ( (ContextFlags & 0x100040) == 1048640 || (ContextFlags & 0x10040) == 65600 )
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
      return -1073741637;
    v7 = 3;
  }
  if ( (ContextFlags & 0x10000) != 0 )
  {
    v8 = (_DWORD *)(((unsigned __int64)&Context->P1Home + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v4 = (_CONTEXT_EX *)(v8 + 179);
LABEL_16:
    *v8 = ContextFlags;
    goto LABEL_8;
  }
  if ( (ContextFlags & 0x100000) == 0 )
  {
    if ( (ContextFlags & 0x200000) != 0 )
    {
      v8 = (_DWORD *)(((unsigned __int64)&Context->P1Home + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v4 = (_CONTEXT_EX *)(v8 + 104);
    }
    else
    {
      if ( (ContextFlags & 0x400000) == 0 )
        goto LABEL_9;
      v8 = (_DWORD *)(((unsigned __int64)&Context->P2Home + 7) & 0xFFFFFFFFFFFFFFF0uLL);
      v4 = (_CONTEXT_EX *)(v8 + 228);
    }
    goto LABEL_16;
  }
  v8 = (_DWORD *)(((unsigned __int64)&Context->P2Home + 7) & 0xFFFFFFFFFFFFFFF0uLL);
  v8[12] = ContextFlags;
  v4 = (_CONTEXT_EX *)(v8 + 308);
LABEL_8:
  v4->Legacy.Length = (_DWORD)v4 - (_DWORD)v8;
LABEL_9:
  Length = v4->Legacy.Length;
  v4->Legacy.Offset = -Length;
  v4->All.Offset = -Length;
  v4->All.Length = Length + 24;
  if ( (ContextFlags & 0x10020) != 65568 && (ContextFlags & 0x10000) != 0 )
    v4->Legacy.Length = 204;
  if ( (v7 & 2) != 0 )
  {
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      v5 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL) & EnabledExtendedFeatures;
    v11 = RtlpGetEntireXStateAreaLength(v5) - 512;
    memset((void *)(((unsigned __int64)&v4[2].XState.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL), 0, v11);
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)&v4[2].XState.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v5 | 0x8000000000000000uLL;
    v12 = (((_DWORD)v4 + 87) & 0xFFFFFFC0) - (_DWORD)v4;
    v4->XState.Offset = v12;
    v13 = v11 + v12 - v4->All.Offset;
    v4->XState.Length = v11;
    result = 0;
    v4->All.Length = v13;
    *ContextEx = v4;
  }
  else
  {
    v4->XState = (CONTEXT_CHUNK)25LL;
    result = 0;
    *ContextEx = v4;
  }
  return result;
}
