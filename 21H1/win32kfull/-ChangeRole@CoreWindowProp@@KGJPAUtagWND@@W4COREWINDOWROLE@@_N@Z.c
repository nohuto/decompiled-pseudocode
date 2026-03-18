/*
 * XREFs of ?ChangeRole@CoreWindowProp@@KGJPAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0xCC6B6
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SGJPAUtagWND@@0@Z @ 0xC4246 (-xxxSetHost@CoreWindowProp@@SGJPAUtagWND@@0@Z.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KGJPAUtagWND@@0@Z @ 0x19C601 (-RemoveComponentInternal@CoreWindowProp@@KGJPAUtagWND@@0@Z.c)
 *     ?SetRole@CoreWindowProp@@SGJPAUtagWND@@W4COREWINDOWROLE@@@Z @ 0x19C66E (-SetRole@CoreWindowProp@@SGJPAUtagWND@@W4COREWINDOWROLE@@@Z.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?GetOrCreate@CoreWindowProp@@KGJPAUtagWND@@PAPAV1@@Z @ 0xCC6FC (-GetOrCreate@CoreWindowProp@@KGJPAUtagWND@@PAPAV1@@Z.c)
 */

int __fastcall CoreWindowProp::ChangeRole(int a1, int a2, unsigned __int8 a3)
{
  int v4; // edx
  int v5; // esi
  struct tagWND *v7; // [esp+0h] [ebp-8h]
  int v8; // [esp+4h] [ebp-4h]

  v4 = CoreWindowProp::GetOrCreate(v7, 0);
  if ( v4 >= 0 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        *(_DWORD *)(v8 + 8) = a3;
      }
      else
      {
        UserSetLastError((struct _NT_TIB *)0x57);
        return -1073741811;
      }
    }
    else
    {
      *(_DWORD *)(v8 + 12) = a3;
    }
  }
  return v4;
}
