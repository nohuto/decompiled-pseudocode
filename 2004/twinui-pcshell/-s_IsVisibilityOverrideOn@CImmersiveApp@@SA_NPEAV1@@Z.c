/*
 * XREFs of ?s_IsVisibilityOverrideOn@CImmersiveApp@@SA_NPEAV1@@Z @ 0x180073A40
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CImmersiveApp::s_IsVisibilityOverrideOn(struct CImmersiveApp *a1)
{
  struct IUnknown *v1; // rbx
  PSRWLOCK v2; // rsi
  struct IUnknown *v3; // r13
  PVOID Ptr; // r15
  struct IUnknown **v5; // r12
  struct IUnknown **v6; // r14
  bool v7; // zf
  char v8; // bl
  struct IUnknown *v9; // rcx
  bool v11; // di
  struct IUnknown *v12; // [rsp+60h] [rbp+40h] BYREF
  struct IUnknown *v13; // [rsp+68h] [rbp+48h] BYREF
  struct IUnknown **v14; // [rsp+70h] [rbp+50h]

  v13 = 0LL;
  v1 = (struct IUnknown *)((char *)a1 + 112);
  (*(void (__fastcall **)(char *, struct IUnknown **))(*((_QWORD *)a1 + 14) + 464LL))((char *)a1 + 112, &v13);
  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  v3 = v13;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
  if ( !v1 )
    goto LABEL_4;
  v5 = (struct IUnknown **)CApplicationManagerUtility::g_pIAMGlobals[8].Ptr;
  v6 = (struct IUnknown **)CApplicationManagerUtility::g_pIAMGlobals[7].Ptr;
  if ( v6 != v5 )
  {
    v14 = &v12;
    do
    {
      v12 = *v6;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
      v11 = (unsigned int)SHIsSameObject(v1, v12) != 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
      if ( v11 )
        break;
      ++v6;
    }
    while ( v6 != v5 );
  }
  if ( v6 != v2[8].Ptr )
  {
    v8 = 1;
  }
  else
  {
LABEL_4:
    if ( Ptr )
    {
      v7 = *((_DWORD *)v2[1].Ptr + (_QWORD)Ptr - 1) == 1;
    }
    else if ( LODWORD(v2[5].Ptr) && (unsigned int)SHIsSameObject(v3, (struct IUnknown *)v2[6].Ptr) )
    {
      v7 = LODWORD(v2[5].Ptr) == 1;
    }
    else
    {
      v7 = HIDWORD(v2[5].Ptr) == 1;
    }
    v8 = v7;
  }
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
  }
  return v8;
}
