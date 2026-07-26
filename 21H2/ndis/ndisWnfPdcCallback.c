/*
 * XREFs of ndisWnfPdcCallback @ 0x1C005DA40
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012E28 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C005B6D8 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C005DCBC (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x1C005E118 (McTemplateK0x_EtwWriteTransfer.c)
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A5DD4 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisWnfPdcCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int8 v4; // bl
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  KIRQL v9; // al
  struct _NDIS_MINIPORT_BLOCK *v10; // rbx
  KIRQL v11; // di
  int v13; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+38h] [rbp-38h] BYREF
  __int128 v15; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp-20h]
  __int128 v17; // [rsp+58h] [rbp-18h] BYREF

  v14 = a4;
  v13 = 24;
  v16 = 0LL;
  v15 = 0LL;
  v4 = 0;
  v5 = ExQueryWnfStateData(a1, &v14, &v15, &v13);
  if ( v5 >= 0 )
  {
    v8 = v15 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
    if ( (_QWORD)v15 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
      v8 = *((_QWORD *)&v15 + 1) - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
    if ( !v8 )
    {
      v4 = 1;
      ndisLastCsScenarioInstanceId = v16;
    }
    if ( ndisConnectedStandby != v4 )
    {
      ndisConnectedStandby = v4;
      v17 = 0LL;
      if ( v4 )
      {
        ndisLastCsEntryTime = MEMORY[0xFFFFF78000000008];
        if ( (byte_1C00E6183 & 4) != 0 )
          McTemplateK0_EtwWriteTransfer(v7, v6, &v17);
      }
      else if ( (byte_1C00E6183 & 4) != 0 )
      {
        McTemplateK0x_EtwWriteTransfer(
          MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime,
          &ExitingConnectedStandby,
          &v17,
          (MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime) / 0x989680);
      }
      v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      v10 = ndisMiniportList;
      v11 = v9;
      while ( v10 )
      {
        if ( v10->AoAc && ndisReferenceMiniport(v10, 7u) )
        {
          KeReleaseSpinLock(&ndisMiniportListLock, v11);
          ndisNicAutoPowerSaverControlIdleTimer(v10);
          if ( v10->AoAc )
            ndisCsStateChange(v10);
          v11 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
          ndisDereferenceMiniport(v10, 7u);
        }
        v10 = v10->NextGlobalMiniport;
      }
      KeReleaseSpinLock(&ndisMiniportListLock, v11);
    }
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      0xAu,
      (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
      v5);
  }
  return 0LL;
}
