/*
 * XREFs of CmpTryConvertKcbLockSharedToExclusive @ 0x14071EE50
 * Callers:
 *     CmpEnlistKeyBody @ 0x1406C1694 (CmpEnlistKeyBody.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpTryConvertKcbLockSharedToExclusive(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 1LL, 17LL) != 17 )
    return 0;
  *(_QWORD *)(a1 + 56) = KeGetCurrentThread();
  return v1;
}
