/*
 * XREFs of ?DisconnectFromStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z @ 0x140001CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessSubmix::DisconnectFromStreamGroup(
        CProcessSubmix *this,
        __int64 (__fastcall ***a2)(struct IStreamGroup *, GUID *, __int64 *))
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 (__fastcall **v5)(struct IStreamGroup *, GUID *, __int64 *); // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v5 = *a2;
  v11 = 0LL;
  v6 = (*v5)((struct IStreamGroup *)a2, &GUID_51181bd2_bd3f_43ae_b0d1_1cf3dfda303a, &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp",
      (const char *)(unsigned int)v6,
      v9);
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 2) + 112LL))((char *)this + 16, v11);
    v7 = 0;
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
