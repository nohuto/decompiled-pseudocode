/*
 * XREFs of MiFinishMdlForMappedFileFault @ 0x14033DC30
 * Callers:
 *     MiResolveMappedFileFault @ 0x140339520 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiFlowThroughInsertNode @ 0x14025A2B4 (MiFlowThroughInsertNode.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiStartingOffset @ 0x1403342D0 (MiStartingOffset.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140336AD8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAreChargesNeededToLockPage @ 0x140337EA0 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x140337F60 (MiChargeForLockedPage.c)
 *     PsGetIoPriorityThread @ 0x14033D760 (PsGetIoPriorityThread.c)
 *     MiEndingOffsetWithLock @ 0x14033DFC0 (MiEndingOffsetWithLock.c)
 *     MiReferenceControlAreaPfn @ 0x14033E11C (MiReferenceControlAreaPfn.c)
 */

__int16 __fastcall MiFinishMdlForMappedFileFault(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  _QWORD *v5; // rbp
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r15
  __int64 v20; // rbx
  unsigned int v21; // r8d
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rax
  int v24; // ecx
  char v25; // bp
  int v26; // edx
  __int64 v27; // rax
  char *v28; // r14
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // r10d
  __int64 v33; // rcx
  __int16 result; // ax
  char v35; // cl
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned int v39; // [rsp+70h] [rbp+8h]
  int v40; // [rsp+78h] [rbp+10h] BYREF
  int v41; // [rsp+80h] [rbp+18h] BYREF
  int v42; // [rsp+88h] [rbp+20h] BYREF

  v5 = *(_QWORD **)(a1 + 208);
  v39 = *(_DWORD *)(a1 + 184);
  v10 = *v5;
  MiReferenceControlAreaPfn(*v5, v5, a3);
  v14 = *(_QWORD *)(a1 + 160);
  v40 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v40, v11, v12, v13);
    while ( *(__int64 *)(v14 + 24) < 0 );
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v14) || (unsigned int)MiChargeForLockedPage(v14, 1) )
    ++*(_WORD *)(v14 + 32);
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v41 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v41, v15, v16, v17);
    while ( *(__int64 *)(v14 + 24) < 0 );
  }
  *(_QWORD *)(v14 + 24) ^= ((*(_QWORD *)(v14 + 24) + a3) ^ *(_QWORD *)(v14 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v18 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 320) - 0x220000000000LL + 8) | 0x8000000000000000uLL;
  if ( a4 )
    MiFlowThroughInsertNode(a1, a4);
  v19 = *(_QWORD *)(a1 + 232);
  v20 = *(_QWORD *)v19;
  if ( MiPteInShadowRange(v19)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v20 & 1) != 0
    && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v37 = *((_QWORD *)&Flink->Flink + ((v19 >> 3) & 0x1FF));
      v38 = v20 | 0x20;
      if ( (v37 & 0x20) == 0 )
        v38 = v20;
      v20 = v38;
      if ( (v37 & 0x42) != 0 )
        v20 = v38 | 0x42;
    }
  }
  v21 = a5;
  *(_QWORD *)(a1 + 168) = v20;
  v22 = MiStartingOffset((__int64)v5, v18, v21);
  v23 = MiEndingOffsetWithLock(v5);
  v24 = *(_DWORD *)(a1 + 192);
  if ( (v24 & 0x20000) != 0 )
  {
    v24 &= ~0x20000u;
    v25 = 1;
    *(_DWORD *)(a1 + 192) = v24;
  }
  else
  {
    v25 = 0;
  }
  v26 = v24;
  if ( (*(_DWORD *)(v10 + 56) & 0x20) != 0 && v22 + v39 > v23 )
  {
    v26 = v24 | 0x20000;
    *(_DWORD *)(a1 + 192) = v24 | 0x20000;
  }
  v27 = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    v28 = (char *)(a2 & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_15:
    if ( !v27 )
      goto LABEL_16;
    v35 = *v28;
    if ( *v28 != 2 )
      goto LABEL_16;
    goto LABEL_25;
  }
  v28 = (char *)(a2 & 0xFFFFFFFFFFFFFFFEuLL);
  v35 = *v28;
  if ( *v28 != 1 )
    goto LABEL_15;
LABEL_25:
  if ( v28 && v35 != 2 )
    *(_DWORD *)(a1 + 192) = v26 | 8;
LABEL_16:
  if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) < 2 )
  {
    LODWORD(v30) = v30 | 0x80;
    *(_DWORD *)(a1 + 192) = v30;
  }
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_WORD *)(a1 + 282) = 0;
  *(_WORD *)(a1 + 280) = 8 * ((((unsigned __int64)v32 + 4095) >> 12) + 6);
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_DWORD *)(a1 + 316) = 0;
  *(_DWORD *)(a1 + 312) = v32;
  v42 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v42, v29, v30, v31);
    while ( *(__int64 *)(v14 + 24) < 0 );
  }
  *(_BYTE *)(v14 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v14);
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v33 = 48LL * *(_QWORD *)(a1 + 8 * ((__int64)(v19 - v18) >> 3) + 320) - 0x220000000000LL;
  result = *(_WORD *)(a1 + 282) | 0x42;
  *(_WORD *)(a1 + 282) = result;
  if ( !v25 )
  {
    result |= 0x4000u;
    *(_WORD *)(a1 + 282) = result;
  }
  *(_QWORD *)(a1 + 96) = v22;
  *(_QWORD *)(a1 + 240) = v18;
  *(_QWORD *)(a1 + 248) = v33;
  *(_QWORD *)(a1 + 200) = 0LL;
  return result;
}
