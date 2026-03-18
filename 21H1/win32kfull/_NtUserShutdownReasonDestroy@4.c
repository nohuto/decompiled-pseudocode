/*
 * XREFs of _NtUserShutdownReasonDestroy@4 @ 0xD3EBE
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 */

int __stdcall NtUserShutdownReasonDestroy(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // eax

  v1 = 0;
  EnterCrit(0, 1);
  v2 = ValidateHwnd(a1);
  if ( v2 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 8) + 232) == PsGetCurrentProcessWin32Process() )
    {
      v3 = InternalRemoveProp(v2, gatomShutdownBlockingReason, 1);
      if ( v3 )
      {
        Win32FreePool(v3);
        v1 = 1;
      }
      else
      {
        UserSetLastError((struct _NT_TIB *)0x57);
      }
    }
    else
    {
      v1 = 5;
    }
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
