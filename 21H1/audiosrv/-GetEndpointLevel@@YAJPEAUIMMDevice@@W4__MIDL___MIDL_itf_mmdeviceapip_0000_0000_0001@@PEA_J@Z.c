/*
 * XREFs of ?GetEndpointLevel@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_J@Z @ 0x180114864
 * Callers:
 *     ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180114A5C (-SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18000EB70 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002C164 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetEndpointLevel(struct IUnknown *a1, unsigned int a2, _QWORD *a3)
{
  int v5; // ebx
  struct IUnknown *v6; // rcx
  int v8; // [rsp+30h] [rbp-40h] BYREF
  struct IUnknown *v9; // [rsp+38h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int16 v11[16]; // [rsp+48h] [rbp-28h] BYREF

  v9 = 0LL;
  v8 = 0;
  v10 = 0LL;
  v5 = StringCchPrintfW(v11, 13LL, L"Level:%x", a2);
  if ( v5 < 0 )
    goto LABEL_9;
  v6 = v9;
  if ( v9 != a1 )
  {
    ATL::AtlComQIPtrAssign(&v9, a1, &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e);
    v6 = v9;
  }
  if ( !v6 )
    goto LABEL_5;
  v8 = 8;
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned __int16 *, __int64, __int64 *, int *))v6->lpVtbl[5].QueryInterface)(
         v6,
         v11,
         11LL,
         &v10,
         &v8);
  if ( v5 < 0 )
  {
LABEL_9:
    v6 = v9;
  }
  else
  {
    v6 = v9;
    if ( v8 != 8 )
    {
LABEL_5:
      v5 = -2147024809;
      goto LABEL_10;
    }
    *a3 = v10;
  }
LABEL_10:
  if ( v6 )
    ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
  return (unsigned int)v5;
}
