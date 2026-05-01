/*
 * XREFs of ??_GCThreadRefHost@@UEAAPEAXI@Z @ 0x180213B20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CThreadRefHost *__fastcall CThreadRefHost::`scalar deleting destructor'(CThreadRefHost *this, char a2)
{
  __int64 v4; // rcx
  struct tagMSG Msg; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)this = &CThreadRefHost::`vftable';
  SHSetThreadRef(0LL);
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  while ( *((_DWORD *)this + 2) )
  {
    if ( GetMessageW(&Msg, 0LL, 0, 0) )
    {
      TranslateMessage(&Msg);
      DispatchMessageW(&Msg);
    }
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
