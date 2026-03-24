/*
 * XREFs of ??$_Move_unchecked@PEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@PEAV12@@std@@YAPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@PEAV10@00@Z @ 0x18024BBF0
 * Callers:
 *     ?erase@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18024C23C (-erase@-$vector@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@V-$a.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001B590 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x18024C5B4 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 */

__int64 **__fastcall std::_Move_unchecked<std::unique_ptr<CAtlasTexture> *,std::unique_ptr<CAtlasTexture> *>(
        __int64 **a1,
        __int64 **a2,
        __int64 **a3)
{
  __int64 **i; // rbx
  __int64 *v6; // rax
  __int64 *v7; // rsi
  void *v8; // rcx

  for ( i = a1; i != a2; ++i )
  {
    if ( a3 != i )
    {
      v6 = *i;
      *i = 0LL;
      v7 = *a3;
      *a3 = v6;
      if ( v7 )
      {
        *v7 = (__int64)&CAtlasTexture::`vftable';
        CAtlasTexture::DestroyResources((CAtlasTexture *)v7);
        v8 = (void *)v7[2];
        if ( v8 )
          operator delete(v8);
        Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(v7 + 1);
        operator delete(v7);
      }
    }
    ++a3;
  }
  return a3;
}
