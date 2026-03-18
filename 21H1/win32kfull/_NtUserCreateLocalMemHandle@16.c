/*
 * XREFs of _NtUserCreateLocalMemHandle@16 @ 0x1607D5
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtUserCreateLocalMemHandle(int a1, volatile void *Address, SIZE_T Length, ULONG a4)
{
  int v4; // esi
  int v5; // ebx
  _DWORD *v6; // ecx

  v4 = 0;
  EnterCrit(0, 1);
  v5 = HMValidateHandle(a1, 6);
  if ( v5 )
  {
    if ( Address )
      ProbeForWrite(Address, Length, 1u);
    v6 = (_DWORD *)a4;
    if ( a4 )
    {
      if ( a4 >= _MmUserProbeAddress )
        v6 = (_DWORD *)_MmUserProbeAddress;
      *v6 = *(_DWORD *)(v5 + 8);
    }
    if ( Address && Length >= *(_DWORD *)(v5 + 8) )
      memcpy((void *)Address, (const void *)(v5 + 12), *(_DWORD *)(v5 + 8));
    else
      v4 = -1073741789;
  }
  else
  {
    v4 = -1073741816;
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
