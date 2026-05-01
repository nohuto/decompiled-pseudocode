/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_46f4ed7ab3f2eec376581f58c5e1fb12___ @ 0x180162418
 * Callers:
 *     ?EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHWND__@@@Z @ 0x180162F50 (-EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHW.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_57778d92195cd724889e1124e056dd9f_::operator() @ 0x180162C94 (_lambda_57778d92195cd724889e1124e056dd9f_--operator().c)
 *     ?IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z @ 0x18016381C (-IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z.c)
 */

char __fastcall CClassicWindowManager::ForEachWindow__lambda_46f4ed7ab3f2eec376581f58c5e1fb12___(
        __int64 a1,
        __int64 a2)
{
  char v4; // bl
  unsigned __int64 v5; // rsi
  unsigned __int64 i; // rdi
  struct IClassicWindow *v7; // rbx
  CClassicWindowManager *v8; // rcx
  struct IClassicWindow *v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = 1;
  v5 = *(_QWORD *)(a1 + 200);
  for ( i = 0LL; i < v5; ++i )
  {
    if ( !v4 )
      break;
    v10 = *(struct IClassicWindow **)(*(_QWORD *)(a1 + 192) + 8 * i);
    v7 = v10;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    v4 = CClassicWindowManager::IsWindowOwnedBy(v8, v7, **(struct IClassicWindow ***)(a2 + 8))
       ? lambda_57778d92195cd724889e1124e056dd9f_::operator()(*(_QWORD *)(a2 + 16), &v10)
       : 1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  }
  return v4;
}
