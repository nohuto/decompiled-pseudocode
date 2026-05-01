/*
 * XREFs of ?GetNextMostRecentlyActivatedGlom@CActivationBasedAppAndGlomCollection@@QEAAJPEAUIImmersiveApplicationInternal@@PEAPEAU2@@Z @ 0x180127A60
 * Callers:
 *     ?GetNextGlomForApp@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAPEAU2@@Z @ 0x180127A10 (-GetNextGlomForApp@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActivationBasedAppAndGlomCollection::GetNextMostRecentlyActivatedGlom(
        CActivationBasedAppAndGlomCollection *this,
        struct IImmersiveApplicationInternal *a2,
        struct IImmersiveApplicationInternal **a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  unsigned int v8; // edi
  __int64 *v9; // rbx

  *a3 = 0LL;
  v3 = 0LL;
  v4 = *((_QWORD *)this + 2);
  v8 = -2147023728;
  if ( v4 )
  {
    while ( !(*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *, _QWORD))(*(_QWORD *)a2 + 168LL))(
               a2,
               *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v3)) )
    {
      if ( ++v3 >= v4 )
        return v8;
    }
    v9 = (__int64 *)(*((_QWORD *)this + 1) + 8 * v3);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
    v8 = 0;
    *a3 = (struct IImmersiveApplicationInternal *)*v9;
  }
  return v8;
}
