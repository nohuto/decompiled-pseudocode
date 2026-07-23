/*
 * XREFs of CmKeyBodyNeedsVirtualImage @ 0x140621E0C
 * Callers:
 *     NtSetValueKey @ 0x140658BE0 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x14065DF20 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x140661030 (NtDeleteKey.c)
 *     NtSetInformationKey @ 0x1406E3160 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x140868D90 (NtRenameKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1407139E0 (CmpIsKeyDeletedForKeyBody.c)
 */

bool __fastcall CmKeyBodyNeedsVirtualImage(__int64 a1)
{
  bool v1; // di
  bool v3; // si
  __int64 v4; // r14
  __int64 v5; // rbx
  ULONG_PTR v6; // rcx
  bool v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx

  v1 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
  CmpLockRegistry();
  v5 = *(_QWORD *)(a1 + 8);
  ExAcquirePushLockSharedEx(v5 + 48, 0LL);
  _InterlockedAdd((volatile signed __int32 *)(v5 + 56), 1u);
  if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    v3 = (*(_BYTE *)(v4 + 4152) & 0x10) != 0;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  if ( !*(_WORD *)(v6 + 66) )
    v7 = v3;
  if ( (*(_DWORD *)(a1 + 48) & 0x10) == 0 )
    v1 = v7;
  CmpUnlockKcb(v6);
  CmpUnlockRegistry(v9, v8);
  return v1;
}
