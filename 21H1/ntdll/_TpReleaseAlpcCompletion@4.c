/*
 * XREFs of _TpReleaseAlpcCompletion@4 @ 0x4B2E9950
 * Callers:
 *     <none>
 * Callees:
 *     _TppCleanupGroupMemberRelease@8 @ 0x4B2B1EF6 (_TppCleanupGroupMemberRelease@8.c)
 *     _TppAlpcpValidateAlpc@12 @ 0x4B2E9A18 (_TppAlpcpValidateAlpc@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall TpReleaseAlpcCompletion(int a1)
{
  int result; // eax
  _UNKNOWN *retaddr; // [esp+8h] [ebp+4h]

  result = TppAlpcpValidateAlpc(0);
  if ( result )
  {
    result = TppCleanupGroupMemberRelease(a1 + 48, 1);
    if ( result )
    {
      *(_DWORD *)(a1 + 160) = retaddr;
      result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 48), 0xFFFFFFFF);
      if ( !result )
        return (**(int (__thiscall ***)(_DWORD, int))(a1 + 52))(**(_DWORD **)(a1 + 52), a1 + 48);
    }
  }
  return result;
}
