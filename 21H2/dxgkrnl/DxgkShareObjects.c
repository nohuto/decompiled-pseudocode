/*
 * XREFs of DxgkShareObjects @ 0x1C01A61E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     DxgkShareObjectsInternal @ 0x1C01A5DA0 (DxgkShareObjectsInternal.c)
 */

__int64 __fastcall DxgkShareObjects(unsigned int a1, char *Src, __int64 a3, ACCESS_MASK DesiredAccess, _QWORD *a5)
{
  __int64 v9; // rcx

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry1(1LL, 982LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsGetCurrentThreadPreviousMode() == UserMode",
      982LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LOBYTE(v9) = 1;
  return DxgkShareObjectsInternal(v9, 1, 0LL, a1, Src, a3, DesiredAccess, a5, 0LL);
}
