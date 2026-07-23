/*
 * XREFs of MiFinishMdlForMappedFileFault @ 0x1403251BC
 * Callers:
 *     MiResolveMappedFileFault @ 0x1403241D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiFlowThroughInsertNode @ 0x14024E3EC (MiFlowThroughInsertNode.c)
 *     PsGetIoPriorityThread @ 0x1402E7060 (PsGetIoPriorityThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiReferenceControlAreaPfn @ 0x140324CD0 (MiReferenceControlAreaPfn.c)
 *     MiObtainProtoReference @ 0x140324D5C (MiObtainProtoReference.c)
 *     MiEndingOffsetWithLock @ 0x1403274E0 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 */

__int16 __fastcall MiFinishMdlForMappedFileFault(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, unsigned int a5)
{
  __int64 *v5; // r14
  __int64 v7; // rbp
  __int64 v9; // r12
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r15
  unsigned __int64 v22; // rax
  int v23; // ecx
  char v24; // r14
  int v25; // edx
  char v26; // cl
  char *v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r10
  __int64 v33; // rcx
  __int16 result; // ax
  char v35; // al
  int v36; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v37; // [rsp+78h] [rbp+10h]
  int v38; // [rsp+80h] [rbp+18h] BYREF
  __int64 v39; // [rsp+88h] [rbp+20h]

  v5 = *(__int64 **)(a1 + 208);
  v7 = *(unsigned int *)(a1 + 184);
  v9 = a3;
  v11 = *v5;
  MiReferenceControlAreaPfn(*v5, (__int64)v5, a3);
  v12 = *(_QWORD *)(a1 + 160);
  MiObtainProtoReference(v12, 0LL, v13, v14);
  v38 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v38, v15, v16, v17);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  *(_QWORD *)(v12 + 24) ^= ((*(_QWORD *)(v12 + 24) + v9) ^ *(_QWORD *)(v12 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v18 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 320) - 0x58000000000LL + 8) | 0x8000000000000000uLL;
  v37 = v18;
  if ( a4 )
    MiFlowThroughInsertNode(a1, a4, v16);
  v39 = *(_QWORD *)(a1 + 232);
  v19 = MI_READ_PTE_LOCK_FREE(v39);
  v20 = a5;
  *(_QWORD *)(a1 + 168) = v19;
  v21 = MiStartingOffset(v5, v18, v20);
  v22 = MiEndingOffsetWithLock(v5);
  v23 = *(_DWORD *)(a1 + 192);
  if ( (v23 & 0x20000) != 0 )
  {
    v23 &= ~0x20000u;
    v24 = 1;
    *(_DWORD *)(a1 + 192) = v23;
  }
  else
  {
    v24 = 0;
  }
  v25 = v23;
  if ( (*(_DWORD *)(v11 + 56) & 0x20) != 0 && v21 + v7 > v22 )
  {
    LODWORD(v7) = (v22 - v21 + 511) & 0xFFFFFE00;
    v25 = v23 | 0x20000;
    *(_DWORD *)(a1 + 192) = v23 | 0x20000;
  }
  v26 = a2;
  v27 = (char *)(a2 & 0xFFFFFFFFFFFFFFFEuLL);
  v28 = v26 & 1;
  if ( v28 && (v35 = *v27, *v27 == 1) || v28 && (v35 = *v27, *v27 == 2) )
  {
    if ( v27 && v35 != 2 )
      *(_DWORD *)(a1 + 192) = v25 | 8;
  }
  if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) < 2 )
  {
    LODWORD(v30) = v30 | 0x80;
    *(_DWORD *)(a1 + 192) = v30;
  }
  *(_QWORD *)(a1 + 272) = v32;
  *(_WORD *)(a1 + 282) = v32;
  *(_WORD *)(a1 + 280) = 8 * ((((unsigned __int64)(unsigned int)v7 + 4095) >> 12) + 6);
  *(_QWORD *)(a1 + 304) = v32;
  *(_DWORD *)(a1 + 316) = v32;
  *(_DWORD *)(a1 + 312) = v7;
  v36 = v32;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v36, v29, v30, v31);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) );
    v18 = v37;
  }
  *(_BYTE *)(v12 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v12);
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v33 = 48LL * *(_QWORD *)(a1 + 8 * ((__int64)(v39 - v18) >> 3) + 320) - 0x58000000000LL;
  result = *(_WORD *)(a1 + 282) | 0x42;
  *(_WORD *)(a1 + 282) = result;
  if ( !v24 )
  {
    result |= 0x4000u;
    *(_WORD *)(a1 + 282) = result;
  }
  *(_QWORD *)(a1 + 96) = v21;
  *(_QWORD *)(a1 + 240) = v18;
  *(_QWORD *)(a1 + 248) = v33;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = v11;
  return result;
}
