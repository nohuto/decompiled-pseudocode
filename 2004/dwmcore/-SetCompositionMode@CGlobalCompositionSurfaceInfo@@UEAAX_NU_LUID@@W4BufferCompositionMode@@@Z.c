/*
 * XREFs of ?SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NU_LUID@@W4BufferCompositionMode@@@Z @ 0x18007AEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180020EB8 (-AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18007AFB4 (-GetCurrentFrameId@@YA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?SetIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N0III@Z @ 0x1801FA0B0 (-SetIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N0III@Z.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::SetCompositionMode(__int64 a1, char a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  unsigned __int64 CurrentFrameId; // rax
  char v9; // r9
  char v10; // dl
  bool v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int8 (__fastcall *v13)(__int64, __int64, __int64); // r9
  __int64 v14; // r10
  __int64 v15; // r8
  CComposition *v16; // rcx

  v4 = a1 + 112;
  if ( a4 )
  {
    if ( *(_BYTE *)(a1 + 260) && *(_BYTE *)(a1 + 261) && a4 == 1 && GetCurrentFrameId() - *(_QWORD *)(a1 + 248) >= 0xF )
    {
      v11 = 0;
      goto LABEL_11;
    }
  }
  else
  {
    CurrentFrameId = GetCurrentFrameId();
    v10 = *(_BYTE *)(v4 + 148);
    *(_QWORD *)(v4 + 136) = CurrentFrameId;
    if ( v10 && *(_BYTE *)(v4 + 149) == v9 && *(int *)(v4 + 144) >= 2 )
    {
      v11 = 1;
LABEL_11:
      CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlip(
        (CGlobalCompositionSurfaceInfo::CBindInfo *)v4,
        v10,
        v11,
        *(_DWORD *)(v4 + 156),
        *(_DWORD *)(v4 + 160),
        *(_DWORD *)(v4 + 164));
    }
  }
  if ( a2 && *(_QWORD *)(v4 + 16) )
  {
    v12 = GetCurrentFrameId();
    v15 = 0LL;
    if ( *(_QWORD *)(v4 + 136) != v12 )
      v15 = a4;
    if ( v13(v14, a3, v15) )
      CComposition::AddCompSurfInfoUpdate(v16, *(struct CCompositionSurfaceInfo **)v4);
  }
}
