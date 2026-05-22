/*
 * XREFs of ?OnInputSourceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAVSpatialInteractionObjectDevice@234@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800D7CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJV?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@@Z @ 0x1800D199C (-QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@.c)
 *     std::function_void___cdecl(Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks__)_::function_void___cdecl(Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks__)___lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_ @ 0x1800D43E0 (std--function_void___cdecl(Windows--Internal--SpatialInteractions--ISpatialInteractionSourceColl.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnInputSourceRemoved(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  RTL_SRWLOCK *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  int v13[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14[3]; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v15[8]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v17; // [rsp+90h] [rbp+8h] BYREF

  v17 = a2;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v17);
  v6 = (RTL_SRWLOCK *)(a1 - 32);
  v14[0] = a2;
  *(_QWORD *)v13 = v6;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v14);
  v7 = a3[1];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = a3[1];
  }
  v8 = *a3;
  v14[2] = v7;
  v14[1] = v8;
  v9 = std::function_void___cdecl_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks____::function_void___cdecl_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks______lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_(
         v15,
         v13);
  v10 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueInputThreadCallback(
          v6,
          (__int64)v9);
  v11 = v10;
  if ( v10 >= 0 )
    v11 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E9,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)(unsigned int)v10);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  return v11;
}
