/*
 * XREFs of ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HFHAEDEG@@@SAPEAX_K@Z @ 0x1C007C12C
 * Callers:
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1C007C744 (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C007D264 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGQUOTAALLOCATOR<256,1970291526>::operator new(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ExAllocatePool2(257LL, 88LL, 1970291526LL, a4);
}
