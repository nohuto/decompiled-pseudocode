/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIActionHelper@ContentManagement@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800150B0
 * Callers:
 *     ?QueryInterface@ActionHelper@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800120A0 (-QueryInterface@ActionHelper@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIActionHelper@ContentManagement@@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800240E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800240E0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIActionHelper@ContentManagement@@@Details@WRL@Microsoft@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800245F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800245F0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIActionHelper@ContentManagement@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024E10 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180024E10.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IActionHelper>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // edi
  int v4; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_9;
  }
  if ( *a2 != -1350114592 )
    goto LABEL_15;
  if ( a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    || a2[3] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    if ( *a2 == -1350114592
      && a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      goto LABEL_14;
    }
LABEL_15:
    a1 += 8LL;
    if ( *a2 != -1796592748
      || a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
      || a2[3] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
    {
      if ( *a2 == 3
        && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
        && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
        && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
      {
        goto LABEL_23;
      }
      a1 += 32LL;
      if ( *a2 != 56
        || a2[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
        || a2[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
        || a2[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
      {
        a1 += 8LL;
        if ( *a2 != 1038449541
          || a2[1] != *(_DWORD *)&GUID_3de57b85_d574_488b_9d07_81cd7c7e49df.Data2
          || a2[2] != *(_DWORD *)GUID_3de57b85_d574_488b_9d07_81cd7c7e49df.Data4
          || a2[3] != *(_DWORD *)&GUID_3de57b85_d574_488b_9d07_81cd7c7e49df.Data4[4] )
        {
          v4 = -2147467262;
LABEL_33:
          if ( v4 < 0 )
            return (unsigned int)v4;
LABEL_34:
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
          return (unsigned int)v4;
        }
LABEL_23:
        *a3 = a1;
        v4 = 0;
        goto LABEL_33;
      }
    }
LABEL_14:
    *a3 = a1;
    v4 = 0;
    goto LABEL_34;
  }
LABEL_9:
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
