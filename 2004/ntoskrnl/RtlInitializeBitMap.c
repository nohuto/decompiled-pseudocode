/*
 * XREFs of RtlInitializeBitMap @ 0x140340CE0
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x1409A75E8 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitializeBitMap(PRTL_BITMAP BitMapHeader, PULONG BitMapBuffer, ULONG SizeOfBitMap)
{
  BitMapHeader->SizeOfBitMap = SizeOfBitMap;
  BitMapHeader->Buffer = BitMapBuffer;
}
