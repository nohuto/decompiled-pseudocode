/*
 * XREFs of MiInitializeHardFaultPfn @ 0x1402B9C80
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x1402B9F20 (MiBuildMdlForMappedFileFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiSetPfnTbFlushStamp @ 0x1402B7890 (MiSetPfnTbFlushStamp.c)
 *     MiGetContainingPageTable @ 0x1402B9DD0 (MiGetContainingPageTable.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 */

__int64 __fastcall MiInitializeHardFaultPfn(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 ContainingPageTable; // r14
  char v13; // al
  __int64 v14; // rax
  int v15; // eax
  char v16; // cl
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 result; // rax
  int v21; // [rsp+68h] [rbp+20h] BYREF

  ContainingPageTable = MiGetContainingPageTable(a3);
  v21 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v21, v9, v10, v11);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  *(_QWORD *)(a1 + 24) &= 0xFFFFFFF000000000uLL;
  *(_QWORD *)(a1 + 40) |= 0x8000000000000000uLL;
  v13 = *(_BYTE *)(a1 + 34) | 0x20;
  *(_WORD *)(a1 + 32) = 1;
  *(_BYTE *)(a1 + 34) = v13;
  v14 = a2 + 32;
  if ( !a2 )
    v14 = 0LL;
  *(_QWORD *)a1 = v14;
  v15 = *(_DWORD *)(a2 + 192) >> 9;
  v16 = *(_BYTE *)(a1 + 35) & 0xF8;
  v17 = *(_DWORD *)(a2 + 192) >> 12;
  *(_QWORD *)(a1 + 8) = a3;
  if ( a4 )
    LOBYTE(v17) = v15;
  v18 = (ContainingPageTable ^ *(_QWORD *)(a1 + 40)) & 0xFFFFFFFFFLL;
  *(_BYTE *)(a1 + 35) = v16 | v17 & 7;
  *(_QWORD *)(a1 + 40) ^= v18;
  v19 = a5;
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 2;
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != (_DWORD)v19 )
    MiChangePageAttribute(a1, v19, 1LL);
  MiSetPfnTbFlushStamp(a1, 0, 1);
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
