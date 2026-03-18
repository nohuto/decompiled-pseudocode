/*
 * XREFs of sub_1C0013558 @ 0x1C0013558
 * Callers:
 *     sub_1C0015264 @ 0x1C0015264 (sub_1C0015264.c)
 *     sub_1C005A1A8 @ 0x1C005A1A8 (sub_1C005A1A8.c)
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 *     sub_1C0015F10 @ 0x1C0015F10 (sub_1C0015F10.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C0013558(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  _DWORD *v4; // r15
  __int64 v5; // rbp
  _QWORD *v6; // r14
  _DWORD *v7; // rax
  int v8; // ebx
  __int64 v9; // rdx
  unsigned int v11; // [rsp+90h] [rbp+18h] BYREF

  v11 = 0;
  v4 = sub_1C000F050((__int64)a1);
  sub_1C000FD80((__int64)a1, 0x10000, 1383290224, a2, 0LL);
  v5 = (int)sub_1C0015F10(a1, 2228243LL, &v11, 0LL);
  sub_1C000FD80((__int64)a1, 8, 1970303827, v11, v5);
  v6 = (_QWORD *)sub_1C0004060((__int64)a1, a2, (__int64)a1, 1347777128, 0);
  if ( (int)v5 >= 0 )
  {
    v7 = sub_1C000F050((__int64)a1);
    if ( *((_QWORD *)v7 + 591) )
      LODWORD(v5) = (*((__int64 (__fastcall **)(_QWORD))v7 + 591))(*((_QWORD *)v7 + 149));
    else
      LODWORD(v5) = -1073741637;
  }
  sub_1C0012400((__int64)a1, 0LL, 0LL, &stru_1C0061E58);
  KeWaitForSingleObject(v4 + 782, Executive, 0, 0, 0LL);
  v8 = v4[781];
  KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 782), 16, 1, 0);
  if ( v8 == 5 )
  {
    sub_1C0012810(a1, 9u, a2);
    sub_1C0012400((__int64)a1, 0LL, 0LL, &stru_1C0061F48);
    KeSetEvent((PRKEVENT)v4 + 141, 0, 0);
    sub_1C004A608((_DWORD)a1, 0, 137, 0, 0, v5, 0, (__int64)aSshubC, 2306, 0);
  }
  if ( v6 )
    sub_1C0003610((__int64)a1, v9, v6);
  sub_1C000FD80((__int64)a1, 0x10000, 1383290232, 0LL, (int)v5);
  return (unsigned int)v5;
}
