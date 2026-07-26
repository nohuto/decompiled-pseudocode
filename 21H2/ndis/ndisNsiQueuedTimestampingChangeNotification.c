/*
 * XREFs of ndisNsiQueuedTimestampingChangeNotification @ 0x1C00B3470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C00189B4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00403C0 (memset.c)
 */

void __fastcall ndisNsiQueuedTimestampingChangeNotification(PVOID P, struct _NDIS_IF_BLOCK *a2)
{
  KIRQL v4; // bl
  _QWORD v5[8]; // [rsp+30h] [rbp-48h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xAu,
      (struct _GUID *)&WPP_71cb36f29d0f388e109f8982bee03d4b_Traceguids,
      a2);
  memset(v5, 0, sizeof(v5));
  HIDWORD(v5[1]) = 0;
  v5[5] = 0LL;
  v5[0] = ndisNsiSavedClientNpi;
  LOWORD(v5[1]) = 17;
  v5[2] = &a2->NetLuid;
  LODWORD(v5[3]) = 8;
  (*(void (__fastcall **)(_QWORD *))(qword_1C00E49E0 + 8))(v5);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(a2, 0xAu);
  KeReleaseSpinLock(&ndisIfListLock, v4);
  ExFreePoolWithTag(P, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xBu,
      (struct _GUID *)&WPP_71cb36f29d0f388e109f8982bee03d4b_Traceguids);
}
