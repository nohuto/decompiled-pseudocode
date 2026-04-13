/*
 * XREFs of ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x1800242F0
 * Callers:
 *     DllCanUnloadNow @ 0x180025450 (DllCanUnloadNow.c)
 *     ??_G?$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180026A70 (--_G-$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Microsoft::WRL::Details::TerminateMap(
        Microsoft::WRL::Details *this,
        struct Microsoft::WRL::Details::ModuleBase *a2,
        const unsigned __int16 *a3)
{
  char v3; // r15
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r14
  bool i; // cf
  RTL_SRWLOCK *v8; // rdi
  void **v9; // rax
  void *v10; // rbp
  PVOID v11; // rax

  v3 = (char)a3;
  v5 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *, struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)this + 32LL))(
         this,
         a2)
     + 8;
  v6 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 48LL))(this);
  for ( i = v5 < v6; i; i = v5 < v6 )
  {
    if ( *(_QWORD *)v5 )
    {
      if ( (*(unsigned int (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 24LL))(this) && !v3 )
        return 0;
      if ( **(_QWORD **)(*(_QWORD *)v5 + 24LL) )
      {
        v8 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 56LL))(this);
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
  return (*(unsigned int (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 24LL))(this) == 0;
}
