/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180031450
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F7C30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800F7C30.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F7C40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800F7C40.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F7C50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800F7C50.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // r8
  _DWORD *v12; // r9
  __int64 v13; // r10
  _QWORD *v14; // r11
  int v15; // ebx
  __int64 v16; // rcx

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57) )
  {
    *v8 = v9;
    v15 = 0;
    v11 = v9;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90)
      || (unsigned int)InlineIsEqualGUID(v10, &GUID_00000003_0000_0000_c000_000000000046) )
    {
      *v14 = v11;
      v15 = 0;
    }
    else
    {
      v15 = -2147467262;
      v11 = 0LL;
    }
    if ( v15 == -2147467262 )
    {
      v16 = v13 + 64;
      if ( *v12 == 56
        && v12[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
        && v12[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
        && v12[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
      {
        *v14 = v16;
        v15 = 0;
        goto LABEL_9;
      }
      if ( *v12 == 905982127
        && v12[1] == *(_DWORD *)&GUID_360030af_7930_47a7_a1dd_184464be39de.Data2
        && v12[2] == *(_DWORD *)GUID_360030af_7930_47a7_a1dd_184464be39de.Data4
        && v12[3] == *(_DWORD *)&GUID_360030af_7930_47a7_a1dd_184464be39de.Data4[4] )
      {
        *v14 = v13 + 72;
        v15 = 0;
        v11 = v13 + 72;
      }
      else
      {
        v15 = -2147467262;
      }
    }
  }
  v16 = v11;
  if ( v15 >= 0 )
LABEL_9:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  return (unsigned int)v15;
}
