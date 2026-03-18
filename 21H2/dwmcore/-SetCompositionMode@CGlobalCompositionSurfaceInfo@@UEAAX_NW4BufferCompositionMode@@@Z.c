/*
 * XREFs of ?SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@@Z @ 0x18008FD20
 * Callers:
 *     <none>
 * Callees:
 *     ?AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180014EEC (-AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x180017C98 (-SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?RecentlyComposed@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBA_NXZ @ 0x180104C10 (-RecentlyComposed@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CGlobalCompositionSurfaceInfo::SetCompositionMode(__int64 a1, char a2, unsigned int a3)
{
  __int64 v3; // rbx
  char v6; // r8
  char result; // al
  __int64 v8; // rdx
  CGlobalCompositionSurfaceInfo::CBindInfo *v9; // rcx
  __int64 v10; // r9
  char v11; // di
  __int64 v12; // rcx
  CComposition *v13; // rcx

  v3 = a1 + 88;
  if ( !a3 )
  {
    *(_QWORD *)(a1 + 264) = GetCurrentFrameId();
    if ( *(_BYTE *)(v3 + 188) != v6 && *(_BYTE *)(v3 + 189) == v6 && *(int *)(v3 + 184) >= 2 )
      CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipNotify(
        (CGlobalCompositionSurfaceInfo::CBindInfo *)v3,
        1u);
  }
  result = CGlobalCompositionSurfaceInfo::CBindInfo::RecentlyComposed((CGlobalCompositionSurfaceInfo::CBindInfo *)v3);
  v11 = result;
  if ( *(_BYTE *)(v3 + 188) && *(_BYTE *)(v3 + 189) && !result )
    result = CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipNotify(v9, 0);
  v12 = *(_QWORD *)(v3 + 16);
  if ( v12 )
  {
    LOBYTE(v10) = v11;
    LOBYTE(v8) = a2;
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v12 + 32LL))(v12, v8, a3, v10);
    if ( result )
      return CComposition::AddCompSurfInfoUpdate(v13, *(struct CCompositionSurfaceInfo **)v3);
  }
  return result;
}
