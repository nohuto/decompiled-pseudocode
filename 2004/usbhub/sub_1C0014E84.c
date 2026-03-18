/*
 * XREFs of sub_1C0014E84 @ 0x1C0014E84
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 *     sub_1C00099C0 @ 0x1C00099C0 (sub_1C00099C0.c)
 *     sub_1C00109A0 @ 0x1C00109A0 (sub_1C00109A0.c)
 *     sub_1C001507C @ 0x1C001507C (sub_1C001507C.c)
 *     sub_1C0016DC0 @ 0x1C0016DC0 (sub_1C0016DC0.c)
 *     sub_1C00173C0 @ 0x1C00173C0 (sub_1C00173C0.c)
 *     sub_1C0018660 @ 0x1C0018660 (sub_1C0018660.c)
 *     CsqCompleteCanceledIrp @ 0x1C001CD00 (CsqCompleteCanceledIrp.c)
 *     sub_1C002A3CC @ 0x1C002A3CC (sub_1C002A3CC.c)
 *     sub_1C002A530 @ 0x1C002A530 (sub_1C002A530.c)
 *     sub_1C002A5E8 @ 0x1C002A5E8 (sub_1C002A5E8.c)
 *     sub_1C002A7DC @ 0x1C002A7DC (sub_1C002A7DC.c)
 *     sub_1C002ABC4 @ 0x1C002ABC4 (sub_1C002ABC4.c)
 *     sub_1C002D410 @ 0x1C002D410 (sub_1C002D410.c)
 *     sub_1C002FF30 @ 0x1C002FF30 (sub_1C002FF30.c)
 *     sub_1C0030090 @ 0x1C0030090 (sub_1C0030090.c)
 *     sub_1C00300F4 @ 0x1C00300F4 (sub_1C00300F4.c)
 *     sub_1C00301E8 @ 0x1C00301E8 (sub_1C00301E8.c)
 *     sub_1C00302D0 @ 0x1C00302D0 (sub_1C00302D0.c)
 *     sub_1C00304E0 @ 0x1C00304E0 (sub_1C00304E0.c)
 *     sub_1C00308D0 @ 0x1C00308D0 (sub_1C00308D0.c)
 *     sub_1C0030934 @ 0x1C0030934 (sub_1C0030934.c)
 *     sub_1C00309F4 @ 0x1C00309F4 (sub_1C00309F4.c)
 *     sub_1C0030C08 @ 0x1C0030C08 (sub_1C0030C08.c)
 *     sub_1C0030CB0 @ 0x1C0030CB0 (sub_1C0030CB0.c)
 *     sub_1C0030D50 @ 0x1C0030D50 (sub_1C0030D50.c)
 *     sub_1C0030E40 @ 0x1C0030E40 (sub_1C0030E40.c)
 *     sub_1C0030F00 @ 0x1C0030F00 (sub_1C0030F00.c)
 *     sub_1C003C5D0 @ 0x1C003C5D0 (sub_1C003C5D0.c)
 *     sub_1C0054958 @ 0x1C0054958 (sub_1C0054958.c)
 *     sub_1C0054AFC @ 0x1C0054AFC (sub_1C0054AFC.c)
 *     sub_1C00556F0 @ 0x1C00556F0 (sub_1C00556F0.c)
 *     sub_1C00578D0 @ 0x1C00578D0 (sub_1C00578D0.c)
 *     sub_1C0057950 @ 0x1C0057950 (sub_1C0057950.c)
 *     sub_1C0058F24 @ 0x1C0058F24 (sub_1C0058F24.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C00417F0 @ 0x1C00417F0 (sub_1C00417F0.c)
 */

void __fastcall sub_1C0014E84(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  _DWORD *v4; // rdi
  KSPIN_LOCK *v5; // rbp
  KIRQL v6; // al
  _QWORD *v7; // r9
  _QWORD *v8; // rbx
  KIRQL v9; // r15
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  int v12; // eax

  v4 = sub_1C0011220(BugCheckParameter3);
  v5 = (KSPIN_LOCK *)(v4 + 304);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4 + 152);
  v7 = 0LL;
  v8 = v4 + 306;
  v9 = v6;
  if ( *((_DWORD **)v4 + 153) != v4 + 306 )
    v7 = (_QWORD *)*((_QWORD *)v4 + 153);
  if ( !v7 || v7 == v8 )
  {
LABEL_14:
    v12 = v4[316];
    if ( !v12 )
    {
      if ( BugCheckParameter3 )
        sub_1C00417F0(BugCheckParameter3);
      KeBugCheckEx(0xFEu, 8uLL, 4uLL, BugCheckParameter3, BugCheckParameter4);
    }
    v4[316] = v12 - 1;
  }
  else
  {
    while ( 1 )
    {
      v10 = (_QWORD *)*v7;
      if ( v7[2] == BugCheckParameter4 )
        break;
      v7 = (_QWORD *)*v7;
      if ( v10 == v8 )
        goto LABEL_14;
    }
    if ( (_QWORD *)v10[1] != v7 || (v11 = (_QWORD *)v7[1], (_QWORD *)*v11 != v7) )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = v11;
    ExFreePoolWithTag(v7 - 1, 0);
  }
  if ( (_QWORD *)*v8 != v8 || v4[316] )
  {
    KeReleaseSpinLock(v5, v9);
  }
  else
  {
    KeReleaseSpinLock(v5, v9);
    KeSetEvent((PRKEVENT)(v4 + 310), 0, 0);
  }
}
