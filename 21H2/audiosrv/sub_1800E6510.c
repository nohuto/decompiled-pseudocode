/*
 * XREFs of sub_1800E6510 @ 0x1800E6510
 * Callers:
 *     sub_1800E2748 @ 0x1800E2748 (sub_1800E2748.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E3544 @ 0x1800E3544 (sub_1800E3544.c)
 *     sub_1800E6350 @ 0x1800E6350 (sub_1800E6350.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800E6510(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int Instance; // eax
  unsigned int v9; // ebx
  int v10; // edx
  IUnknown *pProxy; // [rsp+40h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  pProxy = 0LL;
  Instance = CoCreateInstance(&stru_18015BD58, 0LL, 0x17u, &stru_18015BD68, (LPVOID *)&pProxy);
  v9 = Instance;
  if ( Instance < 0 )
  {
    v10 = 1360;
LABEL_9:
    sub_18004BD84(
      (int)retaddr,
      v10,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      Instance);
    goto LABEL_11;
  }
  Instance = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
  v9 = Instance;
  if ( Instance < 0 )
  {
    v10 = 1366;
    goto LABEL_9;
  }
  Instance = ((__int64 (__fastcall *)(IUnknown *, __int64))pProxy->lpVtbl[3].QueryInterface)(pProxy, a3);
  v9 = Instance;
  if ( Instance < 0 )
  {
    v10 = 1368;
    goto LABEL_9;
  }
  sub_1800E3544((__int64 *)(a1 + 88), (__int64)pProxy);
  Instance = sub_1800E6350(a1 + 8, a2, a4);
  v9 = Instance;
  if ( Instance < 0 )
  {
    v10 = 1371;
    goto LABEL_9;
  }
  v9 = 0;
LABEL_11:
  if ( pProxy )
    ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
  return v9;
}
