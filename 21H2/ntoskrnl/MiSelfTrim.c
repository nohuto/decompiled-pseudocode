/*
 * XREFs of MiSelfTrim @ 0x140374278
 * Callers:
 *     MiPreUnlockWorkingSetShared @ 0x140373E1C (MiPreUnlockWorkingSetShared.c)
 *     MiHandleForceTrimWorkingSets @ 0x140373F80 (MiHandleForceTrimWorkingSets.c)
 * Callees:
 *     MiForcedTrim @ 0x14037432C (MiForcedTrim.c)
 *     MiReduceWs @ 0x14037443C (MiReduceWs.c)
 *     MiForceAgeWorkingSet @ 0x140596904 (MiForceAgeWorkingSet.c)
 */

unsigned __int64 __fastcall MiSelfTrim(__int64 a1, __int64 a2)
{
  char v2; // bp
  unsigned __int64 result; // rax
  char v5; // si
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v7; // r8

  v2 = a2;
  _m_prefetchw((const void *)(a1 + 188));
  result = (unsigned int)_InterlockedAnd((volatile signed __int32 *)(a1 + 188), 0xFFFFFFF8);
  v5 = result;
  if ( (_DWORD)result )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (result & 2) != 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      result = MiForcedTrim();
      if ( !result && (*(_BYTE *)(a1 + 184) & 0x40) != 0 )
      {
        result = *(_QWORD *)(a1 + 128);
        v7 = *(_QWORD *)(a1 + 120);
        if ( result > v7 )
        {
          LOBYTE(a2) = v2;
          result = MiReduceWs(a1, a2, v7);
        }
      }
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
    }
    if ( (v5 & 1) != 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      LOBYTE(a2) = v2;
      result = MiForceAgeWorkingSet(a1, a2);
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
    }
  }
  return result;
}
