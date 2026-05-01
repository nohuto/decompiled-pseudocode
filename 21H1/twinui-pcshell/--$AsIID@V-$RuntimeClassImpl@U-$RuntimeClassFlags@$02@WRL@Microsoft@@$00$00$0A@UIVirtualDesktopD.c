/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800755DC
 * Callers:
 *     ?QueryInterface@VirtualDesktopDataSource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180086B70 (-QueryInterface@VirtualDesktopDataSource@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803549E4 (-VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003C6B0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>>(
        char *a1,
        __int64 a2,
        void **a3)
{
  char *v3; // rcx
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( (*(_DWORD *)a2
     || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
     || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (*(_DWORD *)a2 != -1350114592
     || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
     || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
     || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]) )
  {
    if ( *(_DWORD *)a2 == -694819868
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_d695e3e4_4996_4604_85d7_84f7ca94029f.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_d695e3e4_4996_4604_85d7_84f7ca94029f.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_d695e3e4_4996_4604_85d7_84f7ca94029f.Data4[4]
      || (a1 += 8, *(_DWORD *)a2 == 56)
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = a1;
      CanCastTo = 0;
    }
    else
    {
      v3 = a1 + 8;
      if ( *(_DWORD *)a2 == 2134054290
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_7f331592_08ca_41ff_a77d_f2138806e857.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_7f331592_08ca_41ff_a77d_f2138806e857.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_7f331592_08ca_41ff_a77d_f2138806e857.Data4[4]
        || (v3 += 8, *(_DWORD *)a2 == 1782886427)
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc.Data4[4]
        || (v3 += 8, *(_DWORD *)a2 == -1049021620)
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_c179334c_4295_40d3_bea1_c654d965605a.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_c179334c_4295_40d3_bea1_c654d965605a.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_c179334c_4295_40d3_bea1_c654d965605a.Data4[4] )
      {
        *a3 = v3;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                      (Microsoft::WRL::FtmBase *)(v3 + 8),
                      (const struct _GUID *)a2,
                      a3);
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
      }
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)CanCastTo;
  }
  *a3 = a1;
  (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
