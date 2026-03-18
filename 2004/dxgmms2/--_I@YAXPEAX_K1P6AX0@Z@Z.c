/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001183C
 * Callers:
 *     ??_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C00117F8 (--_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 *     ??_GVIDMM_PARTITION@@QEAAPEAXI@Z @ 0x1C0026CEC (--_GVIDMM_PARTITION@@QEAAPEAXI@Z.c)
 *     ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x1C0029EA4 (--_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00AEABC (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C00CF690 (--1VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx
  char *v7; // rdi

  if ( a3 )
  {
    v5 = a3;
    v7 = &a1[a3 * a2];
    do
    {
      v7 -= a2;
      a4(v7);
      --v5;
    }
    while ( v5 );
  }
}
