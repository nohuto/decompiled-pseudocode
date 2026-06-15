/*
 * XREFs of ?GetGroupingParam@CAudioSession@@UEAAJPEAU_GUID@@@Z @ 0x180045CD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::GetGroupingParam(CAudioSession *this, struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  _QWORD *v4; // rsi
  _QWORD *i; // rdi
  unsigned int Pid; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(CAudioSession *, struct _GUID *))(*(_QWORD *)this + 104LL))(this, a2);
  Pid = 0;
  I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( Pid == *((_DWORD *)this + 69) )
  {
    v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    v4 = (_QWORD *)*((_QWORD *)this + 98);
    for ( i = (_QWORD *)*((_QWORD *)this + 97); i != v4; ++i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 448LL))(*i);
    if ( v3 )
      LeaveCriticalSection(v3);
  }
  return 0LL;
}
