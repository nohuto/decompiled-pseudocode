/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISetActivityMonitor@Activities@Data@Internal@Windows@@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800335C0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@UISetActivityMonitor@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800336C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActiv.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Data::Activities::ISetActivityMonitor,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // r11
  __int64 v7; // rcx
  __int64 v8; // r10
  _QWORD *v9; // r11
  __int64 v10; // r10
  _QWORD *v11; // r11
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD *v15; // r9
  _QWORD *v16; // r11

  if ( *a2 == 438378839
    && a2[1] == *(_DWORD *)&GUID_1a212157_be49_4892_afc4_1a168e546329.Data2
    && a2[2] == *(_DWORD *)GUID_1a212157_be49_4892_afc4_1a168e546329.Data4
    && a2[3] == *(_DWORD *)&GUID_1a212157_be49_4892_afc4_1a168e546329.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352) )
  {
    *v6 = v4;
    result = 0LL;
  }
  else if ( (unsigned int)InlineIsEqualGUID(v3, &GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4) )
  {
    *v9 = v8;
    result = 0LL;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa) )
    {
      *v11 = v10 + 8;
      result = 0LL;
    }
    else
    {
      result = 2147500034LL;
    }
    if ( (_DWORD)result != -2147467262 )
      return result;
  }
  if ( (_DWORD)result == -2147467262 )
  {
    if ( (unsigned int)InlineIsEqualGUID(v5, &GUID_1531f00e_3fe1_4b79_b0bc_f6cde362f7ea)
      || (v14 += 8LL, *v15 == -1796592748)
      && v15[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      && v15[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
      && v15[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4]
      || (unsigned int)InlineIsEqualGUID(v13, &GUID_00000003_0000_0000_c000_000000000046) )
    {
      *v16 = v14;
      return 0LL;
    }
    else
    {
      return 2147500034LL;
    }
  }
  return result;
}
