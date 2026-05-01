/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWindowingEnvironmentConfig@@UIWindowingEnvironmentConfigInternal@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180040E30
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWindowingEnvironmentConfig@@UIWindowingEnvironmentConfigInternal@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D2F10 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800D2F10.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWindowingEnvironmentConfig@@UIWindowingEnvironmentConfigInternal@@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D2F20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800D2F20.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IWindowingEnvironmentConfig,IWindowingEnvironmentConfigInternal>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rdi
  _DWORD *v15; // rcx
  _QWORD *v16; // r10
  __int64 v18; // r9
  _QWORD *v19; // r10

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v3, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
  {
    *v7 = v8;
    v12 = 0;
    v13 = v8;
    goto LABEL_8;
  }
  if ( InlineIsEqualGUID(v6, &GUID_00000003_0000_0000_c000_000000000046) )
  {
    *v10 = v11;
    v12 = 0;
    v13 = v11;
  }
  else
  {
    v12 = -2147467262;
    v13 = 0LL;
  }
  if ( v12 != -2147467262 )
  {
LABEL_10:
    if ( v12 < 0 )
      return (unsigned int)v12;
    goto LABEL_8;
  }
  v14 = v11 + 32;
  if ( !InlineIsEqualGUID(v9, &GUID_3c32be79_d44b_4c43_b19b_12f70e686f35) )
  {
    if ( InlineIsEqualGUID(v15, &GUID_c6144554_2844_43cf_b0ff_9b3c8ad9ba14) )
    {
      v13 = v18 + 40;
      v12 = 0;
      *v19 = v18 + 40;
    }
    else
    {
      v12 = -2147467262;
    }
    goto LABEL_10;
  }
  *v16 = v14;
  v12 = 0;
  v13 = v14;
LABEL_8:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  return (unsigned int)v12;
}
