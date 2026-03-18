/*
 * XREFs of MiFinishMdlForMappedFileFault @ 0x14025F04C
 * Callers:
 *     MiResolveMappedFileFault @ 0x14025E350 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiEndingOffsetWithLock @ 0x1402245D4 (MiEndingOffsetWithLock.c)
 *     MiObtainProtoReference @ 0x140229634 (MiObtainProtoReference.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiStartingOffset @ 0x140245D90 (MiStartingOffset.c)
 *     MiReferenceControlAreaPfn @ 0x14025F72C (MiReferenceControlAreaPfn.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     PsGetIoPriorityThread @ 0x1402B8E80 (PsGetIoPriorityThread.c)
 *     MiFlowThroughInsertNode @ 0x14035D7CC (MiFlowThroughInsertNode.c)
 */

__int16 __fastcall MiFinishMdlForMappedFileFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 *v5; // r14
  __int64 v7; // rbp
  __int64 v9; // r12
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  unsigned int v16; // r8d
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  char v20; // r14
  __int64 v21; // rdx
  char v22; // cl
  char *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r10
  __int64 v30; // rcx
  __int16 result; // ax
  char v32; // al
  int v33; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp+10h]
  int v35; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v36; // [rsp+88h] [rbp+20h]

  v5 = *(__int64 **)(a1 + 208);
  v7 = *(unsigned int *)(a1 + 184);
  v9 = (unsigned int)a3;
  v11 = *v5;
  MiReferenceControlAreaPfn(*v5, v5, a3);
  v12 = *(_QWORD *)(a1 + 160);
  MiObtainProtoReference(v12, 0LL);
  v35 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v35, v13);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  *(_QWORD *)(v12 + 24) ^= ((*(_QWORD *)(v12 + 24) + v9) ^ *(_QWORD *)(v12 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v14 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 320) - 0x58000000000LL + 8) | 0x8000000000000000uLL;
  v34 = v14;
  if ( a4 )
    MiFlowThroughInsertNode(a1, a4);
  v36 = *(_QWORD *)(a1 + 232);
  v15 = MI_READ_PTE_LOCK_FREE(v36);
  v16 = a5;
  *(_QWORD *)(a1 + 168) = v15;
  v17 = MiStartingOffset(v5, v14, v16);
  v18 = MiEndingOffsetWithLock(v5);
  v19 = *(_DWORD *)(a1 + 192);
  if ( (v19 & 0x20000) != 0 )
  {
    v19 &= ~0x20000u;
    v20 = 1;
    *(_DWORD *)(a1 + 192) = v19;
  }
  else
  {
    v20 = 0;
  }
  v21 = v19;
  if ( (*(_DWORD *)(v11 + 56) & 0x20) != 0 && v17 + v7 > v18 )
  {
    LODWORD(v7) = (v18 - v17 + 511) & 0xFFFFFE00;
    v21 = v19 | 0x20000;
    *(_DWORD *)(a1 + 192) = v21;
  }
  v22 = a2;
  v23 = (char *)(a2 & 0xFFFFFFFFFFFFFFFEuLL);
  v24 = v22 & 1;
  if ( v24 && (v32 = *v23, *v23 == 1) || (v25 = (unsigned int)v21, v24) && (v32 = *v23, *v23 == 2) )
  {
    v25 = (unsigned int)v21;
    if ( v23 )
    {
      if ( v32 != 2 )
      {
        v25 = (unsigned int)v21 | 8;
        *(_DWORD *)(a1 + 192) = v25;
      }
    }
  }
  if ( (int)PsGetIoPriorityThread(KeGetCurrentThread(), v21, v25) < 2 )
  {
    LODWORD(v27) = v27 | 0x80;
    *(_DWORD *)(a1 + 192) = v27;
  }
  *(_QWORD *)(a1 + 272) = v29;
  *(_WORD *)(a1 + 282) = v29;
  *(_WORD *)(a1 + 280) = 8 * ((((unsigned __int64)(unsigned int)v7 + 4095) >> 12) + 6);
  *(_QWORD *)(a1 + 304) = v29;
  *(_DWORD *)(a1 + 316) = v29;
  *(_DWORD *)(a1 + 312) = v7;
  v33 = v29;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v33, v26);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) );
    v14 = v34;
  }
  *(_BYTE *)(v12 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v12, v26, v27, v28);
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v30 = 48LL * *(_QWORD *)(a1 + 8 * ((__int64)(v36 - v14) >> 3) + 320) - 0x58000000000LL;
  result = *(_WORD *)(a1 + 282) | 0x42;
  *(_WORD *)(a1 + 282) = result;
  if ( !v20 )
  {
    result |= 0x4000u;
    *(_WORD *)(a1 + 282) = result;
  }
  *(_QWORD *)(a1 + 96) = v17;
  *(_QWORD *)(a1 + 240) = v14;
  *(_QWORD *)(a1 + 248) = v30;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = v11;
  return result;
}
