/*
 * XREFs of HalpInitializeInterruptsBspLate @ 0x1403CDC9C
 * Callers:
 *     HalpInterruptInitSystem @ 0x14099C890 (HalpInterruptInitSystem.c)
 * Callees:
 *     HalpInterruptModel @ 0x14037AEA4 (HalpInterruptModel.c)
 *     HalpInterruptRemapFixedLines @ 0x1403CDCDC (HalpInterruptRemapFixedLines.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x140865890 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpUpdatePerDeviceMsiLimitInformation @ 0x140A73004 (HalpUpdatePerDeviceMsiLimitInformation.c)
 */

__int64 HalpInitializeInterruptsBspLate()
{
  __int64 result; // rax

  if ( (*(_DWORD *)(HalpInterruptController + 220) & 0x100) != 0 && (int)HalpInitializeInterruptRemappingBspLate() < 0 )
    KeBugCheckEx(0x5Cu, 0x7000uLL, 3uLL, 1uLL, 0LL);
  HalpUpdatePerDeviceMsiLimitInformation();
  result = (unsigned int)HalpInterruptModel() - 1;
  if ( (unsigned int)result <= 2 )
    return HalpInterruptRemapFixedLines();
  return result;
}
