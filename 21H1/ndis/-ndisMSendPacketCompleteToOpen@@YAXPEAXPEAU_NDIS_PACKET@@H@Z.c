/*
 * XREFs of ?ndisMSendPacketCompleteToOpen@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00BF520
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00196A4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C00326E8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1C00BFB50 (McTemplateK0pp_EtwWriteTransfer.c)
 */

void __fastcall ndisMSendPacketCompleteToOpen(
        void (__fastcall **a1)(_QWORD, _QWORD, _QWORD),
        struct _NDIS_PACKET *a2,
        unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  struct _NDIS_STACK_RESERVED *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  NDIS_STACK_RESERVED_FROM_PACKET(a2, &v9);
  --*(_DWORD *)&a2[-1].ProtocolReserved[4];
  *((_DWORD *)v9 + 2) = 0;
  if ( (byte_1C00E6084 & 2) != 0 )
    McTemplateK0pp_EtwWriteTransfer(v7, v6, v8 + 4008, a1, a2);
  ((void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, _QWORD))a1)[85](a1[66], a2, a3);
  ndisMDereferenceOpenUnlocked((__int64)a1, 9);
}
