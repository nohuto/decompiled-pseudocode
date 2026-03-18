/*
 * XREFs of __UnlockWindowStation@4 @ 0xAE7E4
 * Callers:
 *     _NtUserUnlockWindowStation@4 @ 0xAE79A (_NtUserUnlockWindowStation@4.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __thiscall _UnlockWindowStation(_DWORD *this)
{
  int v2; // ecx
  unsigned int v3; // eax
  int v5; // [esp-4h] [ebp-8h]

  if ( PsGetCurrentProcessId() == (HANDLE)_gpidLogon )
  {
    v2 = this[8];
    if ( (v2 & 8) != 0 )
      v5 = -2;
    else
      v5 = -4;
    v3 = v5 & gdwLocks;
    this[8] = v5 & v2;
    gdwLocks = v3;
    return 1;
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)5);
    return 0;
  }
}
