/*
 * XREFs of CmKeyBodyNeedsVirtualImage @ 0x1406ED174
 * Callers:
 *     NtSetInformationKey @ 0x1405FA5C0 (NtSetInformationKey.c)
 *     NtSetValueKey @ 0x140618C70 (NtSetValueKey.c)
 *     NtDeleteKey @ 0x140692140 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x140693CE0 (NtDeleteValueKey.c)
 *     NtRenameKey @ 0x1408642D0 (NtRenameKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1406231D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockKcb @ 0x140626230 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 */

bool __fastcall CmKeyBodyNeedsVirtualImage(__int64 a1)
{
  bool v1; // di
  bool v3; // si
  __int64 v4; // r14
  __int64 v5; // rbx
  ULONG_PTR v6; // rcx
  bool v7; // r8

  v1 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
  CmpLockRegistry();
  v5 = *(_QWORD *)(a1 + 8);
  ExAcquirePushLockSharedEx(v5 + 48, 0LL);
  _InterlockedAdd((volatile signed __int32 *)(v5 + 56), 1u);
  if ( !CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    v3 = (*(_BYTE *)(v4 + 4152) & 0x10) != 0;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  if ( !*(_WORD *)(v6 + 66) )
    v7 = v3;
  if ( (*(_DWORD *)(a1 + 48) & 0x10) == 0 )
    v1 = v7;
  CmpUnlockKcb(v6);
  CmpUnlockRegistry();
  return v1;
}
