/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VFtmBase@23@UIWeakReferenceSource@@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180050214
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004DE60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18004DE60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,Microsoft::WRL::FtmBase,IWeakReferenceSource,INotificationActivationCallback,ICDPActivityPublishCallback>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != -1350114592
    || a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    || a2[3] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    a1 += 8LL;
    if ( (*a2 != -1796592748
       || a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
       || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
       || a2[3] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4])
      && (*a2 != 3
       || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
       || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
       || a2[3] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4]) )
    {
      a1 += 32LL;
      if ( *a2 != 56
        || a2[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
        || a2[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
        || a2[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
      {
        a1 += 8LL;
        if ( *a2 != 1407391799
          || a2[1] != *(_DWORD *)&GUID_53e31837_6600_4a81_9395_75cffe746f94.Data2
          || a2[2] != *(_DWORD *)GUID_53e31837_6600_4a81_9395_75cffe746f94.Data4
          || a2[3] != *(_DWORD *)&GUID_53e31837_6600_4a81_9395_75cffe746f94.Data4[4] )
        {
          a1 += 8LL;
          if ( *a2 != 748686870
            || a2[1] != *(_DWORD *)&GUID_2ca00e16_9460_4359_8491_cb98b6b53c0a.Data2
            || a2[2] != *(_DWORD *)GUID_2ca00e16_9460_4359_8491_cb98b6b53c0a.Data4
            || a2[3] != *(_DWORD *)&GUID_2ca00e16_9460_4359_8491_cb98b6b53c0a.Data4[4] )
          {
            return 2147500034LL;
          }
        }
      }
    }
  }
  *a3 = a1;
  return 0LL;
}
