/*
 * XREFs of _lambda_940d064d943a20fd52938170853ed62c_::_lambda_invoker_cdecl_ @ 0x1C013D580
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0011608 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C013ECC4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall lambda_940d064d943a20fd52938170853ed62c_::_lambda_invoker_cdecl_(struct ADAPTER_RENDER **a1)
{
  unsigned int v2; // r8d
  __int64 v3; // rdx
  ADAPTER_DISPLAY *v4; // rcx
  _BYTE v6[144]; // [rsp+20h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v6, (struct DXGADAPTER *const)a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v6, v2 + 1, v2) >= 0 )
  {
    v4 = a1[334];
    if ( v4 )
    {
      if ( !a1[545] )
        ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(v4, a1[335]);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v6, v3);
  return 0LL;
}
