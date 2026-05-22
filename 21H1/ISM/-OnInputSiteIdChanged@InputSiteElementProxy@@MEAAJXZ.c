/*
 * XREFs of ?OnInputSiteIdChanged@InputSiteElementProxy@@MEAAJXZ @ 0x1800F23D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x180001E84 (-RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180004B38 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?AssociateWithInputSite@InputSiteElementProxy@@QEAAXAEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x180012640 (-AssociateWithInputSite@InputSiteElementProxy@@QEAAXAEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@@Z.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_KK@Z @ 0x180044934 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputSiteElementProxy::OnInputSiteIdChanged(InputSiteElementProxy *this)
{
  InputSite *v2; // rcx
  struct InputSiteManager *InputSiteManager; // rbp
  int v4; // esi
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = (InputSite *)*((_QWORD *)this + 28);
  if ( v2 )
    InputSite::RemoveAllObjectsForElement(v2, this);
  InputSiteManager = ISMStatics::GetInputSiteManager();
  v4 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL))
                 + 32);
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 32LL))((char *)this + 8);
  v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 24LL))((char *)this + 8);
  InputSiteManager::GetOrCreateInputSiteFromId((__int64)InputSiteManager, &v9, v6, v5, v4);
  InputSiteElementProxy::AssociateWithInputSite(this, &v9);
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}
