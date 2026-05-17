/*
 * XREFs of _TpWaitForTimer@8 @ 0x4B2B3C20
 * Callers:
 *     _RtlDeleteTimer@12 @ 0x4B2A8C40 (_RtlDeleteTimer@12.c)
 * Callees:
 *     _TppWorkWait@8 @ 0x4B2B1F6A (_TppWorkWait@8.c)
 *     _TppTimerpValidateTimer@12 @ 0x4B2B46DB (_TppTimerpValidateTimer@12.c)
 *     _TppCancelTimer@12 @ 0x4B2B7D76 (_TppCancelTimer@12.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall TpWaitForTimer(int a1, int a2)
{
  char v2; // bl
  int result; // eax
  char v4; // [esp+Bh] [ebp-1h]

  v2 = 0;
  result = TppTimerpValidateTimer(0);
  if ( result )
  {
    v4 = 0;
    if ( a2 )
    {
      RtlAcquireSRWLockExclusive(a1 + 144);
      ++*(_BYTE *)(a1 + 223);
      v2 = TppCancelTimer(1);
      if ( *(_DWORD *)(a1 + 32) )
        v4 = 1;
      else
        --*(_BYTE *)(a1 + 223);
      RtlReleaseSRWLockExclusive(a1 + 144);
    }
    result = TppWorkWait((_DWORD *)a1, a2);
    if ( v4 )
    {
      RtlAcquireSRWLockExclusive(a1 + 144);
      --*(_BYTE *)(a1 + 223);
      result = RtlReleaseSRWLockExclusive(a1 + 144);
    }
    if ( v2 )
    {
      result = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( !result )
        return (**(int (__thiscall ***)(_DWORD, int))(a1 + 4))(**(_DWORD **)(a1 + 4), a1);
    }
  }
  return result;
}
