/*
 * XREFs of ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x180033DFC
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18005BFE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?ProcessSnapshot@CCachedVisualImage@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE_SNAPSHOT@@@Z @ 0x180171874 (-ProcessSnapshot@CCachedVisualImage@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE_SN.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x1800343F0 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180046F8C (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x1800472E0 (-RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x18005ACD8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@MEAAXXZ @ 0x180093B80 (-UnRegisterNotifiers@CCachedVisualImage@@MEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?GetDisplayId@CCachedTarget@CCachedVisualImage@@QEBA?AVDisplayId@@XZ @ 0x1801AD04C (-GetDisplayId@CCachedTarget@CCachedVisualImage@@QEBA-AVDisplayId@@XZ.c)
 *     ?IsHardwareProtected@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x1801AD098 (-IsHardwareProtected@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801AD4F4 (-erase@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 */

__int64 __fastcall CCachedVisualImage::Snapshot(CCachedVisualImage::CCachedTarget ***this)
{
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 v3; // rax
  struct IRenderTargetBitmap *v4; // rdi
  char *v5; // rcx
  struct D2D_SIZE_U *v6; // rax
  struct D2D_SIZE_U v7; // rdx
  CCachedVisualImage::CCachedTarget **v8; // rbx
  CCachedVisualImage::CCachedTarget *v9; // r14
  CCachedVisualImage::CCachedTarget **v10; // rax
  _DWORD *DisplayId; // rax
  __int128 v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+30h] [rbp-20h]
  char v15[24]; // [rsp+38h] [rbp-18h] BYREF
  char v16; // [rsp+88h] [rbp+38h] BYREF
  struct IRenderTargetBitmap *v17; // [rsp+90h] [rbp+40h] BYREF
  char v18; // [rsp+98h] [rbp+48h] BYREF

  CDisplayManager::GetPrimaryAdapterLuid((CDisplayManager *)this);
  LODWORD(v14) = 0;
  *((_QWORD *)&v13 + 1) = DisplayId::None;
  BYTE4(v14) = 0;
  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*((CRenderTargetManager **)g_pComposition + 11));
  if ( PrimaryMonitorTarget )
  {
    v3 = (*(__int64 (__fastcall **)(struct IMonitorTarget *, char *))(*(_QWORD *)PrimaryMonitorTarget + 80LL))(
           PrimaryMonitorTarget,
           v15);
    v13 = *(_OWORD *)v3;
    v14 = *(_QWORD *)(v3 + 16);
  }
  v17 = 0LL;
  if ( (int)CCachedVisualImage::EnsureRenderTargetBitmap(
              (CCachedVisualImage *)this,
              (const struct RenderTargetInfo *)&v13,
              &v17) < 0 )
  {
    *((_BYTE *)this + 1800) = 1;
  }
  else
  {
    v4 = v17;
    v5 = (char *)v17 + *(int *)(*((_QWORD *)v17 + 1) + 16LL) + 8;
    v6 = (struct D2D_SIZE_U *)(**(__int64 (__fastcall ***)(char *, char *))v5)(v5, &v16);
    v7 = *v6;
    this[224] = (CCachedVisualImage::CCachedTarget **)*v6;
    CCachedVisualImage::RemoveInvalidTargets((CCachedVisualImage *)this, v7);
    v8 = this[23];
    while ( v8 != this[24] )
    {
      v9 = *v8;
      if ( *((struct IRenderTargetBitmap **)*v8 + 1) != v4
        && (*((_BYTE *)v9 + 36)
         || ((DisplayId = (_DWORD *)CCachedVisualImage::CCachedTarget::GetDisplayId(*v8, &v16),
              *DisplayId == DisplayId::None)
          || *DisplayId == DisplayId::All)
         && !CCachedVisualImage::CCachedTarget::IsHardwareProtected(v9)) )
      {
        v8 = *(CCachedVisualImage::CCachedTarget ***)std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase(
                                                       this + 23,
                                                       &v18,
                                                       v8);
      }
      else
      {
        ++v8;
      }
    }
    CCachedVisualImage::UnRegisterNotifiers((CCachedVisualImage *)this);
    v10 = this[2];
    *((_BYTE *)this + 1801) = 1;
    *((_BYTE *)v10 + 288) = 1;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v17);
  return 0LL;
}
