/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000D0E8
 * Callers:
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000A934 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Uni.c)
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000B2B0 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x18000D9F8 (-_Xlength@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011EE0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGame_ea_180011EE0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012300 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180012300.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180044AD8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180044B4C (--2@YAPEAX_K@Z.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> const &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  size_t v12; // rdx
  size_t v13; // rcx
  void *v14; // rax
  const struct std::nothrow_t *v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // rdi
  unsigned __int64 v18; // r15
  __int64 *v19; // r13
  __int64 v20; // rcx
  __int64 *v21; // r8
  __int64 *v22; // rcx
  __int64 *v23; // rdx
  char *v24; // rdx
  __int64 *v25; // rbx
  __int64 *v26; // r15
  __int64 v27; // rcx
  __int64 v29; // rcx
  __int64 v30; // [rsp+20h] [rbp-48h]
  __int64 v31; // [rsp+28h] [rbp-40h]
  char *v32; // [rsp+78h] [rbp+10h]
  unsigned __int64 v33; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = (char *)a2 - (char *)*a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
LABEL_48:
    std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Xlength();
  v8 = v7 + 1;
  v30 = v7 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v7 + 1;
  }
  v33 = v11;
  v31 = v11;
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  if ( v12 < 0x1000 )
  {
    if ( v12 )
      v17 = (__int64 *)operator new(v12);
    else
      v17 = 0LL;
  }
  else
  {
    v13 = v12 + 39;
    if ( v12 + 39 < v12 )
      v13 = -1LL;
    v14 = operator new(v13);
    if ( !v14 )
    {
LABEL_47:
      _o__invalid_parameter_noinfo_noreturn(v16, v15);
      __debugbreak();
      goto LABEL_48;
    }
    v17 = (__int64 *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v17 - 1) = (__int64)v14;
  }
  v18 = v6 & 0xFFFFFFFFFFFFFFF8uLL;
  v19 = (__int64 *)((char *)v17 + v18);
  try
  {
    v20 = *a3;
    *v19 = *a3;
    if ( v20 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::AddRef(v20);
    v32 = (char *)v17 + v18;
    v21 = a1[1];
    v22 = *a1;
    v23 = v17;
    if ( v4 == v21 )
    {
      while ( v22 != v21 )
      {
        *v23 = 0LL;
        if ( v23 != v22 )
        {
          *v23 = *v22;
          *v22 = 0LL;
        }
        ++v23;
        ++v22;
      }
    }
    else
    {
      if ( v22 != v4 )
      {
        do
        {
          *v23 = 0LL;
          if ( v23 != v22 )
          {
            *v23 = *v22;
            *v22 = 0LL;
          }
          ++v23;
          ++v22;
        }
        while ( v22 != v4 );
        v21 = a1[1];
      }
      v32 = (char *)v17;
      if ( v4 != v21 )
      {
        v24 = (char *)v17 + v18 - (_QWORD)v4 + 8;
        do
        {
          v22 = (__int64 *)((char *)v4 + (_QWORD)v24);
          *(__int64 *)((char *)v4 + (_QWORD)v24) = 0LL;
          if ( (__int64 *)((char *)v4 + (_QWORD)v24) != v4 )
          {
            *v22 = *v4;
            *v4 = 0LL;
          }
          ++v4;
        }
        while ( v4 != v21 );
      }
    }
  }
  catch ( ... )
  {
    std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Destroy(
      v22,
      v32,
      (char *)v17 + v18 + 8);
    std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::deallocate(
      v29,
      v17,
      v33);
    throw;
  }
  v25 = *a1;
  if ( *a1 )
  {
    v26 = a1[1];
    if ( v25 != v26 )
    {
      do
      {
        v27 = *v25;
        if ( *v25 )
        {
          *v25 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v27);
        }
        ++v25;
      }
      while ( v25 != v26 );
      v25 = *a1;
    }
    v15 = (const struct std::nothrow_t *)(((char *)a1[2] - (char *)v25) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v15 < 0x1000 )
      goto LABEL_40;
    v15 = (const struct std::nothrow_t *)((char *)v15 + 39);
    v16 = *(v25 - 1);
    if ( (unsigned __int64)v25 - v16 - 8 <= 0x1F )
    {
      v25 = (__int64 *)*(v25 - 1);
LABEL_40:
      operator delete(v25, v15);
      goto LABEL_41;
    }
    goto LABEL_47;
  }
LABEL_41:
  *a1 = v17;
  a1[1] = &v17[v30];
  a1[2] = &v17[v31];
  return v19;
}
