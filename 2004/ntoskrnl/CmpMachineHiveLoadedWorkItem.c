/*
 * XREFs of CmpMachineHiveLoadedWorkItem @ 0x1407B8DF0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpMachineHiveCallbackFatalFilter @ 0x140866B10 (CmpMachineHiveCallbackFatalFilter.c)
 */

char __fastcall CmpMachineHiveLoadedWorkItem(__int64 a1)
{
  ULONG_PTR v2; // r14
  ULONG_PTR v3; // rsi
  _QWORD *v4; // rax
  __int64 *v5; // rbx
  __int64 v7; // rcx

  v2 = a1 + 144;
  v3 = a1 + 144;
  ExAcquirePushLockExclusiveEx(a1 + 144, 0LL);
  do
  {
    while ( 1 )
    {
      v4 = (_QWORD *)(a1 + 152);
      v5 = *(__int64 **)(a1 + 152);
      if ( v5 == (__int64 *)(a1 + 152) )
        break;
      v7 = *v5;
      if ( (_QWORD *)v5[1] != v4 || *(__int64 **)(v7 + 8) != v5 )
        __fastfail(3u);
      *v4 = v7;
      *(_QWORD *)(v7 + 8) = v4;
      *((_WORD *)v5 + 18) = 1;
      ExReleasePushLockEx(v2, 0LL);
      ((void (__fastcall *)(__int64))v5[2])(v5[3]);
      ExAcquirePushLockExclusiveEx(v3, 0LL);
      *((_BYTE *)v5 + 36) = 0;
      if ( *((_BYTE *)v5 + 38) )
        KeSetEvent(&CmpMachineHiveCallbackEvent, 0, 0);
    }
  }
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 176), 0xFFFFFFFF) > 1 );
  return ExReleasePushLockEx(v3, 0LL);
}
