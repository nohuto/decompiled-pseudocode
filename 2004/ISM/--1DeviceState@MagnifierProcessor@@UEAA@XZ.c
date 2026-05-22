/*
 * XREFs of ??1DeviceState@MagnifierProcessor@@UEAA@XZ @ 0x18017CAA0
 * Callers:
 *     ??_EDeviceState@MagnifierProcessor@@UEAAPEAXI@Z @ 0x18017CB80 (--_EDeviceState@MagnifierProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@@Z @ 0x180124F90 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@.c)
 */

void __fastcall MagnifierProcessor::DeviceState::~DeviceState(MagnifierProcessor::DeviceState *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (**(void (__fastcall ***)(__int64))(v3 + 16))(v3 + 16);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 14);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *>>>(
    (__int64)this + 48,
    (__int64)this + 48,
    *(_QWORD *)(*((_QWORD *)this + 6) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 6), (const struct std::nothrow_t *)0x48);
  *((_DWORD *)this + 3) = -1073741823;
}
