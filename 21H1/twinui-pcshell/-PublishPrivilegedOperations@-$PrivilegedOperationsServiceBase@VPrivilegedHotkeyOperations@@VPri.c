/*
 * XREFs of ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x1802082A4
 * Callers:
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x180208398 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<PrivilegedHotkeyOperations,PrivilegedWindowGroupingOperations>::PublishPrivilegedOperations(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *a3 - *(_QWORD *)&GUID_a993a76e_0909_48bb_b0e9_4d8236263896.Data1;
  if ( *a3 == *(_QWORD *)&GUID_a993a76e_0909_48bb_b0e9_4d8236263896.Data1 )
    v3 = a3[1] - *(_QWORD *)GUID_a993a76e_0909_48bb_b0e9_4d8236263896.Data4;
  if ( v3 )
    return PrivilegedOperationsServiceBase<PrivilegedWindowGroupingOperations>::PublishPrivilegedOperations(
             a1,
             a2,
             a3,
             a2);
  v4 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD))(*(_QWORD *)a2 + 24LL))(
         a2,
         &GUID_a993a76e_0909_48bb_b0e9_4d8236263896,
         *(_QWORD *)(a1 + 16));
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x298,
      (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
