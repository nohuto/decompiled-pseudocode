/*
 * XREFs of _NtUserQueryInputContext@8 @ 0xA8928
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

HANDLE __stdcall NtUserQueryInputContext(int a1, int a2)
{
  HANDLE v2; // esi
  int v3; // eax
  int v4; // ecx
  HANDLE ThreadProcessId; // eax
  HANDLE *v7; // eax

  v2 = 0;
  EnterSharedCrit(0, 1);
  if ( (*_gpsi & 4) == 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x78);
    goto LABEL_7;
  }
  v3 = HMValidateHandle(a1, 17);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 8);
    switch ( a2 )
    {
      case 0:
        ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v4);
        goto LABEL_6;
      case 1:
        ThreadProcessId = PsGetThreadId(*(PETHREAD *)v4);
LABEL_6:
        v2 = ThreadProcessId;
        goto LABEL_7;
      case 2:
        v7 = *(HANDLE **)(v4 + 436);
        break;
      case 3:
        v7 = *(HANDLE **)(v4 + 440);
        break;
      default:
        UserSetLastError((struct _NT_TIB *)0x57);
        goto LABEL_7;
    }
    if ( v7 )
      v2 = *v7;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit();
  return v2;
}
