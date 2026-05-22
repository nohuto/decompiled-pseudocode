/*
 * XREFs of ?EyeGazeStateReaderInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@_N@Z @ 0x1800DBAC4
 * Callers:
 *     ?InitializeStreamReaderHelpers@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800DBE10 (-InitializeStreamReaderHelpers@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Interna.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035068 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7344 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::EyeGazeStateReaderInitialized_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        const struct _GUID *a2,
        char a3)
{
  _QWORD *v5; // rax
  __int64 v6; // r10
  char v7; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-58h] BYREF
  const struct _GUID *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  char *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v5 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         (__int64)this,
         _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v5[1] > 4u && tlgKeywordOn(v5[1], 2LL) )
  {
    v14 = 0;
    v11 = 0;
    v12 = &v7;
    v7 = a3;
    v13 = 1;
    v9 = a2;
    v10 = 16;
    tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_1801CD914, 0LL, 0LL, 4u, &v8);
  }
}
