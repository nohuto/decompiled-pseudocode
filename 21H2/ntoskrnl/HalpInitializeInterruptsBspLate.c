/*
 * XREFs of HalpInitializeInterruptsBspLate @ 0x1403B91D4
 * Callers:
 *     HalpInterruptInitSystem @ 0x140A54BA0 (HalpInterruptInitSystem.c)
 * Callees:
 *     HalpInterruptModel @ 0x14036FA84 (HalpInterruptModel.c)
 *     HalpInterruptRemapFixedLines @ 0x1403B9214 (HalpInterruptRemapFixedLines.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x1409098C0 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpUpdatePerDeviceMsiLimitInformation @ 0x140AF8610 (HalpUpdatePerDeviceMsiLimitInformation.c)
 */

__int64 HalpInitializeInterruptsBspLate()
{
  __int64 result; // rax

  if ( (*(_DWORD *)(HalpInterruptController + 228) & 0x100) != 0 && (int)HalpInitializeInterruptRemappingBspLate() < 0 )
    KeBugCheckEx(0x5Cu, 0x7000uLL, 3uLL, 1uLL, 0LL);
  HalpUpdatePerDeviceMsiLimitInformation();
  result = (unsigned int)HalpInterruptModel() - 1;
  if ( (unsigned int)result <= 2 )
    return HalpInterruptRemapFixedLines();
  return result;
}
