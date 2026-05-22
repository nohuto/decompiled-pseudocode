/*
 * XREFs of ?Create@InputDestTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z @ 0x18013A41C
 * Callers:
 *     ?GetTargetFromInputDest@DWMInputRouter@@UEAAJAEBUtagINPUTDEST@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x180138200 (-GetTargetFromInputDest@DWMInputRouter@@UEAAJAEBUtagINPUTDEST@@PEAUIInputTarget@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D2E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??0InputDestTarget@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x18013A294 (--0InputDestTarget@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 */

__int64 __fastcall InputDestTarget::Create(const struct tagINPUTDEST *a1, struct IInputTarget **a2)
{
  unsigned int v2; // ebx
  InputDestTarget *v5; // rax
  InputDestTarget *v6; // rax
  InputDestTarget *v7; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  *a2 = 0LL;
  v5 = (InputDestTarget *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 && (v6 = InputDestTarget::InputDestTarget(v5, a1), (v7 = v6) != 0LL) )
  {
    (**(void (__fastcall ***)(InputDestTarget *, GUID *, struct IInputTarget **))v6)(
      v6,
      &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
      a2);
    (*(void (__fastcall **)(InputDestTarget *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    v2 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\inputdesttarget.cpp",
      (const char *)0x8007000ELL);
  }
  return v2;
}
