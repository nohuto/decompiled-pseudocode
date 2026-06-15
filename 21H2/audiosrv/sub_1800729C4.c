/*
 * XREFs of sub_1800729C4 @ 0x1800729C4
 * Callers:
 *     sub_180136264 @ 0x180136264 (sub_180136264.c)
 * Callees:
 *     sub_180036468 @ 0x180036468 (sub_180036468.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800729C4(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // ebx

  v6 = sub_18006A18C(0x18uLL);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    sub_180036468((__int64)v6);
    v9 = *a4;
    *a4 = 0LL;
    v7 = v8;
    v8[2] = v9;
    *v8 = &off_18014B120;
  }
  v10 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v10;
}
