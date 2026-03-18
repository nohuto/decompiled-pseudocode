/*
 * XREFs of ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x18024A894
 * Callers:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@0@@Z @ 0x18023B654 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@.c)
 *     ??$_Move_unchecked@PEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@PEAV12@@std@@YAPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@PEAV10@00@Z @ 0x180249ED0 (--$_Move_unchecked@PEAV-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std.c)
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x180249FAC (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x18024A1E0 (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x18024A38C (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 *     ?erase@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18024A51C (-erase@-$vector@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@V-$a.c)
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x18024A78C (-Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z.c)
 *     ?NotifyInvalidResource@CAtlasTexture@@UEAAXPEBVIDeviceResource@@@Z @ 0x18024ABF0 (-NotifyInvalidResource@CAtlasTexture@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001CC20 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?NotifyOwner@CAtlasEntry@@AEBAXPEBVCD3DDevice@@@Z @ 0x180249CC8 (-NotifyOwner@CAtlasEntry@@AEBAXPEBVCD3DDevice@@@Z.c)
 *     ?GetDevice@CAtlasTexture@@QEBAPEAVCD3DDevice@@XZ @ 0x18024A9C8 (-GetDevice@CAtlasTexture@@QEBAPEAVCD3DDevice@@XZ.c)
 */

void __fastcall CAtlasTexture::DestroyResources(CAtlasTexture *this)
{
  __int64 *v1; // r14
  int v2; // edx
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rdi
  const struct CD3DDevice *Device; // rax
  __int64 v10; // rcx
  void *v11; // rcx

  v1 = (__int64 *)((char *)this + 8);
  v2 = *((_DWORD *)this + 7) + *((_DWORD *)this + 8);
  v4 = *((_DWORD *)this + 6);
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 8) = 0;
  v5 = *((_QWORD *)this + 1);
  if ( v5 )
  {
    if ( v2 != v4 && v4 )
    {
      v6 = 0LL;
      v7 = v4;
      do
      {
        v8 = *(_QWORD *)(v6 + *((_QWORD *)this + 2));
        if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          Device = CAtlasTexture::GetDevice(*(CAtlasTexture **)v8);
          *(_QWORD *)v8 = 0LL;
          *(_DWORD *)(v8 + 16) = -1;
          CAtlasEntry::NotifyOwner((CAtlasEntry *)v8, Device);
        }
        v6 += 8LL;
        --v7;
      }
      while ( v7 );
      v5 = *v1;
    }
    v10 = *(int *)(*(_QWORD *)(v5 + 8) + 8LL) + 8LL + v5;
    (*(void (__fastcall **)(__int64, CAtlasTexture *))(*(_QWORD *)v10 + 48LL))(v10, this);
    Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(v1);
  }
  v11 = (void *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v11 )
    operator delete(v11);
}
