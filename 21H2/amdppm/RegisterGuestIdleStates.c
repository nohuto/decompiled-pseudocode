/*
 * XREFs of RegisterGuestIdleStates @ 0x1C0023C00
 * Callers:
 *     <none>
 * Callees:
 *     RegisterVmIdleStates @ 0x1C00250F0 (RegisterVmIdleStates.c)
 */

__int64 __fastcall RegisterGuestIdleStates(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 272) & 0x200LL) != 0 )
    return RegisterVmIdleStates();
  else
    return 0LL;
}
