/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18000A82C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000A820 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventA.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>>(
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
  _QWORD *v13; // r11
  int v14; // ebx
  __int64 v15; // r10
  __int64 v17; // rcx
  _QWORD *v18; // r11
  __int64 v19; // r10
  _QWORD *v20; // r11

  *a3 = 0LL;
  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !(unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57) )
    {
      *v8 = v9;
      v14 = 0;
      v11 = v9;
    }
    else
    {
      if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90)
        || *v12 == 3
        && v12[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
        && v12[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
        && v12[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
      {
        *v13 = v11;
        v14 = 0;
      }
      else
      {
        v14 = -2147467262;
        v11 = 0LL;
      }
      if ( v14 == -2147467262 )
      {
        if ( (unsigned int)InlineIsEqualGUID(v10, &GUID_00000038_0000_0000_c000_000000000046) )
        {
          *v18 = v15;
          v14 = 0;
          goto LABEL_9;
        }
        if ( (unsigned int)InlineIsEqualGUID(v17, &GUID_741390c6_ef1e_43ce_bfc2_6cfb131c012e) )
        {
          v11 = v19 + 8;
          v14 = 0;
          *v20 = v19 + 8;
        }
        else
        {
          v14 = -2147467262;
        }
      }
    }
    v15 = v11;
    if ( v14 < 0 )
      return (unsigned int)v14;
LABEL_9:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    return (unsigned int)v14;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
