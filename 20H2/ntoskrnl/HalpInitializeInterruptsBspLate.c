/*
 * XREFs of HalpInitializeInterruptsBspLate @ 0x1403CD14C
 * Callers:
 *     HalpInterruptInitSystem @ 0x1409A1570 (HalpInterruptInitSystem.c)
 * Callees:
 *     HalpInterruptModel @ 0x14037B104 (HalpInterruptModel.c)
 *     HalpInterruptRemapFixedLines @ 0x1403CD18C (HalpInterruptRemapFixedLines.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x140867B20 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpUpdatePerDeviceMsiLimitInformation @ 0x140A75084 (HalpUpdatePerDeviceMsiLimitInformation.c)
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
