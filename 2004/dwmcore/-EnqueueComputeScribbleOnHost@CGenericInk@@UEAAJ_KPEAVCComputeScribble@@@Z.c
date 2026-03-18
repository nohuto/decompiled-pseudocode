/*
 * XREFs of ?EnqueueComputeScribbleOnHost@CGenericInk@@UEAAJ_KPEAVCComputeScribble@@@Z @ 0x1801C3FE0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     memcpy_0 @ 0x1800EED1B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0pxqtq_EventWriteTransfer @ 0x1801C4CB0 (McTemplateU0pxqtq_EventWriteTransfer.c)
 *     ?EnsureVailPerFrameDataHostReaderQueue@CSuperWetSource@@QEAAJI@Z @ 0x1801C4EE8 (-EnsureVailPerFrameDataHostReaderQueue@CSuperWetSource@@QEAAJI@Z.c)
 */

__int64 __fastcall CGenericInk::EnqueueComputeScribbleOnHost(void **this, __int64 a2, struct CComputeScribble *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rbp
  char *v10; // rbx
  __int64 (__fastcall *v11)(struct CComputeScribble *, _QWORD *); // rax
  int v12; // eax
  unsigned int v13; // esi
  const void *v14; // r9
  volatile signed __int32 **v15; // r14
  int v16; // edx
  _QWORD v17[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = CSuperWetSource::EnsureVailPerFrameDataHostReaderQueue((CSuperWetSource *)this, a2);
  if ( v6 < 0 )
  {
    v7 = 379LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  memset_0(this[4], 0, 0x7CuLL);
  v9 = (*(unsigned int (__fastcall **)(struct CComputeScribble *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( (unsigned __int64)(v9 + 24) > 0x7C )
  {
    v6 = -2147024809;
    v7 = 389LL;
    goto LABEL_3;
  }
  v10 = (char *)this[4];
  if ( v10 == (char *)-20LL && (_DWORD)v9 )
    goto LABEL_11;
  v11 = *(__int64 (__fastcall **)(struct CComputeScribble *, _QWORD *))(*(_QWORD *)a3 + 48LL);
  v17[1] = v10 + 20;
  v17[0] = v9;
  v12 = v11(a3, v17);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18B,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
  *(_QWORD *)v10 = a2 + 1;
  *((_DWORD *)v10 + 2) = *((_DWORD *)this + 42);
  v10[12] = 1;
  *((_DWORD *)v10 + 4) = v9;
  v14 = this[4];
  v15 = (volatile signed __int32 **)this[3];
  if ( !v14 )
  {
LABEL_11:
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  memcpy_0(
    (char *)*v15 + (unsigned int)_InterlockedExchangeAdd(*v15, 1u) % *((_DWORD *)v15 + 3) * *((_DWORD *)v15 + 2) + 8,
    v14,
    *((unsigned int *)v15 + 2));
  _InterlockedExchangeAdd(*v15 + 1, 1u);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    McTemplateU0pxqtq_EventWriteTransfer(
      (unsigned __int8)v10[12],
      v16,
      (_DWORD)this - 72,
      *(_QWORD *)v10,
      *((_DWORD *)v10 + 2),
      v10[12],
      *((_DWORD *)v10 + 4));
  return 0LL;
}
