/*
 * XREFs of ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18016D65C
 * Callers:
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18016D0F0 (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@UIApplicationVie.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x18016D90C (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::GetCurrentObject(
        unsigned int *a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  __int64 i; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (__int64 *)(a1 + 2);
  v3 = *((_QWORD *)a1 + 1);
  if ( v3 )
  {
    *v1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  for ( i = *a1; ; *a1 = i )
  {
    result = *((_QWORD *)a1 + 2);
    if ( (unsigned int)i >= *(_DWORD *)(result + 8) )
      break;
    v5 = *v1;
    v6 = *(_QWORD *)result;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      i = *a1;
    }
    result = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v6 + 32LL))(
               v6,
               i,
               &GUID_727f9e97_76ee_497b_a942_b6371328485c,
               v1);
    if ( (int)result >= 0 )
      break;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
      (const char *)(unsigned int)result);
    i = *a1 + 1;
  }
  return result;
}
