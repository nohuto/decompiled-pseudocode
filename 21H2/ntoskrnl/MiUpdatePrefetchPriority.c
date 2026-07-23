/*
 * XREFs of MiUpdatePrefetchPriority @ 0x14025C700
 * Callers:
 *     MiValidFault @ 0x1402AE050 (MiValidFault.c)
 *     MiPrefetchJumpVad @ 0x14053970C (MiPrefetchJumpVad.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MiUpdatePfnPriority @ 0x14025ED44 (MiUpdatePfnPriority.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

char __fastcall MiUpdatePrefetchPriority(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  ULONG_PTR v6; // r9
  unsigned __int64 v7; // rbx
  __int64 CurrentThread; // rax
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v18; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp+10h] BYREF

  v5 = *(_DWORD *)(a1 + 80) & 7;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = *(_QWORD *)v6;
  LOBYTE(CurrentThread) = 0;
  if ( v6 >= 0xFFFFF6FB7DBED000uLL )
  {
    LOBYTE(CurrentThread) = -8;
    if ( v6 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      CurrentThread = (__int64)KeGetCurrentThread();
      if ( *(_BYTE *)(*(_QWORD *)(CurrentThread + 184) + 912LL) != 1
        && (v7 & 1) != 0
        && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
      {
        CurrentThread = (__int64)KeGetCurrentThread();
        v12 = *(_QWORD *)(*(_QWORD *)(CurrentThread + 184) + 1928LL);
        if ( v12 )
        {
          CurrentThread = *(_QWORD *)(v12 + 8 * ((v6 >> 3) & 0x1FF));
          v13 = v7 | 0x20;
          if ( (CurrentThread & 0x20) == 0 )
            v13 = *(_QWORD *)v6;
          v7 = v13;
          if ( (CurrentThread & 0x42) != 0 )
            v7 = v13 | 0x42;
        }
      }
    }
  }
  v19 = v7;
  if ( (v7 & 1) == 0 )
  {
    if ( !v7 )
      return CurrentThread;
    if ( (v7 & 0x400) != 0 )
      return CurrentThread;
    if ( (v7 & 0x800) == 0 )
      return CurrentThread;
    CurrentThread = MiLockTransitionLeafPage(v6, 0LL);
    v10 = CurrentThread;
    if ( !CurrentThread )
      return CurrentThread;
    goto LABEL_10;
  }
  if ( (unsigned int)MiPteInShadowRange(&v19)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v15 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v19 >> 3) & 0x1FF));
      v16 = v7 | 0x20;
      if ( (v15 & 0x20) == 0 )
        v16 = v7;
      v7 = v16;
      if ( (v15 & 0x42) != 0 )
        v7 = v16 | 0x42;
    }
  }
  v9 = (v7 >> 12) & 0xFFFFFFFFFLL;
  CurrentThread = *(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL);
  if ( (CurrentThread & 0x4000000000000LL) != 0 )
  {
    v10 = 48 * v9 - 0x58000000000LL;
    LODWORD(CurrentThread) = *(_BYTE *)(v10 + 35) & 7;
    if ( (_DWORD)CurrentThread != v5 )
    {
      if ( a3 )
      {
        LOBYTE(CurrentThread) = *(_DWORD *)(a3 + 48) & 0x70;
        if ( (_BYTE)CurrentThread == 16 )
          return CurrentThread;
      }
      else if ( *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 304) )
      {
        CurrentThread = MiLocateAddress(a2);
        if ( !CurrentThread )
          return CurrentThread;
        LOBYTE(CurrentThread) = *(_DWORD *)(CurrentThread + 48) & 0x70;
        if ( (_BYTE)CurrentThread == 16 )
          return CurrentThread;
      }
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v18);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
LABEL_10:
      if ( (unsigned int)MiGetPfnPriority(v10) != v5 )
        MiUpdatePfnPriority(v11, v5, 0LL);
      LOBYTE(CurrentThread) = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return CurrentThread;
}
