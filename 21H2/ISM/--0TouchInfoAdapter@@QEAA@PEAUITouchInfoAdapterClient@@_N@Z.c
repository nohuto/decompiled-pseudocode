/*
 * XREFs of ??0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z @ 0x180199F38
 * Callers:
 *     ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x18017A91C (-Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ??0?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@1@AEBV?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@1@@Z @ 0x18011F614 (--0-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_compare@GU-$hash.c)
 */

// Hidden C++ exception states: #wind=1
TouchInfoAdapter *__fastcall TouchInfoAdapter::TouchInfoAdapter(
        TouchInfoAdapter *this,
        struct ITouchInfoAdapterClient *a2)
{
  int v5; // [rsp+40h] [rbp+18h] BYREF

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &TouchInfoAdapter::`vftable'{for `ISessionBasedPointerDeviceArbitrationClient'};
  *((_QWORD *)this + 1) = &TouchInfoAdapter::`vftable'{for `RefCountedObject'};
  v5 = 0;
  std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>(
    (__int64)this + 40,
    &v5);
  *((_QWORD *)this + 3) = a2;
  *((_BYTE *)this + 32) = 0;
  memset_0((char *)this + 112, 0, 0x248uLL);
  *((_BYTE *)this + 696) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_WORD *)this + 54) = 0;
  return this;
}
