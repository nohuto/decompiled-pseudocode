/*
 * XREFs of sub_1C0003300 @ 0x1C0003300
 * Callers:
 *     sub_1C0002AF0 @ 0x1C0002AF0 (sub_1C0002AF0.c)
 *     sub_1C0002D20 @ 0x1C0002D20 (sub_1C0002D20.c)
 *     sub_1C0003070 @ 0x1C0003070 (sub_1C0003070.c)
 *     sub_1C0003180 @ 0x1C0003180 (sub_1C0003180.c)
 *     sub_1C003148C @ 0x1C003148C (sub_1C003148C.c)
 *     sub_1C0031548 @ 0x1C0031548 (sub_1C0031548.c)
 *     sub_1C0031600 @ 0x1C0031600 (sub_1C0031600.c)
 * Callees:
 *     sub_1C00022A0 @ 0x1C00022A0 (sub_1C00022A0.c)
 *     sub_1C0005CF0 @ 0x1C0005CF0 (sub_1C0005CF0.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

__int64 __fastcall sub_1C0003300(struct _DEVICE_OBJECT *a1, __int64 a2, unsigned int a3)
{
  unsigned int *DeviceExtension; // rbx
  __int64 v6; // rax

  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  DeviceExtension = (unsigned int *)a1->DeviceExtension;
  if ( !DeviceExtension )
    sub_1C002DC78(a1, 0LL);
  if ( *DeviceExtension != 541218120 )
    sub_1C002DC78(a1, a1->DeviceExtension);
  if ( DeviceExtension[610] != a3 )
  {
    DeviceExtension[610] = a3;
    *(_DWORD *)(a2 + 80) = a3;
    if ( a3 == 3 )
    {
      sub_1C0005CF0(a1);
    }
    else if ( a3 == 5 )
    {
      sub_1C00022A0((__int64)a1, a2);
    }
  }
  *(_DWORD *)(a2 + 76) = 1734964085;
  v6 = 8LL * DeviceExtension[208];
  *((_QWORD *)DeviceExtension + 167) = 0LL;
  DeviceExtension[v6 + 137] = a3;
  KeReleaseSemaphore((PRKSEMAPHORE)(DeviceExtension + 612), 16, 1, 0);
  return a3;
}
