/*
 * XREFs of ??1?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18001FA30
 * Callers:
 *     ??_EFindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18001F2D0 (--_EFindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 *     __lambda_5419d15aea592e4e2e8a2c756ed1e634_::operator()_::_1_::dtor$9 @ 0x1800468CD (__lambda_5419d15aea592e4e2e8a2c756ed1e634_--operator()_--_1_--dtor$9.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012300 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180012300.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800448E8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::~vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>(
        __int64 a1)
{
  volatile signed __int64 **v1; // rbx
  volatile signed __int64 **v3; // rbp
  volatile signed __int64 **v4; // rdi
  volatile signed __int64 *v5; // rcx
  const struct std::nothrow_t *v6; // rdx
  __int64 v7; // rcx

  v1 = *(volatile signed __int64 ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(volatile signed __int64 ***)(a1 + 8);
    v4 = *(volatile signed __int64 ***)a1;
    if ( v1 != v3 )
    {
      do
      {
        v5 = *v4;
        if ( *v4 )
        {
          *v4 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v5);
        }
        ++v4;
      }
      while ( v4 != v3 );
    }
    v6 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v6 >= 0x1000 )
    {
      v7 = (__int64)*(v1 - 1);
      v6 = (const struct std::nothrow_t *)((char *)v6 + 39);
      if ( (unsigned __int64)v1 - v7 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v7, v6);
        __debugbreak();
        JUMPOUT(0x18001FADALL);
      }
      v1 = (volatile signed __int64 **)*(v1 - 1);
    }
    operator delete(v1, v6);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
