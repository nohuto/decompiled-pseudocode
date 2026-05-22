/*
 * XREFs of ?RemoveAllObjects@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEAAJXZ @ 0x1800D7FEC
 * Callers:
 *     ?OnDeviceRemoved@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D7A70 (-OnDeviceRemoved@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 *     ?StopListeningToSpatialObjects@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800E1DF0 (-StopListeningToSpatialObjects@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D457C (--$As@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D516C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBU_GUID@@V-$shared_ptr@VSpatialInteracti.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::RemoveAllObjects(
        Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // r14
  _QWORD *i; // rdi
  _BYTE *v9; // rcx
  int v10; // eax
  void *v11; // rdi
  unsigned __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  char *v16; // [rsp+58h] [rbp+10h]

  v15 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal>(
         (_QWORD *)this + 9,
         &v15);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = (unsigned int)v2;
    v5 = 270LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)v4);
    goto LABEL_17;
  }
  if ( !v15 )
  {
    v3 = -2147418113;
    v4 = 2147549183LL;
    v5 = 271LL;
    goto LABEL_5;
  }
  AcquireSRWLockExclusive((PSRWLOCK)this + 24);
  v16 = (char *)this + 192;
  v7 = (_QWORD *)*((_QWORD *)this + 17);
  for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
  {
    v9 = (_BYTE *)i[4];
    v9[104] = 1;
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v9 + 120LL))(v9);
    v10 = (*(__int64 (__fastcall **)(__int64, Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice *, _QWORD *))(*(_QWORD *)v15 + 56LL))(
            v15,
            this,
            i + 4);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        277LL,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
        (const char *)(unsigned int)v10);
  }
  std::_List_node<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>,void *>>>(
    v6,
    *((_QWORD ***)this + 17));
  **((_QWORD **)this + 17) = *((_QWORD *)this + 17);
  *(_QWORD *)(*((_QWORD *)this + 17) + 8LL) = *((_QWORD *)this + 17);
  *((_QWORD *)this + 18) = 0LL;
  v11 = (void *)*((_QWORD *)this + 19);
  v12 = (unsigned __int64)(*((_QWORD *)this + 20) - (_QWORD)v11 + 7LL) >> 3;
  if ( (unsigned __int64)v11 > *((_QWORD *)this + 20) )
    v12 = 0LL;
  if ( v12 )
    memset64(v11, *((_QWORD *)this + 17), v12);
  v3 = 0;
  if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice *)-192LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 24);
LABEL_17:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v15);
  return v3;
}
