/*
 * XREFs of ??$GetWeakReference@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@@details@wil@@YAJPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAPEAUIWeakReference@@@Z @ 0x180105C94
 * Callers:
 *     ??$com_weak_copy_failfast@AEAV?$com_ptr_t@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAV?$com_ptr_t@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@Uerr_exception_policy@wil@@@0@@Z @ 0x180106228 (--$com_weak_copy_failfast@AEAV-$com_ptr_t@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::GetWeakReference<Windows::Internal::Input::MPCManager::IMPCManagerClient>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        _QWORD *a2)
{
  __int64 (__fastcall **v3)(_QWORD, GUID *, __int64 *); // rax
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = *a1;
  v6 = 0LL;
  v4 = (*v3)(a1, &GUID_00000038_0000_0000_c000_000000000046, &v6);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 24LL))(v6, a2);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v4;
}
