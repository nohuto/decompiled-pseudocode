/*
 * XREFs of HvlCrashdumpCallbackRoutine @ 0x1404F3380
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

BOOLEAN __fastcall HvlCrashdumpCallbackRoutine(PVOID Context, __int64 Handled)
{
  ULONG_PTR *v2; // rbx

  v2 = (ULONG_PTR *)qword_140C47528;
  if ( qword_140C47528 && (*((_DWORD *)qword_140C47528 + 1) & 1) != 0 )
  {
    ((void (__fastcall *)(__int64, __int64))off_140C00698[0])(1LL, Handled);
    KiHypervisorInitiatedCrashDump = 1;
    KeBugCheckEx(0x20001u, v2[23], v2[24], v2[25], v2[26]);
  }
  return 0;
}
