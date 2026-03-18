/*
 * XREFs of ExReturnPoolQuota @ 0x14030E6FC
 * Callers:
 *     IopFreeIrp @ 0x140218F70 (IopFreeIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x1405EB920 (IopFreeMiniCompletionPacket.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140217F10 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExGetHeapFromVA @ 0x1402380B4 (ExGetHeapFromVA.c)
 *     PsReturnPoolQuota @ 0x14030E780 (PsReturnPoolQuota.c)
 *     ExpGetBilledProcess @ 0x14030E7B8 (ExpGetBilledProcess.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CD36C (ExpHpIsSpecialPoolHeap.c)
 */

void __fastcall ExReturnPoolQuota(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  char v4; // di
  struct _KPROCESS *BilledProcess; // rsi
  __int64 v6; // r8
  __int64 HeapFromVA; // rax
  __int64 v8; // rcx
  __int16 v9; // ax

  if ( !ExpSpecialAllocations
    || (HeapFromVA = ExGetHeapFromVA(a1, a2, a3), !(unsigned int)ExpHpIsSpecialPoolHeap(HeapFromVA)) )
  {
    v4 = *(_BYTE *)(a1 - 13);
    if ( (v4 & 8) != 0 )
    {
      BilledProcess = (struct _KPROCESS *)ExpGetBilledProcess(a1 - 16);
      if ( BilledProcess )
      {
        v6 = (unsigned __int8)*(_WORD *)(a1 - 14);
        if ( (v4 & 4) != 0 )
        {
          v8 = a1 - 16 - 16LL * (unsigned __int8)*(_WORD *)(a1 - 16);
          v9 = *(_WORD *)(v8 + 2);
          *(_BYTE *)(v8 + 3) &= ~8u;
          v6 = (unsigned __int8)v9;
        }
        *(_BYTE *)(a1 - 13) &= ~8u;
        PsReturnPoolQuota(BilledProcess, (POOL_TYPE)(v4 & 1), 16 * v6);
        ObDereferenceObjectDeferDeleteWithTag(BilledProcess, *(_DWORD *)(a1 - 12));
      }
    }
  }
}
