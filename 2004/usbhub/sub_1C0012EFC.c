/*
 * XREFs of sub_1C0012EFC @ 0x1C0012EFC
 * Callers:
 *     sub_1C00109A0 @ 0x1C00109A0 (sub_1C00109A0.c)
 *     sub_1C0018B00 @ 0x1C0018B00 (sub_1C0018B00.c)
 *     sub_1C0018BE0 @ 0x1C0018BE0 (sub_1C0018BE0.c)
 *     sub_1C0058BE0 @ 0x1C0058BE0 (sub_1C0058BE0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0015C80 @ 0x1C0015C80 (sub_1C0015C80.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1C0012EFC(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // r9d
  unsigned int v10; // r14d
  _DWORD *v11; // rax
  KSPIN_LOCK *v12; // rbp
  KIRQL v13; // r14
  __int64 v14; // r9
  int v15; // r10d
  _DWORD *v16; // rax

  v6 = sub_1C0011220(a2);
  v7 = sub_1C0015C80(a1, a2, a3, 1232364915LL);
  v8 = v7;
  if ( v7 )
  {
    sub_1C000FD80(a1, 32, 1919306034, 0LL, v7);
    v10 = v9 + 1;
    v6[446] = v9 + 1;
    v11 = sub_1C000F050(a1);
    if ( *((_QWORD *)v11 + 560) )
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD))v11 + 560))(*((_QWORD *)v11 + 529), v8, v10);
    v12 = (KSPIN_LOCK *)(sub_1C000F050(a1) + 930);
    v13 = KeAcquireSpinLockRaiseToDpc(v12);
    sub_1C000FD80(a1, 256, 1146498353, v8, a3);
    sub_1C000FD80(a1, v15, 1146498354, v14, 1232364915LL);
    v16 = sub_1C000F050(a1);
    if ( *((_QWORD *)v16 + 559) )
      (*((void (__fastcall **)(_QWORD, __int64, __int64, __int64))v16 + 559))(
        *((_QWORD *)v16 + 529),
        v8,
        a3,
        1232364915LL);
    KeReleaseSpinLock(v12, v13);
  }
}
