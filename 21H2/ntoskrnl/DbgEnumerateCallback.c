/*
 * XREFs of DbgEnumerateCallback @ 0x140389E40
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall DbgEnumerateCallback(_UNKNOWN ****a1)
{
  _UNKNOWN ***v2; // rdx
  __int64 v3; // rdi
  _UNKNOWN **v4; // rbx
  __int64 v5; // rsi

  ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
  v2 = (_UNKNOWN ***)&RtlpDebugPrintCallbackList;
  if ( *a1 )
    v2 = *a1;
  v3 = (unsigned __int64)*a1 & -(__int64)(*a1 != 0LL);
  v4 = *v2;
  v5 = 0LL;
  while ( v4 != &RtlpDebugPrintCallbackList )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v4 - 2) )
    {
      v5 = (__int64)*(v4 - 1);
      *a1 = (_UNKNOWN ***)v4;
      break;
    }
    v4 = (_UNKNOWN **)*v4;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
  if ( v3 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v3 - 16));
  return v5;
}
