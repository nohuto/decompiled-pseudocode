/*
 * XREFs of __LockWindowStation@4 @ 0xAE44A
 * Callers:
 *     _NtUserLockWindowStation@4 @ 0xAE400 (_NtUserLockWindowStation@4.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __thiscall _LockWindowStation(_DWORD *this)
{
  int v2; // edi
  int v3; // ecx
  _DWORD *i; // eax

  v2 = 0;
  if ( PsGetCurrentProcessId() == (HANDLE)_gpidLogon )
  {
    this[8] |= 1u;
    v3 = this[8];
    for ( i = (_DWORD *)this[2]; i; i = (_DWORD *)i[4] )
    {
      if ( i != grpdeskLogon && *(i - 5) )
      {
        v2 = 1;
        break;
      }
    }
    if ( (v3 & 8) != 0 )
      this[8] = v3 | 2;
    return (v2 == 0) + 1;
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)5);
    return 0;
  }
}
