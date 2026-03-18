/*
 * XREFs of _lambda_253e1404844a8379d0c8ce26edd6c7ad_::_lambda_invoker_cdecl_ @ 0x1C001AAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x1C01664E4 (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall lambda_253e1404844a8379d0c8ce26edd6c7ad_::_lambda_invoker_cdecl_(struct DXGADAPTER *a1)
{
  __int64 v2; // rdx
  _BYTE v4[144]; // [rsp+20h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v4, a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v4, 0LL) >= 0 )
    DmmClearDisplayManagerReferencesForAdapter(a1);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v4, v2);
  return 0LL;
}
