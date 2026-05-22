/*
 * XREFs of _lambda_3ea8e1ac958ff1e75d916de58c44b505_::operator() @ 0x1800A438C
 * Callers:
 *     wil::init_once_nothrow__lambda_3ea8e1ac958ff1e75d916de58c44b505___ @ 0x1800A42D4 (wil--init_once_nothrow__lambda_3ea8e1ac958ff1e75d916de58c44b505___.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283FC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 lambda_3ea8e1ac958ff1e75d916de58c44b505_::operator()()
{
  _QWORD *v0; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  qword_180208910 = 0LL;
  v0 = RefCountedObject::operator new(0x10uLL);
  if ( v0 )
  {
    v0[1] = 0LL;
    *v0 = &RefCountedObject::`vftable';
    *v0 = &LampArrayTelemetry::`vftable';
    *((_DWORD *)v0 + 2) = 1;
    qword_180208910 = (RefCountedObject *)v0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraytelemetry.cpp",
      (const char *)0x8007000ELL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraytelemetry.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
