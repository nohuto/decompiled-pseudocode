/*
 * XREFs of _ValidateGestureCaller@8 @ 0x188BF0
 * Callers:
 *     _NtUserInjectGesture@20 @ 0x16561B (_NtUserInjectGesture@20.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __fastcall ValidateGestureCaller(int a1, int a2)
{
  int v4; // ecx

  v4 = *(_DWORD *)(a1 + 248);
  if ( v4 == _grpdeskRitInput && v4 == *(_DWORD *)(a2 + 12) )
  {
    if ( (unsigned __int8)CheckAccess(*(_DWORD *)(a1 + 232) + 496, *(_DWORD *)(*(_DWORD *)(a2 + 8) + 232) + 496) )
      return 1;
    UserSetLastError((struct _NT_TIB *)5);
    EtwTraceUIPIMsgError(*(_DWORD *)(a1 + 232), *(_DWORD *)(*(_DWORD *)(a2 + 8) + 232), 281, 0, 0);
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)5);
  }
  return 0;
}
