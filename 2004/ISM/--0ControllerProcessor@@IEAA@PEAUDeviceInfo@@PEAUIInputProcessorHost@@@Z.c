/*
 * XREFs of ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18011F274
 * Callers:
 *     ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180120740 (-Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180023BFC (--0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ??0InjectionDevice@@QEAA@PEAUIInputProcessorHost@@W4InputType@@@Z @ 0x180023C50 (--0InjectionDevice@@QEAA@PEAUIInputProcessorHost@@W4InputType@@@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     ??0ManipulationInjector@@QEAA@XZ @ 0x1800C1A34 (--0ManipulationInjector@@QEAA@XZ.c)
 *     ??0?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@1@AEBV?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@1@@Z @ 0x18011F1B4 (--0-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_compare@GU-$hash.c)
 */

// Hidden C++ exception states: #wind=19
ControllerProcessor *__fastcall ControllerProcessor::ControllerProcessor(
        ControllerProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  _QWORD *v5; // rcx
  unsigned int v7; // [rsp+20h] [rbp-18h]
  char *v8; // [rsp+58h] [rbp+20h] BYREF

  NonPointerProcessor::NonPointerProcessor(this, a2, a3);
  *v5 = &ControllerProcessor::`vftable'{for `IInputProcessor'};
  v5[1] = &ControllerProcessor::`vftable'{for `IInputFocusListener'};
  v5[2] = &ControllerProcessor::`vftable'{for `RefCountedObject'};
  v5[9] = &ControllerProcessor::`vftable'{for `IRawInputProvider'};
  v5[10] = &ControllerProcessor::`vftable'{for `IManipulationInjectorClient'};
  v7 = (_DWORD)v5 + 88;
  LODWORD(v8) = 0;
  std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>(
    (__int64)(v5 + 11),
    &v8);
  *((_DWORD *)this + 70) = 2;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_OWORD *)((char *)this + 312) = 0LL;
  *(_QWORD *)((char *)this + 340) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_BYTE *)this + 376) = 0;
  *((_BYTE *)this + 396) = 0;
  *((_DWORD *)this + 100) = 0;
  *(_QWORD *)((char *)this + 412) = 0LL;
  ManipulationInjector::ManipulationInjector((ControllerProcessor *)((char *)this + 424));
  *((_BYTE *)this + 1232) = 0;
  *((_DWORD *)this + 309) = 0;
  *((_WORD *)this + 620) = 0;
  InjectionDevice::InjectionDevice((__int64)this + 1248, (__int64)a3, 128);
  InjectionDevice::InjectionDevice((__int64)this + 2808, (__int64)a3, 66);
  InjectionDevice::InjectionDevice((__int64)this + 4368, (__int64)a3, 8);
  v8 = (char *)this + 5928;
  InjectionDevice::InjectionDevice((__int64)this + 5928, (__int64)a3, 4);
  *((_QWORD *)this + 936) = 0LL;
  *((_BYTE *)this + 7496) = 0;
  LOBYTE(v7) = 0;
  *((_QWORD *)this + 940) = v7;
  *((_QWORD *)this + 941) = 0LL;
  *((_QWORD *)this + 942) = 0LL;
  *((_DWORD *)this + 1886) = 0;
  v8 = 0LL;
  *(_QWORD *)((char *)this + 7548) = 0LL;
  *(_QWORD *)((char *)this + 7556) = 0LL;
  *((_BYTE *)this + 7564) = 0;
  *((_DWORD *)this + 1892) = 1077936128;
  *((_DWORD *)this + 1893) = 1109393408;
  *((_QWORD *)this + 947) = 5LL;
  memset_0((char *)this + 7584, 0, 0x50uLL);
  *((_QWORD *)this + 958) = 0LL;
  *((_QWORD *)this + 959) = 0LL;
  *((_QWORD *)this + 960) = 500000LL;
  *((_QWORD *)this + 961) = 160000LL;
  *((_QWORD *)this + 962) = 1000000LL;
  *((_DWORD *)this + 1928) = 100;
  *((_DWORD *)this + 1929) = 100;
  *((_BYTE *)this + 7720) = 0;
  *((_QWORD *)this + 966) = 0LL;
  *((_QWORD *)this + 967) = 0LL;
  *((_QWORD *)this + 968) = 0LL;
  *((_QWORD *)this + 969) = 0LL;
  memset_0((char *)this + 152, 0, 0x80uLL);
  return this;
}
