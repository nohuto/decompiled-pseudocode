/*
 * XREFs of ndisNsiQueuedIfBlockRodChangeNotification @ 0x1C00186C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C00187E4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FD80C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisNsiQueuedIfBlockRodChangeNotification(__int64 a1, __int64 a2)
{
  struct _NDIS_IF_BLOCK *v2; // rsi
  __int64 v4; // rax
  KIRQL v5; // bl
  _DWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]

  v2 = *(struct _NDIS_IF_BLOCK **)(a2 + 80);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x22u,
      (struct _GUID *)&WPP_aa66c5b77aef37206a2c806e5c5446f1_Traceguids,
      *(_QWORD *)(a2 + 80));
  v4 = *(_QWORD *)(a2 + 88);
  v6[1] = 0;
  v7 = v4;
  v8 = *(_DWORD *)(a2 + 96);
  v9 = *(_DWORD *)(a2 + 100);
  v6[0] = 1;
  ndisNsiNotifyClientInterfaceChange(v2, 0LL, v6);
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(v2, IFREF_ASYNCCHANGE);
  KeReleaseSpinLock(&ndisIfListLock, v5);
  ExFreePoolWithTag((PVOID)a2, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x23u,
      (struct _GUID *)&WPP_aa66c5b77aef37206a2c806e5c5446f1_Traceguids);
}
