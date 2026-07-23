/*
 * XREFs of HvlSkCrashdumpCallbackRoutine @ 0x1404F8F30
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

BOOLEAN __fastcall HvlSkCrashdumpCallbackRoutine(PVOID Context, __int64 Handled)
{
  void *v2; // rbx
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // r8
  ULONG_PTR v5; // rdx
  ULONG v6; // ecx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-18h]

  v2 = qword_140C475A8;
  if ( qword_140C475A8 && (*((_DWORD *)qword_140C475A8 + 1) & 1) != 0 )
  {
    HvlEnlightenments &= 0x2000u;
    ((void (__fastcall *)(PVOID, __int64))off_140C007A0[0])(Context, Handled);
    ((void (__fastcall *)(__int64))off_140C00698[0])(1LL);
    KiHypervisorInitiatedCrashDump = 1;
    v3 = *((_QWORD *)v2 + 4);
    v4 = *((_QWORD *)v2 + 3);
    v5 = *((_QWORD *)v2 + 2);
    v6 = *((_DWORD *)v2 + 2);
    BugCheckParameter4 = *((_QWORD *)v2 + 5);
    PoAllProcIntrDisabled = 1;
    KeBugCheckEx(v6, v5, v4, v3, BugCheckParameter4);
  }
  return 0;
}
