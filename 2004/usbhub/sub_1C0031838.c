/*
 * XREFs of sub_1C0031838 @ 0x1C0031838
 * Callers:
 *     sub_1C001A550 @ 0x1C001A550 (sub_1C001A550.c)
 *     sub_1C001A82C @ 0x1C001A82C (sub_1C001A82C.c)
 *     sub_1C001A964 @ 0x1C001A964 (sub_1C001A964.c)
 *     sub_1C003D2E4 @ 0x1C003D2E4 (sub_1C003D2E4.c)
 *     sub_1C003D3D0 @ 0x1C003D3D0 (sub_1C003D3D0.c)
 *     sub_1C003D4C8 @ 0x1C003D4C8 (sub_1C003D4C8.c)
 *     sub_1C003D790 @ 0x1C003D790 (sub_1C003D790.c)
 *     sub_1C003D8B8 @ 0x1C003D8B8 (sub_1C003D8B8.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

__int64 __fastcall sub_1C0031838(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _KSEMAPHORE *v5; // rax
  __int64 Limit; // rcx

  v5 = (struct _KSEMAPHORE *)sub_1C000F050(a1);
  v5[87].Limit = a3;
  *(_DWORD *)(a2 + 68) = a3;
  *(_DWORD *)(a2 + 64) = 1734964085;
  Limit = (unsigned int)v5[28].Limit;
  v5[41].Header.WaitListHead.Flink = 0LL;
  v5[Limit + 29].Header.SignalState = a3;
  KeReleaseSemaphore(v5 + 88, 16, 1, 0);
  return a3;
}
