/*
 * XREFs of ?_FindExistingItem@SwitchItemCollection@@AEAA?AV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x180392188
 * Callers:
 *     ?GetItemForView@SwitchItemCollection@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x180391410 (-GetItemForView@SwitchItemCollection@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?UpdateTabSelection@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180391DBC (-UpdateTabSelection@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?_RemoveViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x18039228C (-_RemoveViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180392308 (-_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?_UpdateThumbnailWindow@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1803923B4 (-_UpdateThumbnailWindow@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall SwitchItemCollection::_FindExistingItem(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // esi
  __int64 *v6; // rbx
  __int64 *v7; // r15
  bool v8; // r14
  __int64 v9; // rbx
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF
  __int64 v12; // [rsp+58h] [rbp+38h] BYREF

  v3 = 0;
  LODWORD(v11) = 0;
  *a2 = 0LL;
  v6 = *(__int64 **)(a1 + 24);
  v7 = &v6[*(_QWORD *)(a1 + 32)];
  while ( v6 != v7 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v8 = 0;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))*v6)(
           *v6,
           &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb,
           &v11) >= 0 )
    {
      v3 |= 1u;
      if ( *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v12) == a3 )
        v8 = 1;
    }
    if ( (v3 & 1) != 0 )
    {
      v3 &= ~1u;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    }
    if ( v8 )
    {
      v9 = *v6;
      if ( *a2 != v9 )
      {
        v12 = v9;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
        v12 = *a2;
        *a2 = v9;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      return a2;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    ++v6;
  }
  return a2;
}
