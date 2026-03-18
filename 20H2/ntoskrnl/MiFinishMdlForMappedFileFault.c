/*
 * XREFs of MiFinishMdlForMappedFileFault @ 0x1402326FC
 * Callers:
 *     MiResolveMappedFileFault @ 0x140231830 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiReferenceControlAreaPfn @ 0x140232A28 (MiReferenceControlAreaPfn.c)
 *     PsGetIoPriorityThread @ 0x14028EE50 (PsGetIoPriorityThread.c)
 *     MiEndingOffsetWithLock @ 0x140297080 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x1402A1B60 (MiStartingOffset.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiObtainProtoReference @ 0x1402CA8B8 (MiObtainProtoReference.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiFlowThroughInsertNode @ 0x14032E38C (MiFlowThroughInsertNode.c)
 */

__int16 __fastcall MiFinishMdlForMappedFileFault(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  _QWORD *v5; // r14
  __int64 v7; // rbp
  __int64 v9; // r12
  __int64 v11; // r13
  __int64 v12; // rdi
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r15
  unsigned __int64 v17; // rax
  int v18; // ecx
  char v19; // r14
  int v20; // edx
  char v21; // cl
  char *v22; // rsi
  __int64 v23; // rcx
  int v24; // r8d
  __int64 v25; // r10
  __int64 v26; // rcx
  __int16 result; // ax
  char v28; // al
  int v29; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp+10h]
  int v31; // [rsp+80h] [rbp+18h] BYREF
  __int64 v32; // [rsp+88h] [rbp+20h]

  v5 = *(_QWORD **)(a1 + 208);
  v7 = *(unsigned int *)(a1 + 184);
  v9 = a3;
  v11 = *v5;
  MiReferenceControlAreaPfn(*v5, v5);
  v12 = *(_QWORD *)(a1 + 160);
  MiObtainProtoReference(v12, 0LL);
  v31 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v31);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  *(_QWORD *)(v12 + 24) ^= ((*(_QWORD *)(v12 + 24) + v9) ^ *(_QWORD *)(v12 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v13 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 320) - 0x58000000000LL + 8) | 0x8000000000000000uLL;
  v30 = v13;
  if ( a4 )
    MiFlowThroughInsertNode(a1, a4);
  v32 = *(_QWORD *)(a1 + 232);
  v14 = MI_READ_PTE_LOCK_FREE(v32);
  v15 = a5;
  *(_QWORD *)(a1 + 168) = v14;
  v16 = MiStartingOffset(v5, v13, v15);
  v17 = MiEndingOffsetWithLock(v5);
  v18 = *(_DWORD *)(a1 + 192);
  if ( (v18 & 0x20000) != 0 )
  {
    v18 &= ~0x20000u;
    v19 = 1;
    *(_DWORD *)(a1 + 192) = v18;
  }
  else
  {
    v19 = 0;
  }
  v20 = v18;
  if ( (*(_DWORD *)(v11 + 56) & 0x20) != 0 && v16 + v7 > v17 )
  {
    LODWORD(v7) = (v17 - v16 + 511) & 0xFFFFFE00;
    v20 = v18 | 0x20000;
    *(_DWORD *)(a1 + 192) = v18 | 0x20000;
  }
  v21 = a2;
  v22 = (char *)(a2 & 0xFFFFFFFFFFFFFFFEuLL);
  v23 = v21 & 1;
  if ( v23 && (v28 = *v22, *v22 == 1) || v23 && (v28 = *v22, *v22 == 2) )
  {
    if ( v22 && v28 != 2 )
      *(_DWORD *)(a1 + 192) = v20 | 8;
  }
  if ( (int)PsGetIoPriorityThread(KeGetCurrentThread()) < 2 )
    *(_DWORD *)(a1 + 192) = v24 | 0x80;
  *(_QWORD *)(a1 + 272) = v25;
  *(_WORD *)(a1 + 282) = v25;
  *(_WORD *)(a1 + 280) = 8 * ((((unsigned __int64)(unsigned int)v7 + 4095) >> 12) + 6);
  *(_QWORD *)(a1 + 304) = v25;
  *(_DWORD *)(a1 + 316) = v25;
  *(_DWORD *)(a1 + 312) = v7;
  v29 = v25;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v29);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) );
    v13 = v30;
  }
  *(_BYTE *)(v12 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v12);
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v26 = 48LL * *(_QWORD *)(a1 + 8 * ((__int64)(v32 - v13) >> 3) + 320) - 0x58000000000LL;
  result = *(_WORD *)(a1 + 282) | 0x42;
  *(_WORD *)(a1 + 282) = result;
  if ( !v19 )
  {
    result |= 0x4000u;
    *(_WORD *)(a1 + 282) = result;
  }
  *(_QWORD *)(a1 + 96) = v16;
  *(_QWORD *)(a1 + 240) = v13;
  *(_QWORD *)(a1 + 248) = v26;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = v11;
  return result;
}
