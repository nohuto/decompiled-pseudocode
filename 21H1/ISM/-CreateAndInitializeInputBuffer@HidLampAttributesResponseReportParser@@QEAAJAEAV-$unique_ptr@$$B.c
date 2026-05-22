/*
 * XREFs of ?CreateAndInitializeInputBuffer@HidLampAttributesResponseReportParser@@QEAAJAEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800AAA78
 * Callers:
 *     ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800A8008 (-ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJPEAULampAttributesResponseDeviceReport@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D2B0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009BCD0 (--4-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall HidLampAttributesResponseReportParser::CreateAndInitializeInputBuffer(
        __int64 a1,
        void **a2,
        _DWORD *a3)
{
  void *v6; // rax
  _BYTE *v7; // rbx
  const struct std::nothrow_t *v9; // rdx
  void *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  v6 = operator new[](*(unsigned int *)(a1 + 20), (const struct std::nothrow_t *)&std::nothrow);
  v12 = v6;
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, *(unsigned int *)(a1 + 20));
    *v7 = *(_BYTE *)(a1 + 16);
    std::unique_ptr<unsigned char [0]>::operator=(a2, (const struct std::nothrow_t *)&v12);
    v10 = v12;
    *a3 = *(_DWORD *)(a1 + 20);
    if ( v10 )
      operator delete(v10, v9);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesresponsereportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
