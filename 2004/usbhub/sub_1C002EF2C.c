/*
 * XREFs of sub_1C002EF2C @ 0x1C002EF2C
 * Callers:
 *     sub_1C002F27C @ 0x1C002F27C (sub_1C002F27C.c)
 *     sub_1C002F348 @ 0x1C002F348 (sub_1C002F348.c)
 *     sub_1C002F3E0 @ 0x1C002F3E0 (sub_1C002F3E0.c)
 *     sub_1C002F4AC @ 0x1C002F4AC (sub_1C002F4AC.c)
 *     sub_1C002F594 @ 0x1C002F594 (sub_1C002F594.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

__int64 __fastcall sub_1C002EF2C(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v6; // rax
  __int64 v7; // rcx

  v6 = sub_1C000F050(*(_QWORD *)(a1 + 8));
  KeWaitForSingleObject(v6 + 1280, Executive, 0, 0, 0LL);
  *(_DWORD *)(a1 + 112) = 2017742416;
  *(_DWORD *)(a1 + 116) = a3;
  v7 = ((unsigned __int8)*(_DWORD *)(a2 + 2828) + 1) & 7;
  *(_DWORD *)(a2 + 2828) = v7;
  v7 *= 32LL;
  *(_DWORD *)(v7 + a2 + 2488) = a3;
  *(_DWORD *)(v7 + a2 + 2492) = *(_DWORD *)(a2 + 2824);
  return *(unsigned int *)(a2 + 2824);
}
