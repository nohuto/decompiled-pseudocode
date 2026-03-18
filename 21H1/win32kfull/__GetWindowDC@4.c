/*
 * XREFs of __GetWindowDC@4 @ 0x154393
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     <none>
 */

int __thiscall _GetWindowDC(void *this)
{
  return _GetDCEx(this, 0, 65537);
}
