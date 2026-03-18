/*
 * XREFs of KiResetBootProcessorApicMask @ 0x1408B6234
 * Callers:
 *     KeStartAllProcessors @ 0x140A404CC (KeStartAllProcessors.c)
 * Callees:
 *     <none>
 */

__int64 KiResetBootProcessorApicMask()
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(KiProcessorBlock[0] + 142);
  *(_DWORD *)(KiProcessorBlock[0] + 220) = -(result * *(unsigned __int8 *)(KiProcessorBlock[0] + 143));
  return result;
}
