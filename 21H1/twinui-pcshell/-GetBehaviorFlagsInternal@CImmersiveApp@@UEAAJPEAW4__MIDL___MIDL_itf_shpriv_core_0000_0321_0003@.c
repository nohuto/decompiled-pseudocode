/*
 * XREFs of ?GetBehaviorFlagsInternal@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0321_0003@@@Z @ 0x180017A10
 * Callers:
 *     <none>
 * Callees:
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180017DF0 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AEDC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveApp::GetBehaviorFlagsInternal(
        unsigned __int64 this,
        enum __MIDL___MIDL_itf_shpriv_core_0000_0321_0003 *a2)
{
  void (__fastcall *v4)(unsigned __int64, GUID *, struct IUnknown **); // rbx
  int v5; // r14d
  void *v6; // rbx
  __int64 (__fastcall *v7)(void *, _QWORD, __int64 *); // rdi
  void *v9; // rbx
  int (__fastcall *v10)(void *, unsigned __int64, struct IUnknown **); // rdi
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF
  void *v12; // [rsp+58h] [rbp+38h] BYREF
  struct IUnknown *v13; // [rsp+60h] [rbp+40h] BYREF

  LODWORD(v11) = 0;
  *(_DWORD *)a2 = 0;
  v12 = 0LL;
  if ( *(_BYTE *)(this + 624) )
  {
    v5 = -2147019873;
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    v13 = 0LL;
    LODWORD(v11) = 2;
    v4 = *(void (__fastcall **)(unsigned __int64, GUID *, struct IUnknown **))(*(_QWORD *)(this - 64) + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    v4(this - 64, &GUID_00000000_0000_0000_c000_000000000046, &v13);
    v5 = IAMPrivate_QueryObject(
           v13,
           (const struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
           &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
           &v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    if ( v5 >= 0 )
    {
      v11 = 0LL;
      v6 = v12;
      v7 = *(__int64 (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)v12 + 56LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v11);
      v5 = v7(v6, *(_QWORD *)(this + 480), &v11);
      if ( v5 >= 0 )
      {
        *(_DWORD *)a2 = *(_DWORD *)(this + 388);
        v5 = 0;
        if ( *(_BYTE *)(v11 + 33) || *(_BYTE *)(v11 + 35) )
        {
          v13 = 0LL;
          v9 = v12;
          v10 = *(int (__fastcall **)(void *, unsigned __int64, struct IUnknown **))(*(_QWORD *)v12 + 112LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
          if ( v10(v9, this & -(__int64)(this != 112), &v13) < 0 )
            *(_DWORD *)a2 |= 0x80000000;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v11);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return (unsigned int)v5;
}
