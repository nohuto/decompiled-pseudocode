/*
 * XREFs of _NtUserSetCoreWindowPartner@12 @ 0xC4150
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?ValidateHWNDND@@YGHPAUHWND__@@PAPAUtagWND@@@Z @ 0x74B40 (-ValidateHWNDND@@YGHPAUHWND__@@PAPAUtagWND@@@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?xxxSetHost@CoreWindowProp@@SGJPAUtagWND@@0@Z @ 0xC4246 (-xxxSetHost@CoreWindowProp@@SGJPAUtagWND@@0@Z.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KGJPAUtagWND@@0@Z @ 0x19C601 (-RemoveComponentInternal@CoreWindowProp@@KGJPAUtagWND@@0@Z.c)
 */

BOOL __userpurge NtUserSetCoreWindowPartner@<eax>(struct tagWND *a1@<edi>, int a2, int a3, unsigned int a4)
{
  BOOL v4; // ebx
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ebx
  int v10; // esi
  struct tagWND *v12; // [esp+0h] [ebp-24h]
  _DWORD v13[3]; // [esp+8h] [ebp-1Ch] BYREF
  _DWORD v14[3]; // [esp+14h] [ebp-10h] BYREF
  int v15; // [esp+20h] [ebp-4h]

  v4 = 0;
  EnterCrit(0, 1);
  v5 = a3;
  if ( a3 != 2 && a3 )
    goto LABEL_12;
  a3 = 0;
  v15 = _gptiCurrent;
  if ( !ValidateHWNDND(a2, &a3) )
    goto LABEL_12;
  v6 = a3;
  v7 = *(_DWORD *)(a3 + 8);
  if ( v15 != v7 || !IsImmersiveAppRestricted(*(_DWORD *)(v7 + 232)) )
  {
    UserSetLastError((struct _NT_TIB *)5);
    goto LABEL_9;
  }
  a3 = HMValidateHandleNoSecure(a4, 1);
  if ( !a3 )
    goto LABEL_12;
  if ( v5 )
  {
    if ( v5 == 2 )
    {
      v14[2] = 0;
      v13[2] = 0;
      v8 = v15;
      v14[1] = v6;
      v14[0] = *(_DWORD *)(v15 + 228);
      *(_DWORD *)(v15 + 228) = v14;
      HMLockObject(v6);
      v13[0] = *(_DWORD *)(v8 + 228);
      *(_DWORD *)(v8 + 228) = v13;
      v13[1] = a3;
      HMLockObject(a3);
      v4 = CoreWindowProp::xxxSetHost(a1, v12) >= 0;
      ThreadUnlock1();
      ThreadUnlock1();
      goto LABEL_9;
    }
LABEL_12:
    UserSetLastError((struct _NT_TIB *)0x57);
    goto LABEL_9;
  }
  v10 = CoreWindowProp::RemoveComponentInternal(a1, v12);
  if ( v10 )
    UserSetLastError((struct _NT_TIB *)0x490);
  v4 = v10 >= 0;
LABEL_9:
  UserSessionSwitchLeaveCrit();
  return v4;
}
