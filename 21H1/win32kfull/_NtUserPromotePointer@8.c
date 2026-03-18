/*
 * XREFs of _NtUserPromotePointer@8 @ 0x167C88
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxPromotePointerToMouse@8 @ 0x15A76D (_xxxPromotePointerToMouse@8.c)
 */

int __stdcall NtUserPromotePointer(unsigned int *a1, int a2)
{
  unsigned int v2; // eax
  int v3; // esi

  EnterCrit(0, 1);
  if ( !a1 || HIWORD(a1) || (unsigned __int16)a1 == 1 )
    goto LABEL_16;
  v2 = a2 & 0xFFFFFF;
  if ( (a2 & 0xFFFFFFu) > 0x20002 )
  {
    if ( v2 < (unsigned int)&loc_40001 || v2 > 0x40002 && v2 - 524289 > 1 )
      goto LABEL_16;
  }
  else if ( v2 < 0x20001 )
  {
    if ( v2 )
    {
      if ( v2 <= 0x10000 || v2 > 0x10002 )
        goto LABEL_16;
    }
    else if ( a2 )
    {
      goto LABEL_16;
    }
  }
  v3 = xxxPromotePointerToMouse(a1);
  if ( !v3 )
  {
LABEL_16:
    v3 = 0;
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
