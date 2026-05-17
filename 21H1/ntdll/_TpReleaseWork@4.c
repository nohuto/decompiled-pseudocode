/*
 * XREFs of _TpReleaseWork@4 @ 0x4B2EC490
 * Callers:
 *     _RtlpFcFreeChangeRegistration@4 @ 0x4B2AB4C2 (_RtlpFcFreeChangeRegistration@4.c)
 *     _LdrpDetectDetour@0 @ 0x4B2AEB06 (_LdrpDetectDetour@0.c)
 *     _RtlpCtContextFree@4 @ 0x4B369E26 (_RtlpCtContextFree@4.c)
 * Callees:
 *     _TppCleanupGroupMemberRelease@8 @ 0x4B2B1EF6 (_TppCleanupGroupMemberRelease@8.c)
 *     _TppWorkpValidateWork@12 @ 0x4B2EC4DD (_TppWorkpValidateWork@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall TpReleaseWork(int a1)
{
  int result; // eax
  _UNKNOWN *retaddr; // [esp+8h] [ebp+4h]

  result = TppWorkpValidateWork(0);
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
