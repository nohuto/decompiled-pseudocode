/*
 * XREFs of _TpWaitForWait@8 @ 0x4B2B1D80
 * Callers:
 *     _RtlDeregisterWaitEx@8 @ 0x4B2A8010 (_RtlDeregisterWaitEx@8.c)
 * Callees:
 *     _TppWorkWait@8 @ 0x4B2B1F6A (_TppWorkWait@8.c)
 *     _TppCancelWait@16 @ 0x4B2B7B98 (_TppCancelWait@16.c)
 *     _TppWaitpValidateWait@12 @ 0x4B2B7C55 (_TppWaitpValidateWait@12.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall TpWaitForWait(int a1, int a2)
{
  int v2; // ebx
  int result; // eax
  int v4; // esi
  int v5; // ebx
  int v6; // [esp+8h] [ebp-8h] BYREF
  char v7; // [esp+Fh] [ebp-1h]

  v2 = 0;
  v6 = 0;
  v7 = 0;
  result = TppWaitpValidateWait(0);
  if ( result )
  {
    v4 = a1 + 144;
    if ( a2 )
    {
      RtlAcquireSRWLockExclusive(a1 + 144);
      ++*(_BYTE *)(a1 + 223);
      TppCancelWait(2, &v6);
      if ( *(_DWORD *)(a1 + 32) )
        v7 = 1;
      else
        --*(_BYTE *)(a1 + 223);
      v4 = a1 + 144;
      RtlReleaseSRWLockExclusive(a1 + 144);
      v2 = v6;
    }
    result = TppWorkWait(a1, a2);
    if ( v7 )
    {
      RtlAcquireSRWLockExclusive(v4);
      --*(_BYTE *)(a1 + 223);
      result = RtlReleaseSRWLockExclusive(v4);
    }
    if ( v2 )
    {
      v5 = -v2;
      result = _InterlockedExchangeAdd((volatile signed __int32 *)a1, -v5);
      if ( result == v5 )
        return (**(int (__thiscall ***)(_DWORD, int))(a1 + 4))(**(_DWORD **)(a1 + 4), a1);
    }
  }
  return result;
}
