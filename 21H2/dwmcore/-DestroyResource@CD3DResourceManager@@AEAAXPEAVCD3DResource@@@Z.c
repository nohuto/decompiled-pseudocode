/*
 * XREFs of ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800EC9E8
 * Callers:
 *     ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x180021980 (-DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x180023EE4 (-DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x18007F3E4 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 *     ?MarkHardwareProtectedResourcesInvalid@CD3DResourceManager@@QEAA_NXZ @ 0x18028DE28 (-MarkHardwareProtectedResourcesInvalid@CD3DResourceManager@@QEAA_NXZ.c)
 *     ?UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x18028DEC0 (-UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 * Callees:
 *     ?Invalidate@CD3DResource@@IEAAXXZ @ 0x1800ECAD0 (-Invalidate@CD3DResource@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x1802792E8 (-RemoveHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 */

void __fastcall CD3DResourceManager::DestroyResource(CD3DResourceManager *this, struct CD3DResource *a2)
{
  char *v4; // rcx
  struct CD3DResource **v5; // rdx
  struct CD3DResource **v6; // rcx
  char *v7; // rcx

  v4 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( (**(int (__fastcall ***)(struct CD3DResource *))a2)(a2) >= 0 )
    CD3DResource::Invalidate(a2);
  if ( *((_BYTE *)a2 + 68) )
  {
    if ( *((_BYTE *)a2 + 69) )
      CD2DContext::RemoveHwProtectedResource((CD2DContext *)(*((_QWORD *)this + 10) + 16LL));
    --*((_DWORD *)this + 18);
  }
  (*(void (__fastcall **)(struct CD3DResource *))(*(_QWORD *)a2 + 80LL))(a2);
  *((_QWORD *)a2 + 3) = 0LL;
  v5 = (struct CD3DResource **)*((_QWORD *)a2 + 4);
  if ( v5[1] != (struct CD3DResource *)((char *)a2 + 32)
    || (v6 = (struct CD3DResource **)*((_QWORD *)a2 + 5), *v6 != (struct CD3DResource *)((char *)a2 + 32)) )
  {
    __fastfail(3u);
  }
  *v6 = (struct CD3DResource *)v5;
  v5[1] = (struct CD3DResource *)v6;
  *((_DWORD *)this + 12) -= *((_DWORD *)a2 + 16);
  v7 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))(v7);
}
