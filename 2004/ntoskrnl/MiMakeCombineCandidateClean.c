/*
 * XREFs of MiMakeCombineCandidateClean @ 0x140367AFC
 * Callers:
 *     MiCrcStillIntact @ 0x1403658E4 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14024B47C (MiCaptureWriteWatchDirtyBit.c)
 *     MiWriteValidPteNewProtection @ 0x140263340 (MiWriteValidPteNewProtection.c)
 *     MiLockPageAndSetDirty @ 0x1402B7090 (MiLockPageAndSetDirty.c)
 */

__int64 __fastcall MiMakeCombineCandidateClean(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = v10;
  v5 = v10;
  if ( MiPteInShadowRange((unsigned __int64)&v10) && (MiFlags & 0xC00000) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v5 & 1) != 0
      && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v10 >> 3) & 0x1FF)) & 0x20) != 0 )
          v5 |= 0x20uLL;
      }
    }
    v4 = v10;
  }
  MiWriteValidPteNewProtection(a1, v4 & 0xFFFFFFFFFFFFFFBDuLL);
  result = MiLockPageAndSetDirty(48 * ((v5 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1LL, v6, v7);
  if ( a2 )
  {
    result = *(_DWORD *)(a2 + 48) & 0x300000;
    if ( (_DWORD)result == 3145728 )
      return MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)(a1 << 25) >> 16, a2);
  }
  return result;
}
