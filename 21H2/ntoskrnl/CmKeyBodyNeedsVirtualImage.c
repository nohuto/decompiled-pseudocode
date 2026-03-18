/*
 * XREFs of CmKeyBodyNeedsVirtualImage @ 0x140915D20
 * Callers:
 *     NtDeleteKey @ 0x14067DE90 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x140714980 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14071FAA0 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x1407C0160 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x14090EF60 (NtRenameKey.c)
 * Callees:
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140AB42D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AB45A0 (CmpIsKeyDeletedForKeyBody.c)
 */

bool __fastcall CmKeyBodyNeedsVirtualImage(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // di
  bool v5; // bl
  __int64 v6; // rbp
  __int64 v7; // rcx
  bool v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v3 = 0;
  v5 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
  CmpLockRegistry(a1, a2, a3);
  CmpLockKcbShared(*(_QWORD *)(a1 + 8));
  if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    v5 = (*(_BYTE *)(v6 + 4112) & 0x10) != 0;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 0;
  if ( !*(_WORD *)(v7 + 66) )
    v8 = v5;
  if ( (*(_DWORD *)(a1 + 48) & 0x10) == 0 )
    v3 = v8;
  CmpUnlockKcb(v7);
  CmpUnlockRegistry(v10, v9, v11, v12);
  return v3;
}
