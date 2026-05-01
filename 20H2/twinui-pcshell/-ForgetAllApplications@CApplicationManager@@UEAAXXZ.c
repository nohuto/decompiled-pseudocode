/*
 * XREFs of ?ForgetAllApplications@CApplicationManager@@UEAAXXZ @ 0x18014A200
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1801554B0 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::ForgetAllApplications(CApplicationManager *this)
{
  __int64 i; // rsi
  __int64 v3; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  for ( i = *((_QWORD *)this + 50); i; --i )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 49) + 8 * i - 8);
    v3 = v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v4);
    CApplicationManager::_ForgetApplicationNoLock((char *)this - 240, v3, 2LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  }
}
