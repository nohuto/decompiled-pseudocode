/*
 * XREFs of ?ndisMInitializeMiniportBlockFront@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0131568
 * Callers:
 *     ?ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0031F08 (-ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisReinitializeMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0135F3C (-ndisReinitializeMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisInitializeULongRef@@YAXPEAU_ULONG_REFERENCE@@@Z @ 0x1C00320EC (-ndisInitializeULongRef@@YAXPEAU_ULONG_REFERENCE@@@Z.c)
 *     memset @ 0x1C00403C0 (memset.c)
 */

void __fastcall ndisMInitializeMiniportBlockFront(char *DeferredContext, int a2)
{
  __int64 v3; // rcx
  char v4; // al
  char v5; // al
  size_t v6; // r8
  char v7; // al
  char *v8; // rcx
  _QWORD *v9; // rdx
  char *v10; // rcx
  __int64 v11; // r8

  v3 = *((_QWORD *)DeferredContext + 470);
  *((_DWORD *)DeferredContext + 380) = 0;
  *(_WORD *)DeferredContext = 273;
  *((_WORD *)DeferredContext + 1) = a2;
  *((_QWORD *)DeferredContext + 22) = DeferredContext;
  *((_DWORD *)DeferredContext + 562) = 1;
  *((_QWORD *)DeferredContext + 68) = &ndisGlobalTriageBlock;
  v4 = *(_BYTE *)(v3 + 24);
  if ( (unsigned __int8)v4 < 6u )
  {
    DeferredContext[3148] = 6;
    v5 = 0;
  }
  else
  {
    DeferredContext[3148] = v4;
    v5 = *(_BYTE *)(v3 + 25);
  }
  DeferredContext[3149] = v5;
  v6 = ndisMaxNumberOfProcessors;
  DeferredContext[32] = *(_BYTE *)(v3 + 24);
  v7 = *(_BYTE *)(v3 + 25);
  *((_DWORD *)DeferredContext + 142) = 0;
  v6 *= 8LL;
  DeferredContext[33] = v7;
  v8 = &DeferredContext[a2 - v6];
  DeferredContext[88] = 0;
  *((_QWORD *)DeferredContext + 200) = v8;
  memset(v8, 0, v6);
  *((_DWORD *)DeferredContext + 30) |= 0x400000u;
  *((_QWORD *)DeferredContext + 275) = DeferredContext + 2192;
  *((_QWORD *)DeferredContext + 274) = DeferredContext + 2192;
  *((_QWORD *)DeferredContext + 341) = DeferredContext + 2720;
  *((_QWORD *)DeferredContext + 340) = DeferredContext + 2720;
  *((_QWORD *)DeferredContext + 434) = DeferredContext + 3464;
  *((_QWORD *)DeferredContext + 433) = DeferredContext + 3464;
  *((_QWORD *)DeferredContext + 438) = DeferredContext + 3496;
  *((_QWORD *)DeferredContext + 437) = DeferredContext + 3496;
  *((_QWORD *)DeferredContext + 449) = DeferredContext + 3584;
  *((_QWORD *)DeferredContext + 448) = DeferredContext + 3584;
  *((_QWORD *)DeferredContext + 170) = DeferredContext + 1352;
  *((_QWORD *)DeferredContext + 169) = DeferredContext + 1352;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 397);
  *((_QWORD *)DeferredContext + 407) = 0LL;
  *((_QWORD *)DeferredContext + 409) = ndisPeriodicReceivesWorker;
  *((_QWORD *)DeferredContext + 410) = DeferredContext;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 12);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 250);
  *((_QWORD *)DeferredContext + 17) = DeferredContext + 128;
  *((_QWORD *)DeferredContext + 16) = DeferredContext + 128;
  if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 470) + 26LL) & 2) != 0 )
    KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 235);
  KeInitializeDpc((PRKDPC)(DeferredContext + 1528), (PKDEFERRED_ROUTINE)ndisMDeferredDpc, DeferredContext);
  *((_QWORD *)DeferredContext + 242) = 0LL;
  *((_QWORD *)DeferredContext + 244) = ndisQueuedCheckForHang;
  *((_QWORD *)DeferredContext + 245) = DeferredContext;
  ndisInitializeULongRef((struct _ULONG_REFERENCE *)DeferredContext + 277);
  *((_DWORD *)DeferredContext + 1110) = 0;
  v9 = DeferredContext + 880;
  v10 = DeferredContext + 1632;
  v11 = 6LL;
  do
  {
    *(_OWORD *)v10 = 0LL;
    *((_QWORD *)v10 + 2) = 0LL;
    *(_QWORD *)v10 = *v9;
    *v9 = v10;
    v10 += 24;
    ++v9;
    --v11;
  }
  while ( v11 );
  *((_DWORD *)DeferredContext + 502) = 6;
}
