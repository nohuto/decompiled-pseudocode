/*
 * XREFs of ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x18029BB94
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x180295460 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 *     ??$ReleaseInterface@VCVisual@@@@YAXAEAPEAVCVisual@@@Z @ 0x18029A8AC (--$ReleaseInterface@VCVisual@@@@YAXAEAPEAVCVisual@@@Z.c)
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x18029C0F8 (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTexture::ProcessCreate(
        CHolographicInteropTexture *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE *a3)
{
  char v4; // al
  CHolographicManager *v5; // rcx
  struct CVisual *v6; // rdx
  struct CResourceTable *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  *((_DWORD *)this + 56) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 57) = *((_DWORD *)a3 + 4);
  *((_BYTE *)this + 240) = 1;
  *(_QWORD *)((char *)this + 268) = 1065353216LL;
  *(_QWORD *)((char *)this + 276) = 0LL;
  *((_DWORD *)this + 71) = 0;
  *((_QWORD *)this + 36) = 1065353216LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *(_QWORD *)((char *)this + 308) = 1065353216LL;
  *(_QWORD *)((char *)this + 316) = 0LL;
  *((_DWORD *)this + 81) = 0;
  *((_DWORD *)this + 82) = 1065353216;
  v4 = *((_BYTE *)this + 333) & 0xD7;
  *((_BYTE *)this + 332) = 85;
  *((_BYTE *)this + 333) = v4 | 0x17;
  v5 = *(CHolographicManager **)(*((_QWORD *)this + 2) + 264LL);
  *((_QWORD *)this + 11) = v5;
  if ( v5 )
  {
    CHolographicManager::AddInteropTexture(v5, this);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 656LL) + 120LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
      0LL,
      0x8000LL);
  }
  v6 = (struct CVisual *)*((_QWORD *)this + 13);
  if ( v6 )
  {
    v8 = (struct CResourceTable *)*((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = 0LL;
    CHolographicInteropTexture::SetRootVisual(this, v6);
    ReleaseInterface<CVisual>((__int64 *)&v8);
  }
  return 0LL;
}
