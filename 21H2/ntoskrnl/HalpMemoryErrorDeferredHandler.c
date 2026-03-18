/*
 * XREFs of HalpMemoryErrorDeferredHandler @ 0x14051C22C
 * Callers:
 *     HalpErrorDeferredHandler @ 0x14051C010 (HalpErrorDeferredHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpHvSetMachineCheckRecoveryState @ 0x14050F040 (HalpHvSetMachineCheckRecoveryState.c)
 *     WheaAttemptClearPoison @ 0x140A08BE0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A08CB0 (WheaAttemptPhysicalPageOffline.c)
 */

__int64 (*__fastcall HalpMemoryErrorDeferredHandler(__int64 *a1, __int64 a2, __int64 a3))(void)
{
  bool v3; // zf
  unsigned __int64 v5; // rcx
  __int64 (*result)(void); // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  char v9; // al

  *((_BYTE *)a1 + 13) &= 0xFu;
  v3 = *((_BYTE *)a1 + 14) == 0;
  v5 = *a1;
  if ( v3 )
  {
    LOBYTE(a3) = 1;
    result = (__int64 (*)(void))WheaAttemptPhysicalPageOffline(v5 >> 12, 0LL, a3, 0LL);
  }
  else
  {
    result = (__int64 (*)(void))WheaAttemptClearPoison(v5);
  }
  v8 = (unsigned int)result;
  if ( HalpHvWheaEnlightenedCpuManager )
  {
    v9 = 0;
    if ( (_DWORD)v8 || WheapPolicyNotifyAllOfflines )
    {
      if ( WheapPolicyNotifyAllOfflines )
      {
        v9 = 64;
        if ( !(_DWORD)v8 )
          v9 = -64;
      }
      if ( qword_140C4C518 )
      {
        LOBYTE(v8) = v9;
        LOBYTE(v7) = 1;
        ((void (__fastcall *)(__int64 *, __int64, __int64))qword_140C4C518)(a1, v8, v7);
      }
    }
    if ( a1[2] )
    {
      result = qword_140C4C508;
      if ( qword_140C4C508 )
        return (__int64 (*)(void))qword_140C4C508();
    }
    else
    {
      return (__int64 (*)(void))HalpHvSetMachineCheckRecoveryState(2);
    }
  }
  return result;
}
