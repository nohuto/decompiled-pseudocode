/*
 * XREFs of _anonymous_namespace_::HashTableDeallocator @ 0x19F288
 * Callers:
 *     ?AddWindow@CWindowGroup@@QAEJPAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19EB05 (-AddWindow@CWindowGroup@@QAEJPAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z.c)
 *     ?CreateGroup@CWindowGroupManager@@QAEJPAUWINDOW_GROUP_ID@@@Z @ 0x19EE4C (-CreateGroup@CWindowGroupManager@@QAEJPAUWINDOW_GROUP_ID@@@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall anonymous_namespace_::HashTableDeallocator(int a1, int a2)
{
  return Win32FreePool(a1);
}
