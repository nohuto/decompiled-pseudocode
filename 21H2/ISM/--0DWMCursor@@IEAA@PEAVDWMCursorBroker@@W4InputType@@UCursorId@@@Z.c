/*
 * XREFs of ??0DWMCursor@@IEAA@PEAVDWMCursorBroker@@W4InputType@@UCursorId@@@Z @ 0x180021C98
 * Callers:
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x180021D80 (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursor::DWMCursor(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)(a1 + 16) = &RefCountedObject::`vftable';
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)a1 = &DWMCursor::`vftable'{for `ICursor3D'};
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 8) = &DWMCursor::`vftable'{for `IGetClosestInteractiveBounds'};
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 16) = &DWMCursor::`vftable'{for `RefCountedObject'};
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 88) = 100LL;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_BYTE *)(a1 + 152) = 0;
  if ( *(_QWORD *)(a1 + 32) != a2 )
  {
    v10 = a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v10);
    v8 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *(_QWORD *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 52) = a3;
  result = a1;
  *(_WORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_OWORD *)(a1 + 112) = 0LL;
  return result;
}
