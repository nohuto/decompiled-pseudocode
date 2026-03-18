/*
 * XREFs of ??1CLayerVisual@@UEAA@XZ @ 0x1800F4F14
 * Callers:
 *     ??_GCLayerVisual@@UEAAPEAXI@Z @ 0x1800F4ED0 (--_GCLayerVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x18022355C (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 */

void __fastcall CLayerVisual::~CLayerVisual(CLayerVisual *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 92) == 0LL;
  *(_QWORD *)this = &CLayerVisual::`vftable';
  if ( !v1 )
    CLayerVisual::ClearTreeEffect(this);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 91));
  *((_QWORD *)this + 91) = 0LL;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 93);
  CVisual::~CVisual(this);
}
