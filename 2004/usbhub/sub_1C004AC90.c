/*
 * XREFs of sub_1C004AC90 @ 0x1C004AC90
 * Callers:
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001B88C @ 0x1C001B88C (sub_1C001B88C.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C004AD84 @ 0x1C004AD84 (sub_1C004AD84.c)
 *     sub_1C004AE9C @ 0x1C004AE9C (sub_1C004AE9C.c)
 */

void __fastcall sub_1C004AC90(__int64 a1, __int64 a2, __int64 a3)
{
  char *v5; // r10
  __int64 v6; // rcx
  _DWORD *v7; // rax
  void (__fastcall *v8)(__int64, __int64); // rax
  void *v9; // rsi

  sub_1C000F050(a1);
  sub_1C000FD80(a1, 128, 1702385495, 0LL, a3);
  v5 = (char *)sub_1C004AD84(a1, *(unsigned int *)(a3 + 16));
  v6 = 0LL;
  v7 = &unk_1C005F7F0;
  while ( *(_DWORD *)(a3 + 16) != *v7 )
  {
    v6 = (unsigned int)(v6 + 1);
    v7 += 6;
    if ( (unsigned int)v6 >= 0x8E )
      goto LABEL_6;
  }
  v5 = (char *)&unk_1C005F7F0 + 24 * v6;
LABEL_6:
  if ( HIDWORD(stru_1C006B480.DeviceQueue.DeviceListHead.Blink) )
    sub_1C000FD80(a1, 128, 1768908081, a3, 0LL);
  if ( v5 )
  {
    v8 = (void (__fastcall *)(__int64, __int64))*((_QWORD *)v5 + 2);
    if ( v8 )
      v8(a1, a3);
  }
  v9 = (void *)sub_1C004AE9C(a1, a3);
  sub_1C001B88C(a1, a3);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
}
