/*
 * XREFs of PopFxAcpiForwardPepWorkRequest @ 0x14057E0E4
 * Callers:
 *     PopFxProcessWork @ 0x140281D14 (PopFxProcessWork.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x140281C90 (IoAcquireRemoveLockEx.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x14056962C (PopFxBugCheck.c)
 */

LONG __fastcall PopFxAcpiForwardPepWorkRequest(ULONG_PTR BugCheckParameter2, int *a2)
{
  LONG result; // eax
  _DWORD v5[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]
  __int64 v7; // [rsp+40h] [rbp-18h]
  int *v8; // [rsp+48h] [rbp-10h]

  if ( !*(_QWORD *)(BugCheckParameter2 + 80) )
    PopFxBugCheck(0x668uLL, BugCheckParameter2, *a2, 0LL);
  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 272), (PVOID)0x77466F50, &Src, 1u, 0x20u);
  if ( result >= 0 )
  {
    v5[1] = 0;
    v7 = 0LL;
    v5[0] = 0;
    v6 = *((_QWORD *)&PopFxPlatformInterface + 1);
    v8 = a2;
    ((void (__fastcall *)(_DWORD *))PopFxPlatformInterface)(v5);
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 276), 0xFFFFFFFF);
    if ( result == 1 )
      return KeSetEvent((PRKEVENT)(BugCheckParameter2 + 280), 0, 0);
  }
  return result;
}
