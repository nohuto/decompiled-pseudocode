/*
 * XREFs of ??2?$DXGQUOTAALLOCATOR@$00$0HFHAEDEG@@@SAPEAX_K@Z @ 0x1C0068A04
 * Callers:
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1C0068D84 (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N0_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0069140 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N0_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 * Callees:
 *     <none>
 */

PVOID DXGQUOTAALLOCATOR<1,1970291526>::operator new()
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x58uLL, 0x75704346u);
}
