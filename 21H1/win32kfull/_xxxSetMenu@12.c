/*
 * XREFs of _xxxSetMenu@12 @ 0xC0AC0
 * Callers:
 *     _NtUserSetMenu@12 @ 0xC097C (_NtUserSetMenu@12.c)
 * Callees:
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?LockWndMenuWorker@@YGPAXPAUtagWND@@_NABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x9B2F2 (-LockWndMenuWorker@@YGPAXPAUtagWND@@_NABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 */

int __fastcall xxxSetMenu(int a1, _DWORD **a2, int a3)
{
  if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 23) & 0xC0) == 0x40 )
  {
    UserSetLastError((struct _NT_TIB *)0x59C);
    return 0;
  }
  else
  {
    LockWndMenuWorker(a1, 0, a2);
    if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 23) & 0x20) == 0 )
    {
      if ( a3 )
        xxxSetWindowPos(a1, 0, 0, 0, 0, 0, 55);
    }
    return 1;
  }
}
