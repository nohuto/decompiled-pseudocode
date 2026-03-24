/*
 * XREFs of CcGetNumberOfMappedPages @ 0x140394B70
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 */

char __fastcall CcGetNumberOfMappedPages(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rdi
  char result; // al

  v3 = *(_QWORD *)(a1 + 8);
  *a2 = 0LL;
  *a3 = 0LL;
  if ( v3 )
  {
    ExAcquirePushLockSharedEx(v3 + 104, 0LL);
    *a2 = (unsigned __int64)*(unsigned int *)(v3 + 540) << 6;
    *a3 = (unsigned __int64)*(unsigned int *)(v3 + 544) << 6;
    return ExReleasePushLockEx(v3 + 104, 0LL);
  }
  return result;
}
