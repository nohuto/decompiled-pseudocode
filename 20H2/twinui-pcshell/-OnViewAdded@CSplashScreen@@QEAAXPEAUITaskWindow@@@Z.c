/*
 * XREFs of ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18003C818
 * Callers:
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x18003C898 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 * Callees:
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18001C8A0 (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18003BA10 (--$_Emplace_reallocate@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UITaskWindow@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSplashScreen::OnViewAdded(CSplashScreen *this, struct ITaskWindow *a2)
{
  struct ITaskWindow **v4; // rdx
  int (__fastcall *v5)(struct ITaskWindow *, GUID *, struct ITaskWindow **); // rbx
  __int64 v6; // rdx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  struct ITaskWindow *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = (struct ITaskWindow **)*((_QWORD *)this + 13);
  if ( *((struct ITaskWindow ***)this + 14) == v4 )
  {
    std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ITaskWindow>>(
      (_QWORD *)this + 12,
      v4,
      &v8);
  }
  else
  {
    *v4 = 0LL;
    if ( v4 != &v8 )
    {
      *v4 = a2;
      v8 = 0LL;
    }
    *((_QWORD *)this + 13) += 8LL;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  if ( *((_BYTE *)this + 128) && !*((_BYTE *)this + 129) )
  {
    v8 = 0LL;
    v5 = *(int (__fastcall **)(struct ITaskWindow *, GUID *, struct ITaskWindow **))(*(_QWORD *)a2 + 40LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    if ( v5(a2, &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67, &v8) >= 0 )
    {
      CSplashScreen::_get_ImageLocationInternal((__int64)this, (__int64)&v7);
      (*(void (__fastcall **)(struct ITaskWindow *, __int128 *))(*(_QWORD *)v8 + 48LL))(v8, &v7);
      LOBYTE(v6) = 1;
      (*(void (__fastcall **)(struct ITaskWindow *, __int64))(*(_QWORD *)v8 + 56LL))(v8, v6);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  }
}
