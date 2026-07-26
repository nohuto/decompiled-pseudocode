/*
 * XREFs of NdisMResetComplete @ 0x1C0071C40
 * Callers:
 *     ?ndisMReset@@YAHPEAX@Z @ 0x1C0070450 (-ndisMReset@@YAHPEAX@Z.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x1C0073438 (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1C00707D8 (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00708A0 (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00A53C0 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 */

void __stdcall NdisMResetComplete(NDIS_HANDLE MiniportAdapterHandle, NDIS_STATUS Status, BOOLEAN AddressingReset)
{
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v5; // rdi
  void *v6; // r8
  int v7; // r9d
  int v8; // eax
  char v9; // cl
  KIRQL v10; // dl
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  BugCheckParameter4 = AddressingReset;
  NewIrql = 0;
  v5 = Status;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0x4Au,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      MiniportAdapterHandle);
  if ( *((_QWORD *)MiniportAdapterHandle + 556) )
    ndisClearBusy(MiniportAdapterHandle, 1LL, 36LL);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &NewIrql);
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x200000) == 0 )
  {
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *((_QWORD *)MiniportAdapterHandle + 482),
      "Completing reset when one is not pending");
    KeBugCheckEx(0x7Cu, 0xFuLL, (ULONG_PTR)MiniportAdapterHandle, v5, BugCheckParameter4);
  }
  LOBYTE(v6) = BugCheckParameter4;
  v8 = ndisMResetCompleteStage1(
         (struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle,
         (struct _NDIS_OPEN_BLOCK *)(unsigned int)v5,
         v6,
         v7);
  v9 = BugCheckParameter4;
  if ( v8 )
    v9 = 0;
  if ( !v9 || (_DWORD)v5 )
    ndisMResetCompleteStage2((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle);
  v10 = NewIrql;
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v10);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0x4Bu,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      MiniportAdapterHandle);
}
