/*
 * XREFs of ??1GazeHidDevice@@UEAA@XZ @ 0x18009D8A8
 * Callers:
 *     ??_EGazeHidDevice@@UEAAPEAXI@Z @ 0x18009B300 (--_EGazeHidDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003CA5C (--3@YAXPEAX@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAUHotKeyInfo@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAUHotKeyInfo@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAUHotKeyInfo@@PEAX@std@@@1@PEAU?$_Tree_node@PEAUHotKeyInfo@@PEAX@1@@Z @ 0x1801296E8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAUHotKeyInfo@@PEAX@std@@@std@@@-$_Tree_val@U-$_Tree_.c)
 */

void __fastcall GazeHidDevice::~GazeHidDevice(GazeHidDevice *this, const struct std::nothrow_t *a2)
{
  void *v3; // rcx
  void **v4; // rbx
  const struct std::nothrow_t *v5; // rdx

  *(_QWORD *)this = &GazeHidDevice::`vftable';
  v3 = (void *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    operator delete(v3);
    *((_QWORD *)this + 4) = 0LL;
  }
  v4 = (void **)*((_QWORD *)this + 28);
  if ( v4 )
  {
    if ( *v4 )
      operator delete(*v4, a2);
    operator delete(v4, (const struct std::nothrow_t *)8);
  }
  std::_Tree_val<std::_Tree_simple_types<HotKeyInfo *>>::_Erase_tree<std::allocator<std::_Tree_node<HotKeyInfo *,void *>>>(
    (char *)this + 200,
    (char *)this + 200,
    *(_QWORD *)(*((_QWORD *)this + 25) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 25), (const struct std::nothrow_t *)0x28);
  HIDDevice::~HIDDevice(this, v5);
}
