/*
 * XREFs of _NtUserAddClipboardFormatListener@4 @ 0xEB73C
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ @ 0x91C96 (-CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ.c)
 */

int __stdcall NtUserAddClipboardFormatListener(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // edx
  struct tagWINDOWSTATION *v4; // ecx
  int v5; // ecx
  int v7; // ecx

  v1 = 0;
  EnterCrit(0, 1);
  v2 = ValidateHwnd(a1);
  if ( !v2 )
    goto LABEL_9;
  if ( *(_DWORD *)(*(_DWORD *)(v2 + 8) + 232) != PsGetCurrentProcessWin32Process() )
  {
    v1 = 5;
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(*(_DWORD *)(v2 + 20) + 144) & 1) != 0 )
  {
    v7 = 87;
LABEL_13:
    UserSetLastError((struct _NT_TIB *)v7);
    goto LABEL_9;
  }
  v4 = CheckClipboardAccess();
  if ( !v4 )
    goto LABEL_9;
  if ( *(struct tagWINDOWSTATION **)(*(_DWORD *)(*(_DWORD *)(v2 + 8) + 232) + 356) != v4 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    v7 = 0;
    goto LABEL_13;
  }
  v5 = *((_DWORD *)v4 + 20);
  if ( v5 )
    HMAssignmentLock(v5, v3);
  HMAssignmentLock(v5, v3);
  *(_DWORD *)(*(_DWORD *)(v2 + 20) + 144) |= 1u;
  v1 = 1;
LABEL_9:
  UserSessionSwitchLeaveCrit();
  return v1;
}
