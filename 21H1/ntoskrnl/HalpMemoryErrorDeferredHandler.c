/*
 * XREFs of HalpMemoryErrorDeferredHandler @ 0x1404CAACC
 * Callers:
 *     HalpErrorDeferredHandler @ 0x1404CA8E0 (HalpErrorDeferredHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     HalpHvSetMachineCheckRecoveryState @ 0x1404BD650 (HalpHvSetMachineCheckRecoveryState.c)
 *     WheaAttemptClearPoison @ 0x1409588B0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140958970 (WheaAttemptPhysicalPageOffline.c)
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
    if ( (_DWORD)result && qword_140C4A3F8 )
    {
      LOBYTE(v7) = 1;
      qword_140C4A3F8(a1, 0LL, v7);
    }
    if ( a1[2] )
    {
      result = qword_140C4A3E8;
      if ( qword_140C4A3E8 )
        return (__int64 (*)(void))qword_140C4A3E8();
    }
    else
    {
      return (__int64 (*)(void))HalpHvSetMachineCheckRecoveryState(2);
    }
  }
  return result;
}
