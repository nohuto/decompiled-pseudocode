/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@0@@Z @ 0x1800E8E68
 * Callers:
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x18005D2B8 (--$_Emplace_reallocate@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCach.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@0@@Z @ 0x18005D3B4 (--$_Uninitialized_move@PEAV-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCC.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x1800637AC (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?clear@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1800E8E3C (-clear@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 * Callees:
 *     ??1CCachedTarget@CCachedVisualImage@@QEAA@XZ @ 0x1800EA088 (--1CCachedTarget@CCachedVisualImage@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CCachedVisualImage::CCachedTarget>>>(
        CCachedVisualImage::CCachedTarget **a1,
        CCachedVisualImage::CCachedTarget **a2)
{
  CCachedVisualImage::CCachedTarget **v3; // rbx
  CCachedVisualImage::CCachedTarget *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        CCachedVisualImage::CCachedTarget::~CCachedTarget(*v3);
        operator delete(v4, 0x40uLL);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
}
