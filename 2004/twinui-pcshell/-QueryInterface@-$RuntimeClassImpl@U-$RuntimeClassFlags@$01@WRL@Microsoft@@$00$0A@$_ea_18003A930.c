/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIPerMonitorShellPositionerManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003A930
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIPerMonitorShellPositionerManager@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FDA10 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800FDA10.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIPerMonitorShellPositionerManager@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FDA20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800FDA20.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIPerMonitorShellPositionerManager@@@Details@WRL@Microsoft@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FDA30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800FDA30.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IPerMonitorShellPositionerManager>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  __int64 v6; // rcx
  _QWORD *v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // r10
  _QWORD *v10; // r11
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8
  int v14; // ebx
  __int64 v15; // rcx

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( (unsigned int)InlineIsEqualGUID(v3, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352) )
  {
    *v7 = v9;
    v14 = 0;
    v12 = v9;
  }
  else if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4) )
  {
    *v10 = v12;
    v14 = 0;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v11, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa) )
    {
      v12 = v13 + 8;
      *v10 = v12;
      v14 = 0;
    }
    else
    {
      v14 = -2147467262;
      v12 = 0LL;
    }
    if ( v14 != -2147467262 )
    {
LABEL_17:
      v15 = v12;
      if ( v14 < 0 )
        return (unsigned int)v14;
      goto LABEL_14;
    }
    v14 = -2147467262;
  }
  if ( v14 != -2147467262 )
    goto LABEL_17;
  v15 = v9 + 88;
  if ( *v8 != -573495254
    || v8[1] != *(_DWORD *)&GUID_ddd1282a_db1a_46e0_8622_309920263baf.Data2
    || v8[2] != *(_DWORD *)GUID_ddd1282a_db1a_46e0_8622_309920263baf.Data4
    || v8[3] != *(_DWORD *)&GUID_ddd1282a_db1a_46e0_8622_309920263baf.Data4[4] )
  {
    v14 = -2147467262;
    goto LABEL_17;
  }
  *v10 = v15;
  v14 = 0;
LABEL_14:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  return (unsigned int)v14;
}
