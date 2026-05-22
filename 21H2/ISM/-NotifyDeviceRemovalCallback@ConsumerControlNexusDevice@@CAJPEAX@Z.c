/*
 * XREFs of ?NotifyDeviceRemovalCallback@ConsumerControlNexusDevice@@CAJPEAX@Z @ 0x1800A38F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::NotifyDeviceRemovalCallback(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx
  void (*v3)(void); // rax
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  int v8; // eax
  unsigned int v9; // edi
  __int64 *v10; // rbx
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 *v13; // rbx
  void *v14; // rcx
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]

  if ( !a1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x80070057LL);
    goto LABEL_3;
  }
  if ( !*a1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x184,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x80070057LL);
    v1 = a1;
    v4 = (void *)a1[1];
    if ( !v4 )
      goto LABEL_4;
    operator delete(v4, (const struct std::nothrow_t *)0x60C);
    a1[1] = 0LL;
LABEL_3:
    v1 = a1;
LABEL_4:
    if ( !v1 )
      return 2147942487LL;
    v2 = *v1;
    if ( !*v1 )
    {
LABEL_17:
      operator delete(v1, (const struct std::nothrow_t *)0x10);
      return 2147942487LL;
    }
    *v1 = 0LL;
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
LABEL_16:
    v3();
    goto LABEL_17;
  }
  if ( !a1[1] )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x185,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x80070057LL);
    v1 = a1;
    v5 = (void *)a1[1];
    if ( v5 )
    {
      operator delete(v5, (const struct std::nothrow_t *)0x60C);
      a1[1] = 0LL;
      v1 = a1;
    }
    if ( !v1 )
      return 2147942487LL;
    v6 = *v1;
    if ( !*v1 )
      goto LABEL_17;
    *v1 = 0LL;
    v3 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
    goto LABEL_16;
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a1 + 56LL))(*a1);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v13 = a1;
    v14 = (void *)a1[1];
    if ( v14 )
    {
      operator delete(v14, (const struct std::nothrow_t *)0x60C);
      a1[1] = 0LL;
      v13 = a1;
    }
    if ( v13 )
    {
      v15 = *v13;
      if ( *v13 )
      {
        *v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      operator delete(v13, (const struct std::nothrow_t *)0x10);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x187,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)v8);
    v10 = a1;
    v11 = (void *)a1[1];
    if ( v11 )
    {
      operator delete(v11, (const struct std::nothrow_t *)0x60C);
      a1[1] = 0LL;
      v10 = a1;
    }
    if ( v10 )
    {
      v12 = *v10;
      if ( *v10 )
      {
        *v10 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      operator delete(v10, (const struct std::nothrow_t *)0x10);
    }
    return v9;
  }
}
