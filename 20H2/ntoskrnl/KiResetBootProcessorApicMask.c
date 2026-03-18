/*
 * XREFs of KiResetBootProcessorApicMask @ 0x1408BD174
 * Callers:
 *     KeStartAllProcessors @ 0x140A4BFC8 (KeStartAllProcessors.c)
 * Callees:
 *     <none>
 */

__int64 KiResetBootProcessorApicMask()
{
  __int64 result; // rax

  result = (unsigned int)-(*(_DWORD *)(KiProcessorBlock[0] + 152) * *(_DWORD *)(KiProcessorBlock[0] + 156));
  *(_DWORD *)(KiProcessorBlock[0] + 220) = result;
  return result;
}
