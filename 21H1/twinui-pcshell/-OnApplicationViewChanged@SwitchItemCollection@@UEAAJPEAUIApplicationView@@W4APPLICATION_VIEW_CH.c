/*
 * XREFs of ?OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1803703F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x180370C5C (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RemoveViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x180371040 (-_RemoveViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1803710BC (-_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?_UpdateThumbnailWindow@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x180371168 (-_UpdateThumbnailWindow@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall SwitchItemCollection::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  int updated; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    updated = SwitchItemCollection::_AddViewItem((SwitchItemCollection *)(a1 - 160), a2);
    if ( updated < 0 )
    {
      v4 = 86LL;
      goto LABEL_15;
    }
    return (unsigned int)updated;
  }
  if ( a3 == 1 )
  {
    updated = SwitchItemCollection::_RemoveViewItem((SwitchItemCollection *)(a1 - 160), a2);
    if ( updated < 0 )
    {
      v4 = 89LL;
      goto LABEL_15;
    }
    return (unsigned int)updated;
  }
  if ( a3 <= 9 )
    return 0LL;
  if ( a3 > 11 )
  {
    if ( a3 == 12 )
    {
      updated = SwitchItemCollection::_UpdateThumbnailWindow((SwitchItemCollection *)(a1 - 160), a2);
      if ( updated < 0 )
      {
        v4 = 96LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v4,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
          (const char *)(unsigned int)updated);
        return (unsigned int)updated;
      }
      return (unsigned int)updated;
    }
    return 0LL;
  }
  updated = SwitchItemCollection::_UpdateShowInSwitchers((SwitchItemCollection *)(a1 - 160), a2, a3 == 10);
  if ( updated < 0 )
  {
    v4 = 93LL;
    goto LABEL_15;
  }
  return (unsigned int)updated;
}
