/*
 * XREFs of ?SpatialObjectReadNextStateError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@J_J@Z @ 0x1800DC9C8
 * Callers:
 *     ??$SpatialObjectReadNextStateError@U_GUID@@AEAJAEA_J@SpatialInteractionTrace@SpatialInteractionDevices@@SAX$$QEAU_GUID@@AEAJAEA_J@Z @ 0x1800DB420 (--$SpatialObjectReadNextStateError@U_GUID@@AEAJAEA_J@SpatialInteractionTrace@SpatialInteractionD.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7254 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectReadNextStateError_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        const struct _GUID *a2,
        int a3,
        __int64 a4)
{
  LPVOID v7; // rax
  __int64 v8; // r10
  int v9; // [rsp+38h] [rbp-19h] BYREF
  __int64 v10; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-9h] BYREF
  const struct _GUID *v12; // [rsp+68h] [rbp+17h]
  __int64 v13; // [rsp+70h] [rbp+1Fh]
  __int64 *v14; // [rsp+78h] [rbp+27h]
  __int64 v15; // [rsp+80h] [rbp+2Fh]
  int *v16; // [rsp+88h] [rbp+37h]
  __int64 v17; // [rsp+90h] [rbp+3Fh]

  v7 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         (__int64)this,
         _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v7 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v7 + 1), 2LL) )
  {
    v9 = a3;
    v16 = &v9;
    v10 = a4;
    v14 = &v10;
    v17 = 4LL;
    v15 = 8LL;
    v12 = a2;
    v13 = 16LL;
    tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_1801CDB5C, 0LL, 0LL, 5u, &v11);
  }
}
