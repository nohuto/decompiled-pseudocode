/*
 * XREFs of ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C005A048
 * Callers:
 *     NdisTryAcquireNicActive @ 0x1C00012B0 (NdisTryAcquireNicActive.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C005A24C (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C005A8A4 (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005A97C (-ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcTakeInternalRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005ADB4 (-ndisAoAcTakeInternalRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C005AF60 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C005BC34 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C005D460 (-ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z.c)
 * Callees:
 *     ?ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C005A940 (-ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

__int64 __fastcall ndisAoAcActiveRefIncrement(__int64 a1, int a2)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rdx

  ++*(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 388) |= 2u;
  v3 = *(_DWORD *)(a1 + 52);
  v4 = a2;
  v5 = a2;
  v6 = *(_DWORD *)(a1 + 4LL * a2 + 500) + 1;
  *(_DWORD *)(a1 + 4LL * a2 + 500) = v6;
  if ( *(_BYTE *)(a1 + 1105) && v6 == 1 )
  {
    if ( a2 != 15 || ndisPowerRefManagementState )
    {
      if ( !*(_DWORD *)(a1 + 560) || ndisPowerRefManagementState == 1 )
      {
        v8 = *(_DWORD *)(a1 + 376);
        if ( !v8 || v8 == 3 )
        {
          v9 = MEMORY[0xFFFFF78000000008];
          if ( (_DWORD)v4 )
          {
            if ( *(int *)(a1 + 500) > 0 && *(_QWORD *)(a1 + 576) )
            {
              *(_QWORD *)(a1 + 568) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 576);
              *(_QWORD *)(a1 + 576) = 0LL;
            }
            *(_QWORD *)(a1 + 16 * (v5 + 36)) = v9;
          }
          else if ( v3 == 1 )
          {
            *(_QWORD *)(a1 + 16 * (v4 + 36)) = MEMORY[0xFFFFF78000000008];
          }
        }
      }
    }
    else
    {
      ndisAoAcPauseRefTimeStats((struct _NDIS_MINIPORT_AOAC *)a1);
      *(_QWORD *)(v7 + 816) = MEMORY[0xFFFFF78000000008];
    }
  }
  return v3;
}
