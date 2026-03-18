/*
 * XREFs of MiMakeCombineCandidateClean @ 0x14033A5B0
 * Callers:
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiCrcStillIntact @ 0x140339D70 (MiCrcStillIntact.c)
 * Callees:
 *     MiCaptureWriteWatchDirtyBit @ 0x1402358D4 (MiCaptureWriteWatchDirtyBit.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiCaptureDirtyBitToPfn @ 0x14033C2A0 (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x14033DBC0 (MiWriteValidPteNewProtection.c)
 */

void __fastcall MiMakeCombineCandidateClean(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)a1;
  if ( MiPteInShadowRange(a1)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v12 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
      if ( (v12 & 0x20) != 0 )
        v2 |= 0x20uLL;
      if ( (v12 & 0x42) != 0 )
        v2 |= 0x42uLL;
    }
  }
  v15 = v2;
  v5 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v15);
  v15 = v2 & 0xFFFFFFFFFFFFFFBDuLL;
  v6 = 48 * ((v5 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  MiWriteValidPteNewProtection(a1, v2 & 0xFFFFFFFFFFFFFFBDuLL);
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v14, v7, v8, v9);
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  v10 = MiCaptureDirtyBitToPfn(v6);
  if ( v10 )
  {
    v13 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiReleasePageFileInfo(v13, v10, 1);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 48) & 0x600000) == 0x600000 )
      MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)(a1 << 25) >> 16, a2);
  }
}
