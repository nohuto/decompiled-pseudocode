/*
 * XREFs of ndisMiniportDpc @ 0x1C0066F98
 * Callers:
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0067460 (ndisQueuedMiniportDpcWorkItem.c)
 * Callees:
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00382D4 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ndisQueueDpcWorkItem @ 0x1C0067280 (ndisQueueDpcWorkItem.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008F39C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008F534 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A39A0 (-ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00AB2E8 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00AB3D0 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisMiniportDpc(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rsi
  void (__fastcall *v6)(__int64, __int64, __int64 *, _QWORD); // r13
  __int64 Clock; // r12
  __int64 v10; // r8
  char v11; // bp
  __int64 v12; // r8
  unsigned int MaxNblCount; // eax
  void (__fastcall *v14)(__int64, _QWORD, __int64, __int64 *, _QWORD); // r10
  char v15; // di
  __int64 v16; // rcx
  __int64 v17; // rax
  _BYTE v18[12]; // [rsp+38h] [rbp-50h] BYREF
  int v19; // [rsp+44h] [rbp-44h]
  __int64 v21; // [rsp+98h] [rbp+10h] BYREF

  v4 = *(struct _NDIS_MINIPORT_BLOCK **)(a2 + 96);
  v6 = *(void (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(a2 + 24);
  v21 = 0LL;
  Clock = 0LL;
  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)v18, v4);
  if ( HIBYTE(dword_1C00E6150) )
  {
    v11 = 1;
    ndisTraceDpcStart(v4, 1u);
    Clock = WmiGetClock(0LL, 0LL, v12);
  }
  else
  {
    v11 = 0;
  }
  if ( *(_BYTE *)(a2 + 4) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 104), 0xFFFFFFFF) != 1 )
      goto LABEL_19;
  }
  else
  {
    MaxNblCount = ndisPeriodicReceivesGetMaxNblCount(v4);
    v15 = v19;
    LODWORD(v21) = MaxNblCount;
    if ( (v19 & 1) != 0 )
    {
      ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)v18, 0);
      v15 = v19;
    }
    v16 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)(a2 + 193) == 1 )
      v14(v16, a3, a4, &v21, 0LL);
    else
      v6(v16, a4, &v21, 0LL);
    if ( (v15 & 1) != 0 )
      ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)v18, 0, 0xDuLL);
    if ( (v21 & 0x100000000LL) != 0 )
    {
      ndisQueueDpcWorkItem(a1, a2, a3, a4, byte_1C00E40C1);
      goto LABEL_19;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 104), 0xFFFFFFFF) != 1 || !*(_BYTE *)(a2 + 4) )
      goto LABEL_19;
  }
  KeSetEvent((PRKEVENT)(a2 + 128), 0, 0);
LABEL_19:
  if ( v11 )
  {
    v17 = WmiGetClock(0LL, 0LL, v10);
    ndisTraceDpcEnd(v4, 1u, v17 - Clock);
  }
}
