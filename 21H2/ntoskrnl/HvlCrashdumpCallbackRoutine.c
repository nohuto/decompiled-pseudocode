/*
 * XREFs of HvlCrashdumpCallbackRoutine @ 0x1404F8DE0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

BOOLEAN __fastcall HvlCrashdumpCallbackRoutine(PVOID Context, __int64 Handled)
{
  ULONG_PTR *v2; // rbx

  v2 = (ULONG_PTR *)qword_140C47508;
  if ( qword_140C47508 && (*((_DWORD *)qword_140C47508 + 1) & 1) != 0 )
  {
    ((void (__fastcall *)(__int64, __int64))off_140C00698[0])(1LL, Handled);
    KiHypervisorInitiatedCrashDump = 1;
    KeBugCheckEx(0x20001u, v2[23], v2[24], v2[25], v2[26]);
  }
  return 0;
}
