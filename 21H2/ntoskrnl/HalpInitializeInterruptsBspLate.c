/*
 * XREFs of HalpInitializeInterruptsBspLate @ 0x1403CDB2C
 * Callers:
 *     HalpInterruptInitSystem @ 0x14099B890 (HalpInterruptInitSystem.c)
 * Callees:
 *     HalpInterruptModel @ 0x14037B354 (HalpInterruptModel.c)
 *     HalpInterruptRemapFixedLines @ 0x1403CDB6C (HalpInterruptRemapFixedLines.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x140865730 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpUpdatePerDeviceMsiLimitInformation @ 0x140A72004 (HalpUpdatePerDeviceMsiLimitInformation.c)
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
