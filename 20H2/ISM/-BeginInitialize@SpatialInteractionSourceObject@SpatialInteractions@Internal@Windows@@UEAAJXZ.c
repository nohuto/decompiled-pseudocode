/*
 * XREFs of ?BeginInitialize@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D6AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::BeginInitialize(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *this)
{
  int v2; // ebx
  __int64 result; // rax
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *))(*(_QWORD *)this + 224LL))(this);
  if ( v2 < 0 )
  {
    result = 2147942450LL;
    if ( v2 == -2147024846 )
      return result;
    v4 = 46LL;
    goto LABEL_4;
  }
  v2 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *))(*(_QWORD *)this + 232LL))(this);
  if ( v2 >= 0 )
    return 0LL;
  result = 2147942450LL;
  if ( v2 != -2147024846 )
  {
    v4 = 47LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  return result;
}
