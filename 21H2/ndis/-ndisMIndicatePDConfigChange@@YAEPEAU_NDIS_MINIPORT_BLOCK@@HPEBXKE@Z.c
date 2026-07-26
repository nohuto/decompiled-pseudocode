/*
 * XREFs of ?ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z @ 0x1C001E52C
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001AE74 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?NdisTraceLoggingPacketDirectConfigChanged@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C001E678 (-NdisTraceLoggingPacketDirectConfigChanged@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C001E6F8 (WPP_RECORDER_SF_qdd_ea_1C001E6F8.c)
 *     ?ndisValidatePDConfigBuffer@@YAEKPEBU_NDIS_PD_CONFIG@@@Z @ 0x1C001E7A4 (-ndisValidatePDConfigBuffer@@YAEKPEBU_NDIS_PD_CONFIG@@@Z.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005EE00 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     NdisWriteErrorLogEntry @ 0x1C006C920 (NdisWriteErrorLogEntry.c)
 */

char __fastcall ndisMIndicatePDConfigChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        const struct _NDIS_PD_CONFIG *a3,
        unsigned int a4,
        KIRQL NewIrql)
{
  struct _NDIS_PD_BLOCK *PDBlock; // rbx
  char v6; // r14
  SIZE_T v7; // rsi
  void *v10; // rcx
  PVOID PoolWithTag; // rax
  void *v12; // rcx
  int v13; // edx
  int v14; // r8d
  __int64 v16; // rax
  int v17; // [rsp+20h] [rbp-28h]

  PDBlock = a1->PDBlock;
  v6 = 0;
  v7 = a4;
  NewIrql = 0;
  if ( PDBlock )
  {
    if ( !ndisValidatePDConfigBuffer(a4, a3) )
      ndisBugCheckEx(0x20uLL, 0x40020200uLL, (ULONG_PTR)a1, (ULONG_PTR)a3);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    if ( *((_DWORD *)PDBlock + 9) < (unsigned int)v7 )
    {
      v10 = (void *)*((_QWORD *)PDBlock + 3);
      if ( v10 )
      {
        ExFreePoolWithTag(v10, 0);
        *((_DWORD *)PDBlock + 8) = 0;
        *((_DWORD *)PDBlock + 9) = 0;
      }
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x6F41444Eu);
      *((_QWORD *)PDBlock + 3) = PoolWithTag;
      if ( PoolWithTag )
        *((_DWORD *)PDBlock + 9) = v7;
    }
    v12 = (void *)*((_QWORD *)PDBlock + 3);
    if ( !v12 )
    {
      NdisWriteErrorLogEntry(a1, 0xC0001389, 1u, 4294967293LL);
      goto LABEL_13;
    }
    memmove(v12, a3, v7);
    *((_DWORD *)PDBlock + 8) = v7;
    if ( !*((_BYTE *)PDBlock + 12) )
    {
      v16 = *((_QWORD *)PDBlock + 3);
      if ( *(_BYTE *)(v16 + 8) == 1 )
      {
        *(_BYTE *)(v16 + 8) = 0;
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        {
LABEL_12:
          v6 = 1;
          NdisTraceLoggingPacketDirectConfigChanged(
            a1,
            *(_DWORD *)(*((_QWORD *)PDBlock + 3) + 16LL) != 0,
            *(_BYTE *)(*((_QWORD *)PDBlock + 3) + 8LL));
LABEL_13:
          a1->MiniportThread = 0LL;
          KeReleaseSpinLock(&a1->Lock, NewIrql);
          return v6;
        }
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          0x1Du,
          0x41u,
          (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids);
      }
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        v14,
        66,
        v17,
        (char)a1,
        a3->Enabled,
        a3->CapabilitiesSize);
    goto LABEL_12;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      0x1Du,
      0x40u,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      a1);
  return v6;
}
