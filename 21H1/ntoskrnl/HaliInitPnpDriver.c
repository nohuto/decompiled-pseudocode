/*
 * XREFs of HaliInitPnpDriver @ 0x14078C720
 * Callers:
 *     <none>
 * Callees:
 *     IoCreateDriver @ 0x14078C3D0 (IoCreateDriver.c)
 */

int HaliInitPnpDriver()
{
  __int128 v1; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&v1 = 2228256LL;
  *((_QWORD *)&v1 + 1) = L"\\Driver\\ACPI_HAL";
  return IoCreateDriver(&v1, (_DMA_OPERATIONS *)HalpDriverEntry);
}
