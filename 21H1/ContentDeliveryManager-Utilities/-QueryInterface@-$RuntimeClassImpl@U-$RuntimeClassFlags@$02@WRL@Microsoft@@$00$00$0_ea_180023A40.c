/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023A40
 * Callers:
 *     ?QueryInterface@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022D30 (-QueryInterface@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJAEBU_.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800270D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800270D0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180027370 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180027370.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  __int64 v5; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2
     || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
     || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (*a2 != -1350114592
     || a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
     || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
     || a2[3] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]) )
  {
    if ( *a2 == 994254326
      && a2[1] == *(_DWORD *)&GUID_3b431df6_5dbc_4950_b51f_e8313d975159.Data2
      && a2[2] == *(_DWORD *)GUID_3b431df6_5dbc_4950_b51f_e8313d975159.Data4
      && a2[3] == *(_DWORD *)&GUID_3b431df6_5dbc_4950_b51f_e8313d975159.Data4[4]
      || (a1 += 8LL, *a2 == 56)
      && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = a1;
      v4 = 0;
    }
    else
    {
      v5 = a1 + 8;
      if ( *a2 == -1796592748
        && a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
        && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
        && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4]
        || *a2 == 3
        && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
        && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
        && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
      {
        *a3 = v5;
        v4 = 0;
      }
      else
      {
        v4 = -2147467262;
      }
      if ( v4 < 0 )
        return (unsigned int)v4;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
