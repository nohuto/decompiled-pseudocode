/*
 * XREFs of KiResetBootProcessorApicMask @ 0x1408B7554
 * Callers:
 *     KeStartAllProcessors @ 0x140A45D28 (KeStartAllProcessors.c)
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
