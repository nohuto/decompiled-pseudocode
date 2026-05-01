/*
 * XREFs of CrmRegistrationReadyQueueRemove @ 0x18002F65C
 * Callers:
 *     CrmActivityCleanup @ 0x18002F330 (CrmActivityCleanup.c)
 *     CrmActivityListenerCallback @ 0x1800304B0 (CrmActivityListenerCallback.c)
 * Callees:
 *     CrmLogRegistrationReadyQueueRemove @ 0x18002E788 (CrmLogRegistrationReadyQueueRemove.c)
 *     CrmRegistrationNotify @ 0x18002E974 (CrmRegistrationNotify.c)
 */

void __fastcall CrmRegistrationReadyQueueRemove(__int64 a1, __int64 a2, int a3)
{
  int v6; // ebx
  _QWORD *v7; // rax
  __int64 v8; // r9
  _QWORD *v9; // rcx

  v6 = 0;
  RtlAcquireSRWLockExclusive(&unk_1800B3EB8);
  dword_1800B3EC0 = GetCurrentThreadId();
  v7 = (_QWORD *)(a2 + 24);
  v8 = *(_QWORD *)(a2 + 24);
  if ( v8 != a2 + 24 )
  {
    v6 = 1;
    if ( *(_QWORD **)(v8 + 8) != v7 || (v9 = *(_QWORD **)(a2 + 32), (_QWORD *)*v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
  }
  *(_QWORD *)(a2 + 32) = a2 + 24;
  *v7 = v7;
  dword_1800B3EC0 = 0;
  if ( a3 )
  {
    RtlConvertSRWLockExclusiveToShared(&unk_1800B3EB8);
    CrmRegistrationNotify(a1, a2, 1);
    RtlReleaseSRWLockShared(&unk_1800B3EB8);
  }
  else
  {
    RtlReleaseSRWLockExclusive(&unk_1800B3EB8);
  }
  if ( v6 )
    CrmLogRegistrationReadyQueueRemove();
}
