/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___ @ 0x18004C694
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x18004AFD0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x18004B5E0 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x18004C5A4 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 * Callees:
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x18004ABAC (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___(
        __int64 a1,
        __int64 **a2)
{
  unsigned __int64 v4; // r14
  unsigned __int64 i; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 *v8; // rcx
  CClassicWindowManager *v9; // r12
  void (__fastcall *v11)(__int64, __int64); // rdi
  HWND v12; // rax
  __int64 *ClassicWindowOwner; // rax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 200);
  for ( i = 0LL; i < v4; ++i )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * i);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * i));
    v7 = **a2;
    if ( *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 96LL))(v6) == v7 )
    {
      v8 = a2[1];
      if ( !*(_QWORD *)*v8 || v6 != *(_QWORD *)*v8 )
      {
        v9 = (CClassicWindowManager *)v8[1];
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 160LL))(v6) )
        {
          v11 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 104LL);
          v12 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
          ClassicWindowOwner = CClassicWindowManager::GetClassicWindowOwner(v9, &v14, v12);
          v11(v6, *ClassicWindowOwner);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        }
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return 1;
}
