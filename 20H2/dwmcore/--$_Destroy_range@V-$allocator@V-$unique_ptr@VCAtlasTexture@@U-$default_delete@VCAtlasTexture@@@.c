/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@0@@Z @ 0x18023A6C4
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x180037080 (--1CD3DDevice@@MEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@PEAV12@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@0@@Z @ 0x180248FDC (--$_Uninitialized_move@PEAV-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@2@_K1@Z @ 0x180249518 (-_Change_array@-$vector@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@s.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001CA10 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x180249904 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CAtlasTexture>>>(
        CAtlasTexture **a1,
        CAtlasTexture **a2)
{
  CAtlasTexture **v3; // rbx
  CAtlasTexture *v4; // rdi
  CAtlasTexture *v5; // rcx
  void *v6; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        v5 = *v3;
        *(_QWORD *)v4 = &CAtlasTexture::`vftable';
        CAtlasTexture::DestroyResources(v5);
        v6 = (void *)*((_QWORD *)v4 + 2);
        if ( v6 )
          operator delete(v6);
        Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((__int64 *)v4 + 1);
        operator delete(v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
}
