/*
 * XREFs of ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800D407C
 * Callers:
 *     ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x18002A978 (-DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x18002CD1C (-DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180077330 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?MarkHardwareProtectedResourcesInvalid@CD3DResourceManager@@QEAA_NXZ @ 0x18024CB40 (-MarkHardwareProtectedResourcesInvalid@CD3DResourceManager@@QEAA_NXZ.c)
 *     ?UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x18024CBD0 (-UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 * Callees:
 *     ?Invalidate@CD3DResource@@IEAAXXZ @ 0x1800D4124 (-Invalidate@CD3DResource@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x18023CFD8 (-RemoveHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 */

void __fastcall CD3DResourceManager::DestroyResource(CD3DResourceManager *this, struct CD3DResource *a2)
{
  struct CD3DResource **v4; // rdx
  struct CD3DResource **v5; // rcx

  (**(void (__fastcall ***)(struct CD3DResource *))a2)(a2);
  if ( (**((int (__fastcall ***)(char *))a2 + 3))((char *)a2 + 24) >= 0 )
    CD3DResource::Invalidate(a2);
  if ( *((_BYTE *)a2 + 84) )
  {
    if ( *((_BYTE *)a2 + 85) )
      CD2DContext::RemoveHwProtectedResource((CD2DContext *)(*((_QWORD *)this + 10) + 16LL));
    --*((_DWORD *)this + 18);
  }
  (*(void (__fastcall **)(struct CD3DResource *))(*(_QWORD *)a2 + 24LL))(a2);
  *((_QWORD *)a2 + 2) = 0LL;
  v4 = (struct CD3DResource **)*((_QWORD *)a2 + 5);
  if ( v4[1] != (struct CD3DResource *)((char *)a2 + 40)
    || (v5 = (struct CD3DResource **)*((_QWORD *)a2 + 6), *v5 != (struct CD3DResource *)((char *)a2 + 40)) )
  {
    __fastfail(3u);
  }
  *v5 = (struct CD3DResource *)v4;
  v4[1] = (struct CD3DResource *)v5;
  *((_DWORD *)this + 12) -= *((_DWORD *)a2 + 20);
  (*(void (__fastcall **)(struct CD3DResource *))(*(_QWORD *)a2 + 8LL))(a2);
}
