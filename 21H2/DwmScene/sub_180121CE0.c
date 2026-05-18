/*
 * XREFs of sub_180121CE0 @ 0x180121CE0
 * Callers:
 *     sub_180121C74 @ 0x180121C74 (sub_180121C74.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180122DDC @ 0x180122DDC (sub_180122DDC.c)
 *     _Init_thread_footer @ 0x180124618 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180124678 (_Init_thread_header.c)
 *     _Mtx_init_in_situ @ 0x180125276 (_Mtx_init_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180121CE0(__int64 a1)
{
  __int64 *v2; // rax
  volatile signed __int32 *v3; // rbx
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v6; // [rsp+28h] [rbp-10h]

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  Mtx_init_in_situ((_Mtx_t)(a1 + 88), 2);
  if ( dword_180221FBC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_180221FBC);
    if ( dword_180221FBC == -1 )
    {
      dword_180221FB8 = 0;
      Init_thread_footer(&dword_180221FBC);
    }
  }
  *(_DWORD *)(a1 + 20) = _InterlockedIncrement(&dword_180221FB8);
  v2 = (__int64 *)sub_180122DDC(v5);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)a1, v2);
  v3 = v6;
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  return a1;
}
