/*
 * XREFs of ??_GCOperationWaiter@@UEAAPEAXI@Z @ 0x180072FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

COperationWaiter *__fastcall COperationWaiter::`scalar deleting destructor'(COperationWaiter *this, char a2)
{
  char *v4; // rcx
  __int64 v5; // rcx

  v4 = (char *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  *((_DWORD *)this + 9) = -1073741823;
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
