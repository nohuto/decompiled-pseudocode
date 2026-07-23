/*
 * XREFs of ExReturnPoolQuota @ 0x14022CF2C
 * Callers:
 *     IopCompleteRequest @ 0x14034D870 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x14035E2C0 (IopFreeIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x1406D3AE0 (IopFreeMiniCompletionPacket.c)
 * Callees:
 *     PsReturnPoolQuota @ 0x14022CFB0 (PsReturnPoolQuota.c)
 *     ExpGetBilledProcess @ 0x14022CFE8 (ExpGetBilledProcess.c)
 *     ExGetHeapFromVA @ 0x1403059CC (ExGetHeapFromVA.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14034D0C0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CDEBC (ExpHpIsSpecialPoolHeap.c)
 */

void __fastcall ExReturnPoolQuota(ULONG_PTR a1)
{
  char v2; // di
  struct _KPROCESS *BilledProcess; // rsi
  __int64 v4; // r8
  __int64 HeapFromVA; // rax
  __int64 v6; // rcx
  __int16 v7; // ax

  if ( !ExpSpecialAllocations || (HeapFromVA = ExGetHeapFromVA(a1), !(unsigned int)ExpHpIsSpecialPoolHeap(HeapFromVA)) )
  {
    v2 = *(_BYTE *)(a1 - 13);
    if ( (v2 & 8) != 0 )
    {
      BilledProcess = (struct _KPROCESS *)ExpGetBilledProcess(a1 - 16);
      if ( BilledProcess )
      {
        v4 = (unsigned __int8)*(_WORD *)(a1 - 14);
        if ( (v2 & 4) != 0 )
        {
          v6 = a1 - 16 - 16LL * (unsigned __int8)*(_WORD *)(a1 - 16);
          v7 = *(_WORD *)(v6 + 2);
          *(_BYTE *)(v6 + 3) &= ~8u;
          v4 = (unsigned __int8)v7;
        }
        *(_BYTE *)(a1 - 13) &= ~8u;
        PsReturnPoolQuota(BilledProcess, (POOL_TYPE)(v2 & 1), 16 * v4);
        ObDereferenceObjectDeferDeleteWithTag(BilledProcess, *(_DWORD *)(a1 - 12));
      }
    }
  }
}
