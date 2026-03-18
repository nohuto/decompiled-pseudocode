/*
 * XREFs of __SetWindowStationUser@16 @ 0xE951E
 * Callers:
 *     _NtUserSetWindowStationUser@16 @ 0xE9454 (_NtUserSetWindowStationUser@16.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall _SetWindowStationUser(_DWORD *a1, _DWORD *a2, void *Src, size_t MaxCount)
{
  void *v7; // eax

  if ( PsGetCurrentProcessId() == (HANDLE)_gpidLogon )
  {
    if ( a1[7] == _gTermIO[0] )
      CitUserChange(*a2, a2[1]);
    if ( a1[27] )
      Win32FreePool(a1[27]);
    if ( !Src )
    {
      a1[27] = 0;
LABEL_8:
      a1[25] = *a2;
      a1[26] = a2[1];
      return 1;
    }
    v7 = (void *)Win32AllocPoolWithQuota(MaxCount, 1702064981);
    a1[27] = v7;
    if ( v7 )
    {
      memcpy(v7, Src, MaxCount);
      goto LABEL_8;
    }
    UserSetLastError((struct _NT_TIB *)0xE);
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)5);
  }
  return 0;
}
