/*
 * XREFs of _RtlInitializeExtendedContext2@20 @ 0x4B35B8A0
 * Callers:
 *     _RtlInitializeExtendedContext@12 @ 0x4B35BA20 (_RtlInitializeExtendedContext@12.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpGetEntireXStateAreaLength@8 @ 0x4B35C44C (_RtlpGetEntireXStateAreaLength@8.c)
 *     _RtlpValidateContextFlags@8 @ 0x4B35C543 (_RtlpValidateContextFlags@8.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext2(
        PCONTEXT Context,
        ULONG ContextFlags,
        PCONTEXT_EX *ContextEx,
        ULONG64 EnabledExtendedFeatures)
{
  int v4; // ebx
  _CONTEXT_EX *v5; // esi
  NTSTATUS result; // eax
  _DWORD *v7; // eax
  unsigned int v8; // eax
  _CONTEXT_EX *v9; // eax
  _DWORD *v10; // eax
  ULONG Length; // ecx
  int v12; // edx
  unsigned int v13; // ebx
  ULONG v14; // ecx
  int v15; // edi
  size_t v16; // [esp-8h] [ebp-18h]
  ULONG v17; // [esp+8h] [ebp-8h]
  int v18; // [esp+Ch] [ebp-4h] BYREF

  v5 = 0;
  result = RtlpValidateContextFlags(ContextFlags, &v18);
  if ( result >= 0 )
  {
    if ( (ContextFlags & 0x10000) != 0 )
    {
      v7 = (_DWORD *)(((unsigned int)&Context->ContextFlags + 3) & 0xFFFFFFFC);
      v5 = (_CONTEXT_EX *)(v7 + 179);
      *v7 = ContextFlags;
      v7[182] = 716;
    }
    else if ( (ContextFlags & 0x100000) != 0 )
    {
      v8 = ((unsigned int)&Context->Dr2 + 3) & 0xFFFFFFF0;
      v5 = (_CONTEXT_EX *)(v8 + 1232);
      *(_DWORD *)(v8 + 48) = ContextFlags;
      *(_DWORD *)(v8 + 1244) = 1232;
    }
    else if ( (ContextFlags & 0x200000) != 0 )
    {
      v9 = (_CONTEXT_EX *)(((unsigned int)&Context->Dr0 + 3) & 0xFFFFFFF8);
      v5 = v9 + 13;
      v9->All.Offset = ContextFlags;
      v9[13].Legacy.Length = 416;
    }
    else if ( (ContextFlags & 0x400000) != 0 )
    {
      v10 = (_DWORD *)(((unsigned int)&Context->Dr2 + 3) & 0xFFFFFFF0);
      v5 = (_CONTEXT_EX *)(v10 + 228);
      *v10 = ContextFlags;
      v10[231] = 912;
    }
    Length = v5->Legacy.Length;
    v5->Legacy.Offset = -Length;
    v5->All.Offset = -Length;
    v5->All.Length = Length + 24;
    if ( (ContextFlags & 0x10020) != 65568 && (ContextFlags & 0x10000) != 0 )
      v5->Legacy.Length = 204;
    if ( (v18 & 2) != 0 )
    {
      v12 = EnabledExtendedFeatures;
      HIDWORD(v16) = v4;
      v13 = HIDWORD(EnabledExtendedFeatures);
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        v12 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & EnabledExtendedFeatures;
        v13 = (MEMORY[0x7FFE070C] | MEMORY[0x7FFE03DC] | 0x80000000) & HIDWORD(EnabledExtendedFeatures);
      }
      v18 = v12;
      LODWORD(v16) = RtlpGetEntireXStateAreaLength(v12, v13) - 512;
      v17 = v16;
      memset((void *)(((unsigned int)&v5[2].XState.Length + 3) & 0xFFFFFFC0), 0, v16);
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        *(_DWORD *)((((unsigned int)&v5[2].XState.Length + 3) & 0xFFFFFFC0) + 8) = v18;
        *(_DWORD *)((((unsigned int)&v5[2].XState.Length + 3) & 0xFFFFFFC0) + 0xC) = v13 | 0x80000000;
      }
      v14 = v17;
      v15 = (((unsigned int)&v5[2].XState.Length + 3) & 0xFFFFFFC0) - (_DWORD)v5;
      v5->All.Length = v17 + v15 - v5->All.Offset;
    }
    else
    {
      v14 = 0;
      v15 = 25;
    }
    v5->XState.Offset = v15;
    v5->XState.Length = v14;
    *ContextEx = v5;
    return 0;
  }
  return result;
}
