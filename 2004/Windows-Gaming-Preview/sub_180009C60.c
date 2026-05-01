/*
 * XREFs of sub_180009C60 @ 0x180009C60
 * Callers:
 *     DllCanUnloadNow @ 0x180009760 (DllCanUnloadNow.c)
 *     sub_1800099B0 @ 0x1800099B0 (sub_1800099B0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall sub_180009C60(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r14
  bool i; // cf
  RTL_SRWLOCK *v8; // rdi
  void **v9; // rax
  void *v10; // rbp
  PVOID v11; // rax

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) + 8;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  for ( i = v5 < v6; i; i = v5 < v6 )
  {
    if ( *(_QWORD *)v5 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) && !a3 )
        return 0;
      if ( **(_QWORD **)(*(_QWORD *)v5 + 24LL) )
      {
        v8 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
        AcquireSRWLockExclusive(v8);
        v9 = *(void ***)(*(_QWORD *)v5 + 24LL);
        v10 = *v9;
        if ( *v9 )
        {
          *v9 = 0LL;
          if ( v8 )
            ReleaseSRWLockExclusive(v8);
          v11 = DecodePointer(v10);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v11 + 16LL))(v11);
        }
        else if ( v8 )
        {
          ReleaseSRWLockExclusive(v8);
        }
      }
    }
    v5 += 8LL;
  }
  return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) == 0;
}
