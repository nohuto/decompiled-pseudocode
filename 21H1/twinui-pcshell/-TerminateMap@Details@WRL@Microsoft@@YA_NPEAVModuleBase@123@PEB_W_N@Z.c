/*
 * XREFs of ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEB_W_N@Z @ 0x180090E60
 * Callers:
 *     ??_G?$Module@$00VInProcModule@Details@Platform@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180090D10 (--_G-$Module@$00VInProcModule@Details@Platform@@@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??_GInProcModule@Details@Platform@@UEAAPEAXI@Z @ 0x180090D70 (--_GInProcModule@Details@Platform@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Microsoft::WRL::Details::TerminateMap(
        Microsoft::WRL::Details *this,
        struct Microsoft::WRL::Details::ModuleBase *a2,
        const wchar_t *a3)
{
  char v3; // r12
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r15
  bool i; // cf
  struct Microsoft::WRL::Details::ModuleBase *v9; // rcx
  char *v10; // r8
  int v11; // edx
  int v12; // eax
  RTL_SRWLOCK *v13; // rdi
  void **v14; // rax
  void *v15; // rbp
  PVOID v16; // rax

  v3 = (char)a3;
  v6 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 32LL))(this) + 8;
  v7 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 48LL))(this);
  for ( i = v6 < v7; i; i = v6 < v7 )
  {
    if ( *(_QWORD *)v6 )
    {
      if ( !a2 )
        goto LABEL_11;
      v9 = *(struct Microsoft::WRL::Details::ModuleBase **)(*(_QWORD *)v6 + 32LL);
      if ( v9 )
      {
        v10 = (char *)(a2 - v9);
        do
        {
          v11 = *(unsigned __int16 *)&v10[(_QWORD)v9];
          v12 = *(unsigned __int16 *)v9 - v11;
          if ( v12 )
            break;
          v9 = (struct Microsoft::WRL::Details::ModuleBase *)((char *)v9 + 2);
        }
        while ( v11 );
        if ( !v12 )
        {
LABEL_11:
          if ( (*(unsigned int (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 24LL))(this) && !v3 )
            return 0;
          if ( **(_QWORD **)(*(_QWORD *)v6 + 24LL) )
          {
            v13 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 56LL))(this);
            AcquireSRWLockExclusive(v13);
            v14 = *(void ***)(*(_QWORD *)v6 + 24LL);
            v15 = *v14;
            if ( *v14 )
            {
              *v14 = 0LL;
              if ( v13 )
                ReleaseSRWLockExclusive(v13);
              v16 = DecodePointer(v15);
              (*(void (__fastcall **)(PVOID))(*(_QWORD *)v16 + 16LL))(v16);
            }
            else if ( v13 )
            {
              ReleaseSRWLockExclusive(v13);
            }
          }
        }
      }
    }
    v6 += 8LL;
  }
  return (*(unsigned int (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 24LL))(this) == 0;
}
