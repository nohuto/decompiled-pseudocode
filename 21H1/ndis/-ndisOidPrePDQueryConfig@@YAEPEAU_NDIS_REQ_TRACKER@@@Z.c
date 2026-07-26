/*
 * XREFs of ?ndisOidPrePDQueryConfig@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007CF80
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C001E3D8 (WPP_RECORDER_SF_qdd_ea_1C001E3D8.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     WPP_RECORDER_SF_qqqqDd @ 0x1C007F00C (WPP_RECORDER_SF_qqqqDd.c)
 *     WPP_RECORDER_SF_qqqqq @ 0x1C007F278 (WPP_RECORDER_SF_qqqqq.c)
 */

unsigned __int8 __fastcall ndisOidPrePDQueryConfig(struct _NDIS_MINIPORT_BLOCK **a1, int a2, int a3)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  unsigned __int8 v4; // bl
  struct _NDIS_MINIPORT_BLOCK *v5; // rsi
  struct _NDIS_MINIPORT_BLOCK *v7; // rax
  struct _NDIS_PD_BLOCK *PDBlock; // r14
  unsigned int v9; // eax
  KIRQL v10; // dl
  KIRQL v11; // dl
  __int64 v12; // rdx
  __int64 v13; // r8
  KIRQL v14; // dl
  int v16; // [rsp+20h] [rbp-58h]
  KIRQL NewIrql; // [rsp+80h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = 0;
  v5 = a1[4];
  NewIrql = 0;
  v7 = v3;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqqqq(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 67);
    v7 = *a1;
  }
  if ( v7 )
  {
    PDBlock = v3->PDBlock;
    if ( !*((_DWORD *)&v5->Header + 1) )
    {
      if ( (*(_DWORD *)&v5->LinkStateIndicationFlags & 0x4000) == 0
        && (v5->Header.Revision < 2u || v5->Header.Size < 0xF8u)
        || (v5->WakeUpDpcTimer.Timer.DueTime.HighPart & 1) == 0
        || HIDWORD(v5->WakeUpDpcTimer.Timer.Header.WaitListHead.Blink)
        || v5->WakeUpDpcTimer.Timer.DueTime.LowPart != -1 )
      {
        *((_DWORD *)a1 + 10) = -1073741811;
        goto LABEL_21;
      }
      if ( PDBlock )
      {
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
        v9 = *((_DWORD *)PDBlock + 8);
        if ( v9 )
        {
          if ( v5->PcwDatapathEventMask >= v9 )
          {
            memmove(v5->Reserved4.Buffer, *((const void **)PDBlock + 3), *((unsigned int *)PDBlock + 8));
            HIDWORD(v5->Reserved28) = *((_DWORD *)PDBlock + 8);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qdd(*((_QWORD *)WPP_GLOBAL_Control + 8), v12, v13, 0x44u, v16);
            v14 = NewIrql;
            v3->MiniportThread = 0LL;
            KeReleaseSpinLock(&v3->Lock, v14);
            *((_DWORD *)a1 + 10) = 0;
          }
          else
          {
            v11 = NewIrql;
            v3->MiniportThread = 0LL;
            KeReleaseSpinLock(&v3->Lock, v11);
            LODWORD(v5->OpenQueue) = *((_DWORD *)PDBlock + 8);
            *((_DWORD *)a1 + 10) = -1073676266;
          }
          goto LABEL_21;
        }
        v10 = NewIrql;
        v3->MiniportThread = 0LL;
        KeReleaseSpinLock(&v3->Lock, v10);
      }
    }
    *((_DWORD *)a1 + 10) = -1073741637;
LABEL_21:
    v4 = 1;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      a3,
      69,
      v16,
      (char)v3,
      (char)a1[2],
      (char)a1[1],
      (char)a1[3],
      v4,
      *((_DWORD *)a1 + 10));
  return v4;
}
