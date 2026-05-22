/*
 * XREFs of ??0SystemContextProvider@@IEAA@XZ @ 0x1800259C4
 * Callers:
 *     ??0InputConfigContextProvider@@IEAA@XZ @ 0x180025940 (--0InputConfigContextProvider@@IEAA@XZ.c)
 *     ?Create@VirtualTouchpadContextProvider@@CAJPEAPEAV1@@Z @ 0x180145CDC (-Create@VirtualTouchpadContextProvider@@CAJPEAPEAV1@@Z.c)
 *     wil::init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___ @ 0x180146D8C (wil--init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___.c)
 * Callees:
 *     ??0?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@1@AEBV?$allocator@PEAUISystemContextObserver@@@1@@Z @ 0x180025450 (--0-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemContextObser.c)
 */

// Hidden C++ exception states: #wind=1
SystemContextProvider *__fastcall SystemContextProvider::SystemContextProvider(SystemContextProvider *this)
{
  char *v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+3Ch] [rbp+14h]

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &SystemContextProvider::`vftable'{for `ISystemContextProvider'};
  *((_QWORD *)this + 1) = &SystemContextProvider::`vftable'{for `RefCountedObject'};
  v2 = (char *)this + 24;
  v5 = HIDWORD(v2);
  v4 = 0;
  std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>(
    (__int64)v2,
    &v4);
  return this;
}
