/*
 * XREFs of _UmfdEnableDriver@12 @ 0xB57FC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall UmfdEnableDriver(int a1, int a2, _DWORD *a3)
{
  a3[2] = &UmfdDDIs;
  a3[1] = 19;
  *a3 = 196608;
  return 1;
}
