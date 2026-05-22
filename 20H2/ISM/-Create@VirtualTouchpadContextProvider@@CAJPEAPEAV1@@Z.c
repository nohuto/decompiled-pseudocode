/*
 * XREFs of ?Create@VirtualTouchpadContextProvider@@CAJPEAPEAV1@@Z @ 0x18014578C
 * Callers:
 *     wil::init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___ @ 0x180145358 (wil--init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___.c)
 * Callees:
 *     ??0SystemContextProvider@@IEAA@XZ @ 0x180025A54 (--0SystemContextProvider@@IEAA@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283FC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     ??0critical_section@wil@@QEAA@K@Z @ 0x180063F0C (--0critical_section@wil@@QEAA@K@Z.c)
 *     ??0?$unordered_map@_KUtagRECT@@U?$hash@_K@std@@U?$equal_to@_K@3@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@3@@std@@QEAA@XZ @ 0x1801455C0 (--0-$unordered_map@_KUtagRECT@@U-$hash@_K@std@@U-$equal_to@_K@3@V-$allocator@U-$pair@$$CB_KUtagR.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualTouchpadContextProvider::Create(struct VirtualTouchpadContextProvider **a1)
{
  char *v2; // rax
  char *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8

  *a1 = 0LL;
  v2 = (char *)RefCountedObject::operator new(0xC0uLL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0xC0uLL);
    SystemContextProvider::SystemContextProvider((SystemContextProvider *)v3);
    *(_QWORD *)v3 = &VirtualTouchpadContextProvider::`vftable'{for `ISystemContextProvider'};
    *((_QWORD *)v3 + 1) = &VirtualTouchpadContextProvider::`vftable'{for `RefCountedObject'};
    wil::critical_section::critical_section((struct _RTL_CRITICAL_SECTION *)(v3 + 88));
    std::unordered_map<unsigned __int64,tagRECT>::unordered_map<unsigned __int64,tagRECT>((__int64)(v3 + 128), v4, v5);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = (struct VirtualTouchpadContextProvider *)v3;
  return 0LL;
}
