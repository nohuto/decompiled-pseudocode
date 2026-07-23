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

void __cdecl TpReleaseWork(PTP_WORK Work)
{
  _UNKNOWN *retaddr; // [esp+8h] [ebp+4h]

  if ( TppWorkpValidateWork(0) && TppCleanupGroupMemberRelease((int)Work, 1) )
  {
    *((_DWORD *)Work + 28) = retaddr;
    if ( !_InterlockedExchangeAdd((volatile signed __int32 *)Work, 0xFFFFFFFF) )
      (**((void (__thiscall ***)(_DWORD, PTP_WORK))Work + 1))(**((_DWORD **)Work + 1), Work);
  }
}
