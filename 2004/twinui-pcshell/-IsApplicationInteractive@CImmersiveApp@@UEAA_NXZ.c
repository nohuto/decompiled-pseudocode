/*
 * XREFs of ?IsApplicationInteractive@CImmersiveApp@@UEAA_NXZ @ 0x180069A60
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CImmersiveApp::IsApplicationInteractive(unsigned __int64 this)
{
  PSRWLOCK v2; // rsi
  char v3; // r15
  struct IUnknown *v4; // rbx
  struct IUnknown *v5; // rax
  PVOID Ptr; // r12
  struct IUnknown **v7; // r13
  struct IUnknown **v8; // r14
  struct IUnknown *v9; // rcx
  bool v11; // al
  bool v12; // di
  bool v13; // zf
  struct IUnknown *v14; // [rsp+70h] [rbp+48h] BYREF
  struct IUnknown *v15; // [rsp+78h] [rbp+50h] BYREF
  struct IUnknown *v16; // [rsp+80h] [rbp+58h]
  struct IUnknown **v17; // [rsp+88h] [rbp+60h]

  v15 = 0LL;
  (*(void (__fastcall **)(unsigned __int64, struct IUnknown **))(*(_QWORD *)this + 464LL))(this, &v15);
  if ( (*(_BYTE *)(this + 472) & 4) == 0 )
    goto LABEL_11;
  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  v3 = 1;
  v4 = (struct IUnknown *)(this & -(__int64)(this != 112));
  v5 = v15;
  v16 = v15;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
  if ( !v4 )
    goto LABEL_5;
  v7 = (struct IUnknown **)CApplicationManagerUtility::g_pIAMGlobals[8].Ptr;
  v8 = (struct IUnknown **)CApplicationManagerUtility::g_pIAMGlobals[7].Ptr;
  if ( v8 != v7 )
  {
    v17 = &v14;
    do
    {
      v14 = *v8;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
      v12 = (unsigned int)SHIsSameObject(v4, v14) != 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      if ( v12 )
        break;
      ++v8;
    }
    while ( v8 != v7 );
    v5 = v16;
  }
  if ( v8 == v2[8].Ptr )
  {
LABEL_5:
    if ( Ptr )
    {
      v13 = *((_DWORD *)v2[1].Ptr + (_QWORD)Ptr - 1) == 1;
    }
    else
    {
      if ( !LODWORD(v2[5].Ptr) || !(unsigned int)SHIsSameObject(v5, (struct IUnknown *)v2[6].Ptr) )
      {
        if ( HIDWORD(v2[5].Ptr) == 1 )
          goto LABEL_8;
        v11 = 0;
LABEL_21:
        if ( !v11 )
        {
LABEL_11:
          v3 = 0;
          goto LABEL_8;
        }
        goto LABEL_8;
      }
      v13 = LODWORD(v2[5].Ptr) == 1;
    }
    v11 = v13;
    goto LABEL_21;
  }
LABEL_8:
  v9 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
  }
  return v3;
}
