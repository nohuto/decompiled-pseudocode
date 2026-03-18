/*
 * XREFs of _UPDWORDValue@4 @ 0x141A3B
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

int __thiscall UPDWORDValue(void *this)
{
  return *(_DWORD *)UPDWORDPointer(this);
}
