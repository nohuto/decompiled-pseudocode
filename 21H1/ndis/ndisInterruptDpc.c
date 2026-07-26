/*
 * XREFs of ndisInterruptDpc @ 0x1C00076F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019B0C (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ndisQueueDpcWorkItem @ 0x1C0066930 (ndisQueueDpcWorkItem.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008EB3C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008ECD4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00AACB8 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00AADA0 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisInterruptDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // r11
  __int64 v5; // r12
  unsigned int v6; // edi
  _QWORD *v7; // rbx
  int v8; // r14d
  int PcwDatapathEventMask; // eax
  unsigned int Number; // ecx
  int v12; // esi
  __int64 v13; // r8
  struct _NDIS_MINIPORT_BLOCK *v14; // rsi
  char v15; // r14
  void (__fastcall *v16)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r10
  void (__fastcall *v17)(__int64, PVOID, __int64 *, _QWORD); // r13
  int v18; // eax
  char v19; // di
  __int64 v20; // rcx
  int v21; // r13d
  wchar_t *Buffer; // rax
  __int64 v23; // r8
  __int64 Clock; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+30h] [rbp-49h] BYREF
  wchar_t *v27; // [rsp+38h] [rbp-41h] BYREF
  int v28; // [rsp+40h] [rbp-39h]
  int v29; // [rsp+44h] [rbp-35h]
  int v30; // [rsp+48h] [rbp-31h]
  wchar_t *v31; // [rsp+50h] [rbp-29h] BYREF
  __int64 v32; // [rsp+58h] [rbp-21h]
  int v33; // [rsp+60h] [rbp-19h]
  PVOID v34; // [rsp+68h] [rbp-11h]
  void (__fastcall *v35)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+70h] [rbp-9h]
  struct _KDPC *v36; // [rsp+78h] [rbp-1h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+80h] [rbp+7h] BYREF

  v4 = (struct _NDIS_MINIPORT_BLOCK *)DeferredContext[12];
  v5 = 0LL;
  v6 = -1;
  v36 = Dpc;
  v7 = DeferredContext;
  v34 = SystemArgument1;
  v8 = (int)Dpc;
  v27 = 0LL;
  PcwDatapathEventMask = v4->PcwDatapathEventMask;
  LOWORD(DeferredContext) = 0;
  v28 = 0;
  Number = -1;
  v29 = 0;
  v30 = -1;
  v12 = (int)SystemArgument1;
  if ( PcwDatapathEventMask || v4->PcwDatapathCycleMask )
  {
    LODWORD(DeferredContext) = v4->PcwDatapathCycleMask;
    v28 = PcwDatapathEventMask;
    Buffer = v4->Reserved4.Buffer;
    v29 = (int)DeferredContext;
    v27 = Buffer;
    if ( !Buffer )
    {
      Number = v30;
      LOWORD(DeferredContext) = v29;
      v27 = v4->Reserved4.Buffer;
    }
  }
  if ( ((unsigned __int16)DeferredContext & 0x1000) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v27, 0xCu, 0x23uLL);
    Number = v30;
  }
  if ( (v28 & 1) != 0 )
  {
    if ( Number == -1 )
    {
      Number = KeGetPcr()->Prcb.Number;
      v30 = Number;
    }
    ++*(_QWORD *)((char *)v27 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData);
  }
  if ( dword_1C00E3FC4 != -1 && MiniportSupportsReceiveThrottle(v4)
    || (memset(&WatchdogInformation, 0, sizeof(WatchdogInformation)),
        KeQueryDpcWatchdogInformation(&WatchdogInformation) >= 0)
    && ndisDpcWatchdogLimit
    && WatchdogInformation.DpcWatchdogCount < ndisDpcWatchdogLimit )
  {
    ndisQueueDpcWorkItem(v8, (_DWORD)v7, v12, (_DWORD)SystemArgument2, byte_1C00E3FC1);
    return;
  }
  v14 = (struct _NDIS_MINIPORT_BLOCK *)v7[12];
  v15 = 0;
  v16 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v7[23];
  v17 = (void (__fastcall *)(__int64, PVOID, __int64 *, _QWORD))v7[3];
  v26 = 0LL;
  v18 = v14->PcwDatapathEventMask;
  v35 = v16;
  v31 = 0LL;
  v32 = 0LL;
  v33 = -1;
  if ( v18 || v14->PcwDatapathCycleMask )
  {
    LODWORD(v32) = v18;
    HIDWORD(v32) = v14->PcwDatapathCycleMask;
    v31 = v14->Reserved4.Buffer;
    if ( !v31 )
      v31 = v14->Reserved4.Buffer;
  }
  if ( HIBYTE(dword_1C00E6050) )
  {
    v15 = 1;
    ndisTraceDpcStart(v14, 1u);
    Clock = WmiGetClock(0LL, 0LL, v23);
    v16 = v35;
    v5 = Clock;
  }
  if ( *((_BYTE *)v7 + 4) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 26, 0xFFFFFFFF) != 1 )
      goto LABEL_28;
    goto LABEL_40;
  }
  if ( byte_1C00E3FC1 )
  {
    if ( dword_1C00E3FCC )
    {
      v6 = dword_1C00E3FC4;
    }
    else
    {
      v6 = ndisPeriodicReceivesNblCounts[*(unsigned int *)((char *)v14->PeriodicReceivesNblCountIndex
                                                         + (KeGetPcr()->Prcb.Number << 12))];
      if ( dword_1C00E3FC4 < v6 )
        v6 = dword_1C00E3FC4;
    }
  }
  LODWORD(v26) = v6;
  v19 = BYTE4(v32);
  if ( (v32 & 0x100000000LL) != 0 )
  {
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v31, 0);
    v19 = BYTE4(v32);
  }
  v20 = v7[1];
  if ( *((_BYTE *)v7 + 193) == 1 )
  {
    v21 = (int)v34;
    v16(v20, (unsigned int)v34, SystemArgument2, &v26, 0LL);
  }
  else
  {
    v17(v20, SystemArgument2, &v26, 0LL);
    v21 = (int)v34;
  }
  if ( (v19 & 1) != 0 )
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v31, 0, 0xDuLL);
  if ( (v26 & 0x100000000LL) == 0 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 26, 0xFFFFFFFF) != 1 || !*((_BYTE *)v7 + 4) )
      goto LABEL_28;
LABEL_40:
    KeSetEvent((PRKEVENT)(v7 + 16), 0, 0);
    goto LABEL_28;
  }
  ndisQueueDpcWorkItem((_DWORD)v36, (_DWORD)v7, v21, (_DWORD)SystemArgument2, byte_1C00E3FC1);
LABEL_28:
  if ( v15 )
  {
    v25 = WmiGetClock(0LL, 0LL, v13);
    ndisTraceDpcEnd(v14, 1u, v25 - v5);
  }
}
