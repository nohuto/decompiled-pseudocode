/*
 * XREFs of ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C005A24C
 * Callers:
 *     ?ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C0015A28 (-ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FDCB0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C0104540 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0113E2C (-ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C005A048 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C005CBF0 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisAoAcClearStop(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  __int64 AoAc; // rbx
  signed __int64 v4; // rsi
  char v6; // r14
  int v7; // ebp
  KIRQL v8; // r12
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // ecx
  int v21; // eax
  int v22; // eax

  AoAc = (__int64)a1->AoAc;
  LODWORD(v4) = 0;
  v6 = 0;
  v7 = 5;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  v9 = a2 - 1;
  if ( !v9 )
  {
    *(_DWORD *)(AoAc + 380) &= ~1u;
    goto LABEL_28;
  }
  v10 = v9 - 3;
  if ( !v10 )
  {
    *(_DWORD *)(AoAc + 380) &= ~8u;
    goto LABEL_28;
  }
  v11 = v10 - 2;
  if ( !v11 )
  {
    *(_DWORD *)(AoAc + 380) &= ~0x20u;
    goto LABEL_28;
  }
  v12 = v11 - 2;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 2;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
          {
            v16 = *(_DWORD *)(AoAc + 380);
            if ( (v16 & 0x1000) == 0 )
              NT_ASSERT("AoAc->StopFlags.BindChanges");
            v17 = *(_DWORD *)(AoAc + 60);
            if ( v17 <= 0 )
              NT_ASSERT("AoAc->PendingBindChangesCount > 0");
            v18 = v17 - 1;
            *(_DWORD *)(AoAc + 60) = v18;
            if ( !v18 )
            {
              v19 = v16 & 0xFFFFEFFF;
LABEL_24:
              *(_DWORD *)(AoAc + 380) = v19;
            }
          }
        }
        else
        {
          *(_DWORD *)(AoAc + 380) &= ~0x800u;
          v7 = 6;
        }
      }
      else
      {
        *(_DWORD *)(AoAc + 380) &= ~0x400u;
      }
    }
    else
    {
      *(_DWORD *)(AoAc + 380) &= ~0x100u;
      v7 = 1;
      LODWORD(v4) = ndisNicQuietInitTimeout;
    }
  }
  else
  {
    v20 = *(_DWORD *)(AoAc + 380);
    if ( (v20 & 0x80u) == 0 )
      NT_ASSERT("AoAc->StopFlags.PnPOp");
    v21 = *(_DWORD *)(AoAc + 56);
    if ( v21 <= 0 )
      NT_ASSERT("AoAc->PendingPnPOpCount > 0");
    v22 = v21 - 1;
    *(_DWORD *)(AoAc + 56) = v22;
    if ( !v22 )
    {
      v19 = v20 & 0xFFFFFF7F;
      goto LABEL_24;
    }
  }
LABEL_28:
  if ( !*(_DWORD *)(AoAc + 380) && *(_DWORD *)(AoAc + 64) != 2 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x32u,
        (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
        a1);
    *(_DWORD *)(AoAc + 64) = v7;
    ndisAoAcActiveRefIncrement(AoAc, 0);
    v6 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v8);
  if ( v6 )
  {
    if ( !(_DWORD)v4 )
    {
      v4 = ndisNicQuietInitTimeout - (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(AoAc + 472)) / 0x2710uLL;
      if ( *(unsigned int *)(AoAc + 284) > v4 )
        LODWORD(v4) = *(_DWORD *)(AoAc + 284);
    }
    ndisSetTempRefTimer(a1, v4);
  }
}
