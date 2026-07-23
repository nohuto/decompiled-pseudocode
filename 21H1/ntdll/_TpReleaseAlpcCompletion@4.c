/*
 * XREFs of _TpReleaseAlpcCompletion@4 @ 0x4B2E9950
 * Callers:
 *     <none>
 * Callees:
 *     _TppCleanupGroupMemberRelease@8 @ 0x4B2B1EF6 (_TppCleanupGroupMemberRelease@8.c)
 *     _TppAlpcpValidateAlpc@12 @ 0x4B2E9A18 (_TppAlpcpValidateAlpc@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

void __cdecl TpReleaseAlpcCompletion(PTP_ALPC Alpc)
{
  _UNKNOWN *retaddr; // [esp+8h] [ebp+4h]

  if ( TppAlpcpValidateAlpc(0) && TppCleanupGroupMemberRelease((int)Alpc + 48, 1) )
  {
    *((_DWORD *)Alpc + 40) = retaddr;
    if ( !_InterlockedExchangeAdd((volatile signed __int32 *)Alpc + 12, 0xFFFFFFFF) )
      (**((void (__thiscall ***)(_DWORD, char *))Alpc + 13))(**((_DWORD **)Alpc + 13), (char *)Alpc + 48);
  }
}
