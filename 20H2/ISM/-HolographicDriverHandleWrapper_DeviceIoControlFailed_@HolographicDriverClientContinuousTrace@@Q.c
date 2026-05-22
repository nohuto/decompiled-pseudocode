/*
 * XREFs of ?HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@QEAAXKKPEBXAEBU_GUID@@@Z @ 0x18015F5EC
 * Callers:
 *     ??$HolographicDriverHandleWrapper_DeviceIoControlFailed@AEAKAEAKPEAVHolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEBU_GUID@@@HolographicDriverClientContinuousTrace@@SAXAEAK0$$QEAPEAVHolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEBU_GUID@@@Z @ 0x18014ED88 (--$HolographicDriverHandleWrapper_DeviceIoControlFailed@AEAKAEAKPEAVHolographicDriverHandleWrapp.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035138 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167A2C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::HolographicDriverHandleWrapper_DeviceIoControlFailed_(
        HolographicDriverClientContinuousTrace *this,
        int a2,
        int a3,
        const void *a4,
        const struct _GUID *a5)
{
  __int64 v8; // rax
  __int64 v9; // r10
  int v10; // [rsp+38h] [rbp-51h] BYREF
  int v11; // [rsp+3Ch] [rbp-4Dh] BYREF
  const void *v12; // [rsp+40h] [rbp-49h] BYREF
  const void *v13; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+58h] [rbp-31h] BYREF
  const void **v15; // [rsp+78h] [rbp-11h]
  __int64 v16; // [rsp+80h] [rbp-9h]
  int *v17; // [rsp+88h] [rbp-1h]
  __int64 v18; // [rsp+90h] [rbp+7h]
  int *v19; // [rsp+98h] [rbp+Fh]
  __int64 v20; // [rsp+A0h] [rbp+17h]
  const void **v21; // [rsp+A8h] [rbp+1Fh]
  __int64 v22; // [rsp+B0h] [rbp+27h]
  const struct _GUID *v23; // [rsp+B8h] [rbp+2Fh]
  __int64 v24; // [rsp+C0h] [rbp+37h]

  v8 = wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
         this,
         _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v8 + 8) > 5u && tlgKeywordOn(*(_QWORD *)(v8 + 8), 2LL) )
  {
    v23 = a5;
    v12 = a4;
    v21 = &v12;
    v10 = a3;
    v19 = &v10;
    v11 = a2;
    v17 = &v11;
    v15 = &v13;
    v13 = a4;
    v24 = 16LL;
    v22 = 8LL;
    v20 = 4LL;
    v18 = 4LL;
    v16 = 8LL;
    tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_1801CE8C1, 0LL, 0LL, 7u, &v14);
  }
}
