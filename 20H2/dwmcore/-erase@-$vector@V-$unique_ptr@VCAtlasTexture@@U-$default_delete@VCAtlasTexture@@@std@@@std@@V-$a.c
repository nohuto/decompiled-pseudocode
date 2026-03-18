/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18024958C
 * Callers:
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x1802493FC (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001CA10 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ??$_Move_unchecked@PEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@PEAV12@@std@@YAPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@PEAV10@00@Z @ 0x180248F40 (--$_Move_unchecked@PEAV-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x180249904 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 */

__int64 ***__fastcall std::vector<std::unique_ptr<CAtlasTexture>>::erase(__int64 a1, __int64 ***a2, __int64 **a3)
{
  __int64 v6; // rax
  __int64 *v7; // rdi
  void *v8; // rcx
  __int64 ***result; // rax

  std::_Move_unchecked<std::unique_ptr<CAtlasTexture> *,std::unique_ptr<CAtlasTexture> *>(
    a3 + 1,
    *(__int64 ***)(a1 + 8),
    a3);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(__int64 **)(v6 - 8);
  if ( v7 )
  {
    *v7 = (__int64)&CAtlasTexture::`vftable';
    CAtlasTexture::DestroyResources((CAtlasTexture *)v7);
    v8 = (void *)v7[2];
    if ( v8 )
      operator delete(v8);
    Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(v7 + 1);
    operator delete(v7);
    v6 = *(_QWORD *)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v6 - 8;
  result = a2;
  *a2 = a3;
  return result;
}
