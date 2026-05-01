/*
 * XREFs of ??_EPositionAndSizeOptionsProvider@KeyboardHosting@@UEAAPEAXI@Z @ 0x180367F30
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089B14 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@1@@Z @ 0x18036694C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHost.c)
 */

KeyboardHosting::PositionAndSizeOptionsProvider *__fastcall KeyboardHosting::PositionAndSizeOptionsProvider::`vector deleting destructor'(
        KeyboardHosting::PositionAndSizeOptionsProvider *this,
        char a2)
{
  void **v2; // rbx

  v2 = (void **)((char *)this + 16);
  std::_Tree_val<std::_Tree_simple_types<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *>>>(
    (__int64)this + 16,
    (__int64)this + 16,
    *(_QWORD *)(*((_QWORD *)this + 2) + 8LL));
  std::_Deallocate<16,0>(*v2, (const struct std::nothrow_t *)0x38);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE0);
  return this;
}
