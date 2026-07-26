/*
 * XREFs of ndisQueuedMiniportDpcWorkItem @ 0x1C0067460
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     ndisMiniportDpc @ 0x1C0066F98 (ndisMiniportDpc.c)
 */

void __fastcall ndisQueuedMiniportDpcWorkItem(__int64 a1)
{
  KIRQL v1; // si
  unsigned int Number; // r15d
  __int64 v4; // rax
  __int64 v5; // r13
  char v6; // r14
  char v7; // r14
  ULONG v8; // ebp
  struct _NDIS_MINIPORT_BLOCK *v9; // r12
  _PROCESSOR_NUMBER v10; // [rsp+20h] [rbp-78h] BYREF
  __int64 v11; // [rsp+28h] [rbp-70h]
  __int64 v12; // [rsp+30h] [rbp-68h]
  __int64 v13; // [rsp+38h] [rbp-60h]
  _GROUP_AFFINITY Affinity; // [rsp+40h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+50h] [rbp-48h] BYREF

  PreviousAffinity = 0LL;
  v1 = 0;
  Affinity = 0LL;
  Number = KeGetPcr()->Prcb.Number;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_BYTE *)(a1 + 68);
  ++ndisWorkitemDpcs;
  v7 = v6 & 2;
  v8 = *(_DWORD *)(a1 + 64);
  v9 = *(struct _NDIS_MINIPORT_BLOCK **)(v5 + 96);
  v13 = v4;
  v12 = *(_QWORD *)(a1 + 48);
  v11 = *(_QWORD *)(a1 + 56);
  if ( Number != v8 )
  {
    v10 = 0;
    KeGetProcessorNumberFromIndex(v8, &v10);
    Affinity.Mask = 1LL << v10.Number;
    Affinity.Group = v10.Group;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  if ( !v7 )
    v1 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 72));
  *(_DWORD *)(a1 + 68) &= ~1u;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 72));
  ndisMiniportDpc(v13, v5, v12, v11);
  if ( !v7 && v1 != 2 )
    KeLowerIrql(v1);
  if ( Number != v8 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  ndisDereferenceMiniport(v9, 0x4Du);
}
