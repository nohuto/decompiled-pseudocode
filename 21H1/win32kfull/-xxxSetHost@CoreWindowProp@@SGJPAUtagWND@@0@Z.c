/*
 * XREFs of ?xxxSetHost@CoreWindowProp@@SGJPAUtagWND@@0@Z @ 0xC4246
 * Callers:
 *     _NtUserSetCoreWindowPartner@12 @ 0xC4150 (_NtUserSetCoreWindowPartner@12.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z @ 0x1C952 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?IsPwndComponentWebview@@YG_NPBUtagWND@@@Z @ 0xC42C2 (-IsPwndComponentWebview@@YG_NPBUtagWND@@@Z.c)
 *     ?AddComponent@CoreWindowProp@@SGJPAUtagWND@@0@Z @ 0xC42E8 (-AddComponent@CoreWindowProp@@SGJPAUtagWND@@0@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KGJPAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0xCC6B6 (-ChangeRole@CoreWindowProp@@KGJPAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YGXPAUtagWND@@0@Z @ 0x16F307 (-xxxEstablishWebviewHostComponentRelationship@@YGXPAUtagWND@@0@Z.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KGJPAUtagWND@@0@Z @ 0x19C601 (-RemoveComponentInternal@CoreWindowProp@@KGJPAUtagWND@@0@Z.c)
 */

int __fastcall CoreWindowProp::xxxSetHost(int a1, int a2)
{
  int v2; // ebx
  int v3; // esi
  bool v5; // sf
  struct tagWND *v6; // [esp+0h] [ebp-14h]
  const struct tagWND *v7; // [esp+0h] [ebp-14h]
  struct tagWND *v8; // [esp+0h] [ebp-14h]
  struct tagWND *v9; // [esp+4h] [ebp-10h]
  struct tagWND *v10; // [esp+4h] [ebp-10h]
  int v11; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h]

  v11 = 0;
  v12 = a2;
  if ( CWindowProp::GetProp<CoreWindowProp>(a1, &v11) && (v2 = v11, *(_DWORD *)(v11 + 12)) )
  {
    if ( !*(_DWORD *)(v11 + 16) )
      goto LABEL_4;
    v3 = CoreWindowProp::RemoveComponentInternal(v6, v9);
    v5 = v3 < 0;
    if ( v3 )
    {
      UserSetLastError((struct _NT_TIB *)0x490);
      v5 = v3 < 0;
    }
    if ( !v5 )
    {
LABEL_4:
      v3 = CoreWindowProp::ChangeRole(v12, 2, 1);
      if ( v3 >= 0 )
      {
        v3 = CoreWindowProp::AddComponent(v6, v9);
        if ( v3 >= 0 )
        {
          *(_DWORD *)(v2 + 16) = v12;
          v3 = 0;
          if ( IsPwndComponentWebview(v7) )
            xxxEstablishWebviewHostComponentRelationship(v8, v10);
        }
      }
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)5);
    return -1073741790;
  }
  return v3;
}
