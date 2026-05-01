/*
 * XREFs of ?UpdateTabSelection@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180370B98
 * Callers:
 *     ?OnTabSelectionChanged@SwitchItemCollection@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1803704A4 (-OnTabSelectionChanged@SwitchItemCollection@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Wi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x180370C5C (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_FindExistingItem@SwitchItemCollection@@AEAA?AV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x180370F3C (-_FindExistingItem@SwitchItemCollection@@AEAA-AV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@PEAUI.c)
 *     ?_RemoveItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x18037E4C8 (-_RemoveItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observ.c)
 */

__int64 __fastcall SwitchItemCollection::UpdateTabSelection(
        SwitchItemCollection *this,
        struct IApplicationView *a2,
        char a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 62) )
  {
    SwitchItemCollection::_FindExistingItem(this, &v11, a2);
    if ( a3 )
    {
      if ( !v11 )
      {
        v6 = SwitchItemCollection::_AddViewItem(this, a2);
        v7 = v6;
        if ( v6 < 0 )
        {
          v8 = 322LL;
LABEL_9:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v8,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
            (const char *)(unsigned int)v6);
          goto LABEL_10;
        }
        goto LABEL_10;
      }
    }
    else if ( v11 )
    {
      v6 = ObservableObjectArray::_RemoveItem((char *)this + 8, &v11, 1LL);
      v7 = v6;
      if ( v6 < 0 )
      {
        v8 = 327LL;
        goto LABEL_9;
      }
LABEL_10:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      return v7;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  return 0LL;
}
