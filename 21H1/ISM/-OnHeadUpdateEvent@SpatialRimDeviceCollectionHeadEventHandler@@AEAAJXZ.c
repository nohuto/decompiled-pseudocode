/*
 * XREFs of ?OnHeadUpdateEvent@SpatialRimDeviceCollectionHeadEventHandler@@AEAAJXZ @ 0x18009514C
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_8f38397fb510ec0288b294132d0aacc6_@@CAJPEAX@Z @ 0x180090D90 (-_lambda_invoker_cdecl_@_lambda_8f38397fb510ec0288b294132d0aacc6_@@CAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?OnHeadUpdateEvent@SpatialRimDeviceCollection@@QEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x1800950F4 (-OnHeadUpdateEvent@SpatialRimDeviceCollection@@QEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@P.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialRimDeviceCollectionHeadEventHandler::OnHeadUpdateEvent(
        SpatialRimDeviceCollectionHeadEventHandler *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  struct Windows::Perception::IPerceptionTimestamp **v3; // rax
  struct Windows::Perception::IPerceptionTimestamp *v4; // rbx
  SpatialRimDeviceCollection *v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-68h] BYREF
  struct Windows::Perception::IPerceptionTimestamp *v8; // [rsp+28h] [rbp-60h] BYREF
  _OWORD v9[4]; // [rsp+30h] [rbp-58h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 2);
  v3 = (struct Windows::Perception::IPerceptionTimestamp **)((char *)this + 184);
  v4 = 0LL;
  if ( &v7 != (__int64 *)((char *)this + 184) )
  {
    v4 = *v3;
    *v3 = 0LL;
  }
  v7 = 0LL;
  v8 = v4;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v7);
  v9[0] = *(_OWORD *)((char *)this + 120);
  v9[1] = *(_OWORD *)((char *)this + 136);
  v9[2] = *(_OWORD *)((char *)this + 152);
  v9[3] = *(_OWORD *)((char *)this + 168);
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( v4 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v7 = (__int64)this + 32;
    v5 = (SpatialRimDeviceCollection *)*((_QWORD *)this + 3);
    if ( v5 )
      SpatialRimDeviceCollection::OnHeadUpdateEvent(v5, (const struct MPCMatrix4x4 *)v9, v4);
    if ( this != (SpatialRimDeviceCollectionHeadEventHandler *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v8);
  return 0LL;
}
