/*
 * XREFs of CmpUnlockHashEntryByIndex @ 0x1408782D0
 * Callers:
 *     CmpSearchKeyControlBlockTreeEx @ 0x1408719A4 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x1406A3308 (CmpDeleteHive.c)
 */

void __fastcall CmpUnlockHashEntryByIndex(volatile signed __int32 *P, unsigned int a2)
{
  ULONG_PTR v3; // rcx

  v3 = *((_QWORD *)P + 205) + 24LL * a2;
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockEx(v3, 0LL);
  if ( _InterlockedExchangeAdd(P + 1068, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
}
