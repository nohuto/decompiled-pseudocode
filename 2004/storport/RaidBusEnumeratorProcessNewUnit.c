/*
 * XREFs of RaidBusEnumeratorProcessNewUnit @ 0x1C0018FCC
 * Callers:
 *     RaidBusEnumeratorProcessModifiedNodes @ 0x1C0016364 (RaidBusEnumeratorProcessModifiedNodes.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0007340 (RaidIsUnitControlSupported.c)
 *     RaidAdapterInsertUnit @ 0x1C0017C90 (RaidAdapterInsertUnit.c)
 *     RaUnitSetQueueDepth @ 0x1C0017ED0 (RaUnitSetQueueDepth.c)
 *     RaCallMiniportUnitControl @ 0x1C0018104 (RaCallMiniportUnitControl.c)
 *     StorpInitializeUnitTelemetry @ 0x1C0018F2C (StorpInitializeUnitTelemetry.c)
 *     McTemplateK0zqjuuusssz_EtwWriteTransfer @ 0x1C00192B4 (McTemplateK0zqjuuusssz_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 *     memmove @ 0x1C001D740 (memmove.c)
 */

char __fastcall RaidBusEnumeratorProcessNewUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  char v6; // al
  int v7; // eax
  int v8; // r8d
  __int64 v9; // r9
  void *v10; // rcx
  size_t v11; // r8

  v2 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(v2 + 96) = *(_DWORD *)(a2 + 1);
  v5 = *(_QWORD *)(v2 + 24);
  *(_WORD *)(v2 + 88) = 1;
  *(_DWORD *)(v2 + 92) = 4;
  *(_WORD *)(v2 + 90) = *(_WORD *)(v5 + 56);
  *(_OWORD *)(v2 + 104) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v2 + 120) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(v2 + 136) = *(_OWORD *)(a2 + 64);
  *(_QWORD *)(v2 + 152) = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(v2 + 160) = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL);
  *(_OWORD *)(v2 + 169) = *(_OWORD *)(*(_QWORD *)(a2 + 32) + 16LL);
  *(_DWORD *)(v2 + 442) = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  if ( *(_WORD *)(a2 + 42) )
  {
    v11 = 255LL;
    if ( *(_WORD *)(a2 + 40) < 0xFFu )
      v11 = *(unsigned __int16 *)(a2 + 40);
    memmove((void *)(v2 + 186), *(const void **)(a2 + 48), v11);
  }
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_OWORD *)(a2 + 48) = 0LL;
  *(_OWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 80) = 0LL;
  v6 = *(_BYTE *)(v2 + 448) & 0xF7;
  *(_DWORD *)(v2 + 48) = 2;
  *(_BYTE *)(v2 + 693) = 1;
  *(_BYTE *)(v2 + 448) = v6 | 4;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 5024LL)
    && _bittest64(*(const signed __int64 **)(*(_QWORD *)a1 + 5016LL), *(unsigned __int8 *)(a2 + 1)) )
  {
    *(_DWORD *)(v2 + 1824) |= 1u;
  }
  RaidAdapterInsertUnit(*(_QWORD *)(v2 + 24), v2);
  if ( (**(_BYTE **)(v2 + 104) & 0x1F) == 1 )
    RaUnitSetQueueDepth(v2, 1u, 1u);
  StorpInitializeUnitTelemetry(v2);
  *(_DWORD *)(*(_QWORD *)(v2 + 8) + 48LL) &= ~0x80u;
  *(_DWORD *)(v2 + 3280) = *(_DWORD *)(*(_QWORD *)(v2 + 24) + 4420LL);
  LOBYTE(v7) = RaidIsUnitControlSupported(v2, 12);
  if ( (_BYTE)v7 )
  {
    v7 = RaCallMiniportUnitControl(*(_QWORD *)(v2 + 24) + 304LL);
    if ( v7 >= 0 )
      LOBYTE(v7) = -1;
  }
  if ( (byte_1C0068845 & 0x20) != 0 )
  {
    v9 = *(_QWORD *)(v2 + 24);
    v10 = &unk_1C005A7A0;
    if ( *(_QWORD *)(v9 + 5208) )
      v10 = *(void **)(v9 + 5208);
    LOBYTE(v7) = McTemplateK0zqjuuusssz_EtwWriteTransfer(
                   (_DWORD)v10,
                   (int)v9 + 5192,
                   v8,
                   *(_QWORD *)(v9 + 4864),
                   *(_DWORD *)(v9 + 56),
                   v9 + 5192,
                   *(_BYTE *)(v2 + 96),
                   *(_BYTE *)(v2 + 97),
                   *(_BYTE *)(v2 + 98),
                   v2 + 160,
                   v2 + 169,
                   v2 + 186,
                   (__int64)v10);
  }
  return v7;
}
