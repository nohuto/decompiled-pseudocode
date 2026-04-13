/*
 * XREFs of ?get_Properties@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@@Z @ 0x1800A1E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::get_Properties(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v7 = 0LL;
  v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 56))(
         *(_QWORD *)(a1 + 56),
         &GUID_58b612f7_0fbb_480d_abea_5ce1a45a9ec7,
         &v7);
  if ( v3 < 0 )
  {
    v4 = 58LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappdisplayinfo.cpp",
      (const char *)(unsigned int)v3);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    return (unsigned int)v3;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v7 + 48LL))(v7, a2);
  if ( v3 < 0 )
  {
    v4 = 59LL;
    goto LABEL_3;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return 0LL;
}
