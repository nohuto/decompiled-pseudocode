/*
 * XREFs of _TpReleaseJobNotification@4 @ 0x4B383720
 * Callers:
 *     <none>
 * Callees:
 *     _TppCleanupGroupMemberRelease@8 @ 0x4B2B1EF6 (_TppCleanupGroupMemberRelease@8.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _TppJobpRundownJob@4 @ 0x4B3839D3 (_TppJobpRundownJob@4.c)
 *     _TppJobpValidateJob@8 @ 0x4B383B34 (_TppJobpValidateJob@8.c)
 */

int __stdcall TpReleaseJobNotification(int a1)
{
  int result; // eax

  result = TppJobpValidateJob(a1, 1);
  if ( result )
  {
    result = TppCleanupGroupMemberRelease(a1 + 48, 1);
    if ( result )
    {
      TppJobpRundownJob(a1);
      result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 48), 0xFFFFFFFF);
      if ( !result )
        return (**(int (__thiscall ***)(_DWORD, int))(a1 + 52))(**(_DWORD **)(a1 + 52), a1 + 48);
    }
  }
  return result;
}
