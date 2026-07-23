/*
 * XREFs of HalpMemoryErrorDeferredHandler @ 0x1404D00EC
 * Callers:
 *     HalpErrorDeferredHandler @ 0x1404CFF00 (HalpErrorDeferredHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpHvSetMachineCheckRecoveryState @ 0x1404C2E60 (HalpHvSetMachineCheckRecoveryState.c)
 *     WheaAttemptClearPoison @ 0x14095D470 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x14095D530 (WheaAttemptPhysicalPageOffline.c)
 */

__int64 (*__fastcall HalpMemoryErrorDeferredHandler(__int64 *a1, __int64 a2, __int64 a3))(void)
{
  bool v3; // zf
  unsigned __int64 v5; // rcx
  __int64 (*result)(void); // rax
  __int64 v7; // r8

  *((_BYTE *)a1 + 13) &= 0xFu;
  v3 = *((_BYTE *)a1 + 14) == 0;
  v5 = *a1;
  if ( v3 )
  {
    LOBYTE(a3) = 1;
    result = (__int64 (*)(void))WheaAttemptPhysicalPageOffline(v5 >> 12, 0LL, a3);
  }
  else
  {
    result = (__int64 (*)(void))WheaAttemptClearPoison(v5);
  }
  if ( HalpHvWheaEnlightenedCpuManager )
  {
    if ( (_DWORD)result && qword_140C4A258 )
    {
      LOBYTE(v7) = 1;
      qword_140C4A258(a1, 0LL, v7);
    }
    if ( a1[2] )
    {
      result = qword_140C4A248;
      if ( qword_140C4A248 )
        return (__int64 (*)(void))qword_140C4A248();
    }
    else
    {
      return (__int64 (*)(void))HalpHvSetMachineCheckRecoveryState(2);
    }
  }
  return result;
}
