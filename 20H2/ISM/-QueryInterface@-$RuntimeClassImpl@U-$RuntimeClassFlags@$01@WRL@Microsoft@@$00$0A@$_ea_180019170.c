/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019170
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004D240 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18004D240.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004D250 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18004D250.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004D260 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18004D260.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004D270 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18004D270.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004D280 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18004D280.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180019250 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // rcx
  __int64 v16; // r10
  int v17; // eax
  void (*v18)(void); // rax
  __int64 v20; // r10

  v3 = 0;
  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v5 = v6;
    v18 = *(void (**)(void))(*(_QWORD *)v6 + 8LL);
    goto LABEL_12;
  }
  if ( (unsigned int)InlineIsEqualGUID(v4, &GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8)
    || (unsigned int)InlineIsEqualGUID(v7, &GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8) )
  {
    *(_QWORD *)v8 = v9;
LABEL_11:
    v18 = *(void (**)(void))(**(_QWORD **)v8 + 8LL);
LABEL_12:
    v18();
    return v3;
  }
  if ( (unsigned int)InlineIsEqualGUID(v10, &GUID_603ffbaf_2fd6_4711_8c68_de56f864f999) )
  {
    *(_QWORD *)v8 = v12;
    v17 = 0;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v11, &GUID_3cc27501_dfa8_48b9_9841_43a516320b1d) )
    {
      *(_QWORD *)v8 = v14;
      v17 = 0;
    }
    else if ( (unsigned int)InlineIsEqualGUID(v13, &GUID_18f2e21a_ceea_4596_9fd8_326464016a35) )
    {
      *(_QWORD *)v8 = v16;
      v17 = 0;
    }
    else if ( (unsigned int)InlineIsEqualGUID(v15, &GUID_dbec8be2_d5cc_471f_8bf1_9a8efeae5f61) )
    {
      *(_QWORD *)v8 = v20 + 8;
      v17 = 0;
    }
    else
    {
      v17 = -2147467262;
    }
    if ( v17 == -2147467262 )
      v17 = -2147467262;
  }
  v3 = v17;
  if ( v17 >= 0 )
    goto LABEL_11;
  return v3;
}
