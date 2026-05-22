/*
 * XREFs of ?GetDefaultStateStreamInfo@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAU_GUID@@PEAI@Z @ 0x1800DB6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::GetDefaultStateStreamInfo(
        Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject *this,
        struct _GUID *a2,
        unsigned int *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 1;
  v3 = (*(__int64 (__fastcall **)(_QWORD, void *, struct _GUID *, __int64, _QWORD))(**((_QWORD **)this + 15) + 72LL))(
         *((_QWORD *)this + 15),
         &SPATIALPROP_Eye_StateStream,
         a2,
         16LL,
         0LL);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11A,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
