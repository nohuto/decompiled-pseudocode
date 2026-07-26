/*
 * XREFs of ??_GLwfBindProperties@@QEAAPEAXI@Z @ 0x1C00AC3E8
 * Callers:
 *     ??1NdisBindBuilderGlobal@@QEAA@XZ @ 0x1C012396C (--1NdisBindBuilderGlobal@@QEAA@XZ.c)
 *     ?moveElements@?$KArray@ULwfBindProperties@@$00@Rtl@@AEAAXKKK@Z @ 0x1C0124300 (-moveElements@-$KArray@ULwfBindProperties@@$00@Rtl@@AEAAXKKK@Z.c)
 *     ?reserve@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K@Z @ 0x1C012575C (-reserve@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K@Z.c)
 * Callees:
 *     <none>
 */

LwfBindProperties *__fastcall LwfBindProperties::`scalar deleting destructor'(LwfBindProperties *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x7272414Bu);
    *((_QWORD *)this + 5) = 0LL;
    *((_DWORD *)this + 9) = 0;
    *((_DWORD *)this + 8) = 0;
  }
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x7272414Bu);
    *((_QWORD *)this + 3) = 0LL;
    *((_DWORD *)this + 5) = 0;
    *((_DWORD *)this + 4) = 0;
  }
  return this;
}
