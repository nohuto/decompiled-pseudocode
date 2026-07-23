/*
 * XREFs of PopFxAcpiForwardNotification @ 0x14057DFAC
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x14057DEA8 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x140281C90 (IoAcquireRemoveLockEx.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopFxAcpiForwardNotification(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  NTSTATUS v8; // edi
  char v9; // si

  v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 272), (PVOID)0x72466F50, &Src, 1u, 0x20u);
  if ( v8 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 80) + 112LL))(a2, a3);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 276), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 280), 0, 0);
    *a5 = v9;
  }
  return (unsigned int)v8;
}
