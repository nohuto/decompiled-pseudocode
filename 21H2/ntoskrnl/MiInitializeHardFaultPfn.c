/*
 * XREFs of MiInitializeHardFaultPfn @ 0x1402E2DF0
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x1402E2620 (MiBuildMdlForMappedFileFault.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1402E2CA0 (MiGetContainingPageTable.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E49B0 (MiSetPfnTbFlushStamp.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 */

__int64 __fastcall MiInitializeHardFaultPfn(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, unsigned int a5)
{
  __int64 ContainingPageTable; // r14
  char v10; // al
  __int64 v11; // rax
  int v12; // eax
  char v13; // cl
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 result; // rax
  int v18; // [rsp+68h] [rbp+20h] BYREF

  ContainingPageTable = MiGetContainingPageTable(a3);
  v18 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v18);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  *(_QWORD *)(a1 + 24) &= 0xFFFFFFF000000000uLL;
  *(_QWORD *)(a1 + 40) |= 0x8000000000000000uLL;
  v10 = *(_BYTE *)(a1 + 34) | 0x20;
  *(_WORD *)(a1 + 32) = 1;
  *(_BYTE *)(a1 + 34) = v10;
  v11 = a2 + 32;
  if ( !a2 )
    v11 = 0LL;
  *(_QWORD *)a1 = v11;
  v12 = *(_DWORD *)(a2 + 192) >> 9;
  v13 = *(_BYTE *)(a1 + 35) & 0xF8;
  v14 = *(_DWORD *)(a2 + 192) >> 12;
  *(_QWORD *)(a1 + 8) = a3;
  if ( a4 )
    LOBYTE(v14) = v12;
  v15 = (ContainingPageTable ^ *(_QWORD *)(a1 + 40)) & 0xFFFFFFFFFLL;
  *(_BYTE *)(a1 + 35) = v13 | v14 & 7;
  *(_QWORD *)(a1 + 40) ^= v15;
  v16 = a5;
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 2;
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != (_DWORD)v16 )
    MiChangePageAttribute(a1, v16, 1LL);
  MiSetPfnTbFlushStamp(a1, 0LL, 1LL);
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
