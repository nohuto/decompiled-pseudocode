/*
 * XREFs of CmpInsertCallbackInListByAltitude @ 0x1405FC65C
 * Callers:
 *     CmpRegisterCallbackInternal @ 0x1405FC558 (CmpRegisterCallbackInternal.c)
 * Callees:
 *     RtlCompareAltitudes @ 0x140238F20 (RtlCompareAltitudes.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 */

__int64 __fastcall CmpInsertCallbackInListByAltitude(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebx
  __int64 v6; // rsi
  LONG v7; // eax
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  *(_QWORD *)(a1 + 24) = ++CmpCallbackCookie;
  v6 = CallbackListHead;
  if ( (__int64 *)CallbackListHead != &CallbackListHead )
  {
    do
    {
      v7 = RtlCompareAltitudes((PCUNICODE_STRING)(v6 + 48), (PCUNICODE_STRING)(a1 + 48));
      if ( v7 )
      {
        if ( v7 < 0 )
          break;
      }
      else if ( !a2 )
      {
        goto LABEL_12;
      }
      v6 = *(_QWORD *)v6;
    }
    while ( (__int64 *)v6 != &CallbackListHead );
    if ( !v7 && !a2 )
    {
LABEL_12:
      v3 = -1071906799;
      goto LABEL_8;
    }
  }
  v8 = *(__int64 **)(v6 + 8);
  v9 = *v8;
  if ( *(__int64 **)(*v8 + 8) != v8 )
    __fastfail(3u);
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)(v9 + 8) = a1;
  *v8 = a1;
  _InterlockedIncrement(&CmpCallBackCount);
LABEL_8:
  ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
  return v3;
}
