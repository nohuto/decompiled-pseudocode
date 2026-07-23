/*
 * XREFs of HalpPerfInterrupt @ 0x1404BF120
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

char __fastcall HalpPerfInterrupt(__int64 a1)
{
  __int64 v1; // rdi
  bool v2; // bl
  __int64 v3; // rbx
  bool v4; // zf
  void (__fastcall *v5)(__int64); // rax

  v1 = *(_QWORD *)(a1 + 136);
  v2 = 0;
  if ( (__int64 (__fastcall **)())HalpProfileInterface[0] == EmonProfileInterface
    && (HalpProfileFeatures & 1) != 0
    && (__readmsr(0x38Eu) & 0x80000000000000LL) != 0 )
  {
    if ( (_BYTE)KdDebuggerNotPresent && (__readmsr(0x570u) & 0x111100000000LL) != 0 )
      KeBugCheckEx(0x17Bu, 0LL, 0x570uLL, __readmsr(0x570u), 0x111100000000uLL);
    v3 = *((_QWORD *)HalpProfileInterface[0] + 12);
    v4 = v3 == 0;
    if ( v3 )
    {
      (*((void (__fastcall **)(__int64))HalpProfileInterface[0] + 12))(v1);
      v4 = v3 == 0;
    }
    v2 = !v4;
    if ( HalpProcessorTraceInterruptHandler )
      HalpProcessorTraceInterruptHandler(v1);
  }
  v5 = (void (__fastcall *)(__int64))*((_QWORD *)HalpProfileInterface[0] + 12);
  if ( v5 && !v2 )
    v5(v1);
  if ( HalpPerfInterruptHandler )
  {
    HalpPerfInterruptHandler(v1);
  }
  else
  {
    (*((void (__fastcall **)(__int64))HalpProfileInterface[0] + 5))(v1);
    ((void (__fastcall *)(_QWORD))off_140C009A8[0])(0LL);
  }
  return 1;
}
