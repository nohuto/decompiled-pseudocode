/*
 * XREFs of ?AugmentedInputDevice_DeviceRemoved_@RawInputProvidersTracing@@QEAAXI@Z @ 0x18008F234
 * Callers:
 *     ?OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z @ 0x18008F5C0 (-OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035138 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x18008FE60 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

void __fastcall RawInputProvidersTracing::AugmentedInputDevice_DeviceRemoved_(RawInputProvidersTracing *this, int a2)
{
  __int64 v3; // rax
  __int64 v4; // r10
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v3 = wil::details::static_lazy<RawInputProvidersTracing>::get(
         this,
         _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v3 + 8) > 4u && tlgKeywordOn(*(_QWORD *)(v3 + 8), 2LL) )
  {
    v9 = 0;
    v7 = &v5;
    v5 = a2;
    v8 = 4;
    tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_1801C906A, 0LL, 0LL, 3u, &v6);
  }
}
