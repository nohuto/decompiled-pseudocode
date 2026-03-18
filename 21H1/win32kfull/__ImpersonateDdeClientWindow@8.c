/*
 * XREFs of __ImpersonateDdeClientWindow@8 @ 0x18000E
 * Callers:
 *     _NtUserImpersonateDdeClientWindow@8 @ 0x1652D8 (_NtUserImpersonateDdeClientWindow@8.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?FindDdeConv@@YGPAUtagDDECONV@@PAUtagWND@@0@Z @ 0x17E9C1 (-FindDdeConv@@YGPAUtagDDECONV@@PAUtagWND@@0@Z.c)
 */

int __fastcall _ImpersonateDdeClientWindow(int a1, int a2)
{
  struct tagDDECONV *DdeConv; // esi
  struct _KTHREAD *CurrentThread; // eax
  int v4; // eax
  struct _NT_TIB *v5; // eax

  DdeConv = FindDdeConv(a1, a2);
  if ( !DdeConv || !*((_DWORD *)DdeConv + 11) )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v4 = SeImpersonateClientEx((PSECURITY_CLIENT_CONTEXT)(*((_DWORD *)DdeConv + 11) + 12), CurrentThread);
  if ( v4 < 0 )
  {
    v5 = (struct _NT_TIB *)RtlNtStatusToDosError(v4);
    UserSetLastError(v5);
    return 0;
  }
  return 1;
}
