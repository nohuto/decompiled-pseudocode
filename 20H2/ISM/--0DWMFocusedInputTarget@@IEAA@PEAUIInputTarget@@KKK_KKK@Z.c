/*
 * XREFs of ??0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KKK_KKK@Z @ 0x180028184
 * Callers:
 *     ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KKK_KKKPEAPEAU2@@Z @ 0x180028344 (-Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KKK_KKKPEAPEAU2@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180011C88 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x1800282DC (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x1800337B0 (-InternalAddRef@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
DWMFocusedInputTarget *__fastcall DWMFocusedInputTarget::DWMFocusedInputTarget(
        DWMFocusedInputTarget *this,
        struct IInputTarget *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int a7,
        unsigned int a8)
{
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  char *v14; // rax
  __int64 v15; // rcx
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  *((_QWORD *)this + 5) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 12) = 1;
  *(_QWORD *)this = &DWMFocusedInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &DWMFocusedInputTarget::`vftable'{for `IInputTarget2'};
  *((_QWORD *)this + 2) = &DWMFocusedInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 3) = &DWMFocusedInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 4) = &DWMFocusedInputTarget::`vftable'{for `IInputSiteTarget'};
  *((_QWORD *)this + 5) = &DWMFocusedInputTarget::`vftable'{for `RefCountedObject'};
  v12 = (_QWORD *)((char *)this + 56);
  *v12 = a2;
  Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef(v12);
  *((_DWORD *)this + 16) = a3;
  *((_DWORD *)this + 17) = a4;
  *((_DWORD *)this + 18) = a5;
  *((_QWORD *)this + 10) = a6;
  *((_DWORD *)this + 22) = a7;
  *((_DWORD *)this + 23) = a8;
  *((_QWORD *)this + 12) = 0LL;
  if ( a2 )
  {
    (**(void (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
      a2,
      &GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea,
      &v18);
    v13 = v18;
  }
  else
  {
    v13 = 0LL;
    v18 = 0LL;
  }
  if ( v13 )
  {
    v14 = (char *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 24LL))(v13, v17);
    Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)this + 12, v14);
    v15 = v17[0];
    if ( v17[0] )
    {
      v17[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v13 = v18;
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( !*((_QWORD *)this + 12) )
    DWMFocusedInputTarget::PopulateInputSiteFromViewId(this);
  return this;
}
