/*
 * XREFs of MiMakeCombineCandidateClean @ 0x140369ADC
 * Callers:
 *     MiCrcStillIntact @ 0x1403678C4 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402309EC (MiCaptureWriteWatchDirtyBit.c)
 *     MiWriteValidPteNewProtection @ 0x14029F0A0 (MiWriteValidPteNewProtection.c)
 *     MiLockPageAndSetDirty @ 0x14029F10C (MiLockPageAndSetDirty.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMakeCombineCandidateClean(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = v8;
  v5 = v8;
  if ( MiPteInShadowRange((unsigned __int64)&v8) && (MiFlags & 0xC00000) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v5 & 1) != 0
      && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v8 >> 3) & 0x1FF)) & 0x20) != 0 )
          v5 |= 0x20uLL;
      }
    }
    v4 = v8;
  }
  MiWriteValidPteNewProtection(a1, v4 & 0xFFFFFFFFFFFFFFBDuLL);
  result = MiLockPageAndSetDirty(48 * ((v5 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1);
  if ( a2 )
  {
    result = *(_DWORD *)(a2 + 48) & 0x300000;
    if ( (_DWORD)result == 3145728 )
      return (__int64)MiCaptureWriteWatchDirtyBit(
                        (__int64)KeGetCurrentThread()->ApcState.Process,
                        (__int64)(a1 << 25) >> 16,
                        (__int64 **)a2);
  }
  return result;
}
