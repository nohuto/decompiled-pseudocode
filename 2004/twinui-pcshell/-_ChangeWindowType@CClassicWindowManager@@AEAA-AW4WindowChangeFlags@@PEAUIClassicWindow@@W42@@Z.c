/*
 * XREFs of ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x18004CFD4
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x18004BA00 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?HandleTaskListDeletedChange@CClassicWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x18004C140 (-HandleTaskListDeletedChange@CClassicWindowManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180164154 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 * Callees:
 *     CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___ @ 0x18004D0C4 (CClassicWindowManager--ForEachWindow__lambda_9464cc021c09e3331999e98539241978___.c)
 *     ?AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x18004D1A0 (-AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     CClassicWindowManager::ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___ @ 0x180162350 (CClassicWindowManager--ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___.c)
 *     ?RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18016393C (-RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z.c)
 *     ?RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x1801639EC (-RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180163C20 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 */

__int64 __fastcall CClassicWindowManager::_ChangeWindowType(
        CClassicWindowManager *a1,
        struct IClassicWindow *a2,
        unsigned int a3)
{
  __int64 v6; // rbx
  unsigned int v7; // eax
  CClassicWindowManager *v8; // rcx
  unsigned int v9; // edi
  int v10; // r15d
  struct IClassicWindow ***v12; // rdx
  _QWORD v13[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-20h] BYREF
  struct IClassicWindow **v15; // [rsp+40h] [rbp-10h] BYREF
  CClassicWindowManager *v16; // [rsp+48h] [rbp-8h]
  __int64 v17; // [rsp+88h] [rbp+38h] BYREF
  struct IClassicWindow *v18; // [rsp+98h] [rbp+48h] BYREF

  v6 = *(_QWORD *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL))(a2);
  v17 = v6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
  v7 = (*(__int64 (__fastcall **)(struct IClassicWindow *, _QWORD))(*(_QWORD *)a2 + 112LL))(a2, a3);
  v9 = v7;
  v10 = v7 & 0x80;
  if ( (v7 & 0x80) != 0 )
  {
    CClassicWindowManager::AddApplicationView(v8, a2);
  }
  else if ( (v7 & 0x100) != 0 )
  {
    CClassicWindowManager::RemoveApplicationView(v8, a2, 0LL);
  }
  if ( (v9 & 0x11) != 0 )
    CClassicWindowManager::RecomputeOwner(a1, a2);
  if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 120LL))(a2)
    && (v9 & 0xC) != 0
    && !v10 )
  {
    RaiseApplicationViewChangeNotification(a2, 16LL);
  }
  if ( (v9 & 0x800) != 0 )
  {
    if ( !v10 )
      RaiseApplicationViewChangeNotification(a2, 10LL);
    v14[0] = &v18;
    v14[1] = a1;
    v13[0] = v6;
    v15 = (struct IClassicWindow **)v13;
    v16 = (CClassicWindowManager *)v14;
    v12 = &v15;
    goto LABEL_23;
  }
  if ( (v9 & 0x1000) != 0 )
  {
    if ( (v9 & 0x100) == 0 )
      RaiseApplicationViewChangeNotification(a2, 11LL);
    v18 = a2;
    v13[0] = a2;
    v14[0] = &v18;
    v15 = (struct IClassicWindow **)v13;
    v16 = (CClassicWindowManager *)v14;
    CClassicWindowManager::ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___(a1, &v15);
  }
  else if ( !(*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 128LL))(a2)
         && *(_QWORD *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL))(a2) != v6 )
  {
    v15 = &v18;
    v16 = a1;
    v14[0] = v6;
    v13[0] = v14;
    v13[1] = &v15;
    v12 = (struct IClassicWindow ***)v13;
LABEL_23:
    v18 = a2;
    CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___(a1, v12);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return v9;
}
