/*
 * XREFs of MiMakeCombineCandidateClean @ 0x140369D8C
 * Callers:
 *     MiCrcStillIntact @ 0x140367B74 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140368360 (MiSharePages.c)
 * Callees:
 *     MiCaptureWriteWatchDirtyBit @ 0x14025B15C (MiCaptureWriteWatchDirtyBit.c)
 *     MiWriteValidPteNewProtection @ 0x14030FA00 (MiWriteValidPteNewProtection.c)
 *     MiLockPageAndSetDirty @ 0x14030FA6C (MiLockPageAndSetDirty.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

void __fastcall MiMakeCombineCandidateClean(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // r8
  _DWORD *v7; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = v9;
  v5 = v9;
  if ( MiPteInShadowRange((unsigned __int64)&v9) && (MiFlags & 0xC00000) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v5 & 1) != 0
      && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v9 >> 3) & 0x1FF)) & 0x20) != 0 )
          v5 |= 0x20uLL;
      }
    }
    v4 = v9;
  }
  MiWriteValidPteNewProtection(a1, v4 & 0xFFFFFFFFFFFFFFBDuLL);
  MiLockPageAndSetDirty(48 * ((v5 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1LL, v6, v7);
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 48) & 0x300000) == 0x300000 )
      MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)(a1 << 25) >> 16, a2);
  }
}
