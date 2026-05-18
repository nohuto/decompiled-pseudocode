/*
 * XREFs of sub_18011C410 @ 0x18011C410
 * Callers:
 *     sub_18011C3A4 @ 0x18011C3A4 (sub_18011C3A4.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18011D50C @ 0x18011D50C (sub_18011D50C.c)
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18011EDA8 (_Init_thread_header.c)
 *     _Mtx_init_in_situ @ 0x18011F9A6 (_Mtx_init_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18011C410(__int64 a1)
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
  if ( dword_18021AC8C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18021AC8C);
    if ( dword_18021AC8C == -1 )
    {
      dword_18021AC88 = 0;
      Init_thread_footer(&dword_18021AC8C);
    }
  }
  *(_DWORD *)(a1 + 20) = _InterlockedIncrement(&dword_18021AC88);
  v2 = (__int64 *)sub_18011D50C(v5);
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
