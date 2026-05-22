/*
 * XREFs of ?RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18011DB00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E60 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18011C170 (--$_Emplace_reallocate@V-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@-$vect.c)
 *     ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18011DD64 (-SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerNavigationManager::RegisterOverride(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationManagerStub *a2,
        struct BamoControllerNavigationOverrideProxy *a3)
{
  __int64 *v5; // rdi
  struct BamoControllerNavigationOverrideProxy *v6; // rbx
  struct BamoControllerNavigationOverrideProxy **v7; // rdx
  struct BamoControllerNavigationOverrideProxy *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = (__int64 *)((char *)this + 200);
  v6 = a3;
  v9 = a3;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v9);
  v7 = (struct BamoControllerNavigationOverrideProxy **)v5[1];
  if ( (struct BamoControllerNavigationOverrideProxy **)v5[2] == v7 )
  {
    std::vector<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>(
      v5,
      (__int64)v7,
      (__int64 *)&v9);
    v6 = v9;
  }
  else
  {
    *v7 = 0LL;
    if ( v7 != &v9 )
    {
      *v7 = v6;
      v6 = 0LL;
    }
    v5[1] += 8LL;
  }
  if ( v6 )
    (*(void (__fastcall **)(struct BamoControllerNavigationOverrideProxy *))(*(_QWORD *)v6 + 8LL))(v6);
  ControllerNavigationManager::SetCurrentStateWithOverride(this, a3);
  return 0LL;
}
