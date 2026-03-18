/*
 * XREFs of _xxxSetSystemMenu@8 @ 0xC0654
 * Callers:
 *     _NtUserSetSystemMenu@8 @ 0xC0574 (_NtUserSetSystemMenu@8.c)
 * Callees:
 *     __DestroyMenu@4 @ 0x1E38A (__DestroyMenu@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?LockWndMenuWorker@@YGPAXPAUtagWND@@_NABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x9B2F2 (-LockWndMenuWorker@@YGPAXPAUtagWND@@_NABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _MNPositionSysMenu@8 @ 0xC069A (_MNPositionSysMenu@8.c)
 */

int __fastcall xxxSetSystemMenu(int a1, _DWORD **a2)
{
  int v3; // ebx

  if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 22) & 8) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 88);
    if ( LockWndMenuWorker(a1, 1u, a2) )
      _DestroyMenu(v3);
    MNPositionSysMenu(a1);
    return 1;
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x59D);
    return 0;
  }
}
