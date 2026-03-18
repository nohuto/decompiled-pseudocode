/*
 * XREFs of RtlInitializeBitMap @ 0x140311A90
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x1409AD558 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitializeBitMap(PRTL_BITMAP BitMapHeader, PULONG BitMapBuffer, ULONG SizeOfBitMap)
{
  BitMapHeader->SizeOfBitMap = SizeOfBitMap;
  BitMapHeader->Buffer = BitMapBuffer;
}
