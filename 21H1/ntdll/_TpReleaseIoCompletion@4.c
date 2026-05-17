/*
 * XREFs of _TpReleaseIoCompletion@4 @ 0x4B2E6E00
 * Callers:
 *     <none>
 * Callees:
 *     _TppCleanupGroupMemberRelease@8 @ 0x4B2B1EF6 (_TppCleanupGroupMemberRelease@8.c)
 *     _TppIopValidateIo@12 @ 0x4B2E70F8 (_TppIopValidateIo@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall TpReleaseIoCompletion(int a1)
{
  int result; // eax
  _UNKNOWN *retaddr; // [esp+8h] [ebp+4h]

  result = TppIopValidateIo(0);
  if ( result )
  {
    result = TppCleanupGroupMemberRelease(a1, 1);
    if ( result )
    {
      *(_DWORD *)(a1 + 112) = retaddr;
      result = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( !result )
        return (**(int (__thiscall ***)(_DWORD, int))(a1 + 4))(**(_DWORD **)(a1 + 4), a1);
    }
  }
  return result;
}
