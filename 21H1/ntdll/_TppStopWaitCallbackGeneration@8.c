/*
 * XREFs of _TppStopWaitCallbackGeneration@8 @ 0x4B3843E0
 * Callers:
 *     <none>
 * Callees:
 *     _TppCancelWait@16 @ 0x4B2B7B98 (_TppCancelWait@16.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

signed __int32 __stdcall TppStopWaitCallbackGeneration(int a1, int a2)
{
  signed __int32 result; // eax
  unsigned int v3; // ecx
  signed int v4; // [esp+Ch] [ebp-4h] BYREF

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 144));
  TppCancelWait(a1, a2 != 0 ? 2 : 0, &v4);
  ++*(_BYTE *)(a1 + 223);
  result = RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 144));
  if ( v4 < 0 )
  {
    v3 = -v4;
    result = _InterlockedExchangeAdd((volatile signed __int32 *)a1, v4);
    if ( result == v3 )
      return (**(int (__thiscall ***)(_DWORD, int))(a1 + 4))(**(_DWORD **)(a1 + 4), a1);
  }
  return result;
}
