/*
 * XREFs of _TpReleaseIoCompletion@4 @ 0x4B2E6E00
 * Callers:
 *     <none>
 * Callees:
 *     _TppCleanupGroupMemberRelease@8 @ 0x4B2B1EF6 (_TppCleanupGroupMemberRelease@8.c)
 *     _TppIopValidateIo@12 @ 0x4B2E70F8 (_TppIopValidateIo@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

void __cdecl TpReleaseIoCompletion(PTP_IO Io)
{
  _UNKNOWN *retaddr; // [esp+8h] [ebp+4h]

  if ( TppIopValidateIo(0) && TppCleanupGroupMemberRelease((int)Io, 1) )
  {
    *((_DWORD *)Io + 28) = retaddr;
    if ( !_InterlockedExchangeAdd((volatile signed __int32 *)Io, 0xFFFFFFFF) )
      (**((void (__thiscall ***)(_DWORD, PTP_IO))Io + 1))(**((_DWORD **)Io + 1), Io);
  }
}
