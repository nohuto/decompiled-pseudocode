/*
 * XREFs of VfPendingMoreProcessingRequired @ 0x1409D2890
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x1409C26B0 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x14059D13C (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x14059D184 (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x1409C33A0 (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     ViPendingDelayCompletion @ 0x1409D2C68 (ViPendingDelayCompletion.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x1409DD798 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409DD91C (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfPendingMoreProcessingRequired(int a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v8; // esi
  __int64 v9; // rax
  _QWORD *v10; // rdi
  int v11; // eax
  KIRQL v12; // al
  bool v13; // zf
  unsigned __int64 v14; // rbx
  KIRQL v16[24]; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0;
  v9 = VfIrpDatabaseEntryFindAndLock(a2);
  v10 = (_QWORD *)v9;
  if ( v9 )
  {
    if ( a3 == *(_QWORD *)(v9 + 216) )
    {
      v11 = *(_DWORD *)(v9 + 56);
      if ( v11 >= 0 )
      {
        v8 = 1;
        *((_DWORD *)v10 + 14) = v11 | 0x80000000;
      }
    }
    VfIrpDatabaseEntryReleaseLock(v10);
    if ( v8 )
    {
      v8 = ViPendingDelayCompletion(a1, (_DWORD)v10, a3, a4, a5);
      if ( !v8 )
      {
        v12 = KeAcquireSpinLockRaiseToDpc(v10 + 1);
        v13 = (*((_DWORD *)v10 + 6))-- == 1;
        *((_BYTE *)v10 + 16) = v12;
        v16[0] = 0;
        if ( v13 )
        {
          ViIrpDatabaseAcquireLockExclusive(v16);
          v14 = *v10;
          ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD))v10[6])(v10, *v10, v8 + 1);
          *v10 = 0LL;
          VfUtilAddressRangeRemoveCheckEmpty(
            (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v14 >> 12))),
            v14);
          ViIrpDatabaseReleaseLockExclusive(v16[0]);
        }
        _InterlockedDecrement((volatile signed __int32 *)v10 + 5);
        VfIrpDatabaseEntryReleaseLock(v10);
      }
    }
  }
  return v8;
}
