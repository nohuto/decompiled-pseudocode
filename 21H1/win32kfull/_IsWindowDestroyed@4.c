/*
 * XREFs of _IsWindowDestroyed@4 @ 0x16F3FE
 * Callers:
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     ?InitInputTransformList@@YGPAUtagINPUTTRANSFORMLIST@@PAUtagWND@@@Z @ 0x15E64D (-InitInputTransformList@@YGPAUtagINPUTTRANSFORMLIST@@PAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall IsWindowDestroyed(_DWORD *this)
{
  return *(unsigned __int8 *)(this[5] + 11) >> 7;
}
