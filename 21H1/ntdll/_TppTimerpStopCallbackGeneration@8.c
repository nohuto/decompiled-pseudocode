/*
 * XREFs of _TppTimerpStopCallbackGeneration@8 @ 0x4B384390
 * Callers:
 *     <none>
 * Callees:
 *     _TppCancelTimer@12 @ 0x4B2B7D76 (_TppCancelTimer@12.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

char __stdcall TppTimerpStopCallbackGeneration(int a1, int a2)
{
  _RTL_SRWLOCK *v2; // edx
  signed __int32 v3; // eax

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 144));
  v2 = *(_RTL_SRWLOCK **)(a1 + 92);
  ++*(_BYTE *)(a1 + 223);
  LOBYTE(v3) = TppCancelTimer(a1, v2 + 16, 0);
  if ( (_BYTE)v3 )
  {
    v3 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( !v3 )
      LOBYTE(v3) = (**(int (__thiscall ***)(_DWORD, int))(a1 + 4))(**(_DWORD **)(a1 + 4), a1);
  }
  return v3;
}
