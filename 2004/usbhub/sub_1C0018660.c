/*
 * XREFs of sub_1C0018660 @ 0x1C0018660
 * Callers:
 *     sub_1C001B724 @ 0x1C001B724 (sub_1C001B724.c)
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0013DA0 @ 0x1C0013DA0 (sub_1C0013DA0.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C001820C @ 0x1C001820C (sub_1C001820C.c)
 *     sub_1C0018750 @ 0x1C0018750 (sub_1C0018750.c)
 */

__int64 __fastcall sub_1C0018660(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r9
  struct _DEVICE_OBJECT *v6; // rsi
  _DWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v13; // [rsp+20h] [rbp-18h]

  sub_1C000FD80(a1, 16, 1970291760, a3, a2);
  v6 = *(struct _DEVICE_OBJECT **)(v5 + 48);
  v7 = sub_1C0011220((__int64)v6);
  v8 = *(_QWORD *)(a3 + 64);
  v9 = (__int64)v7;
  v10 = *(_QWORD *)(v8 + 184);
  sub_1C001820C(*(_QWORD *)(a3 + 72), v6, v8);
  *(_QWORD *)(v9 + 2560) = MEMORY[0xFFFFF78000000014];
  sub_1C0003610(a1, v11, *(_QWORD **)(a3 + 112));
  *(_QWORD *)(a3 + 112) = 0LL;
  LODWORD(v13) = 0;
  sub_1C0013DA0(v9, *(_QWORD *)(a3 + 64), &stru_1C0061E88, *(_DWORD *)(v10 + 24), v13);
  *(_DWORD *)(*(_QWORD *)(a3 + 64) + 48LL) = 0;
  IofCompleteRequest(*(PIRP *)(a3 + 64), 0);
  sub_1C0014E84((ULONG_PTR)v6, *(_QWORD *)(a3 + 64));
  return sub_1C0018750(a1, a3);
}
