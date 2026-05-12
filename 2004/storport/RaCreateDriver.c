/*
 * XREFs of RaCreateDriver @ 0x1C0078C4C
 * Callers:
 *     StorPortInitialize @ 0x1C0034DD0 (StorPortInitialize.c)
 * Callees:
 *     memset @ 0x1C001DA00 (memset.c)
 *     StorSetFunctionExtensionTable @ 0x1C00395C8 (StorSetFunctionExtensionTable.c)
 */

__int64 (__fastcall *__fastcall RaCreateDriver(KSPIN_LOCK *a1))(__int64 a1)
{
  memset(a1, 0, 0x70uLL);
  *(_DWORD *)a1 = 2;
  a1[13] = (KSPIN_LOCK)(a1 + 12);
  a1[12] = (KSPIN_LOCK)(a1 + 12);
  a1[8] = (KSPIN_LOCK)(a1 + 7);
  a1[7] = (KSPIN_LOCK)(a1 + 7);
  KeInitializeSpinLock(a1 + 10);
  return StorSetFunctionExtensionTable();
}
