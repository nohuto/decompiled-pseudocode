/*
 * XREFs of ?GetRegistration@WindowWrapperBase@@UEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@XZ @ 0x1800782C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall WindowWrapperBase::GetRegistration(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 224LL))(*(_QWORD *)(a1 + 272));
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = *(_QWORD *)(a1 + 336);
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = *(_QWORD *)(a1 + 336);
  }
  *a2 = *(_QWORD *)(a1 + 328);
  a2[1] = v4;
  return a2;
}
