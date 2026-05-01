/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_986ce24b7bdadb191c95143f5dacb41c___::_scalar_deleting_destructor_ @ 0x18031FF60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E9330 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_986ce24b7bdadb191c95143f5dacb41c___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1 + 4);
  v4 = a1[3];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = a1[2];
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
