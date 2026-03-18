/*
 * XREFs of _anonymous_namespace_::HashTableDeallocator @ 0x1C02414B4
 * Callers:
 *     ?AddWindow@CWindowGroup@@QEAAJPEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0240B98 (-AddWindow@CWindowGroup@@QEAAJPEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z.c)
 *     ?CreateGroup@CWindowGroupManager@@QEAAJPEAUWINDOW_GROUP_ID@@@Z @ 0x1C0240FB8 (-CreateGroup@CWindowGroupManager@@QEAAJPEAUWINDOW_GROUP_ID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::HashTableDeallocator(__int64 a1)
{
  return Win32FreePool(a1);
}
