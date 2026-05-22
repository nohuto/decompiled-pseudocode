/*
 * XREFs of ?Create@SystemButtonProcessor@@SAJPEAPEAV1@@Z @ 0x18003984C
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180027474 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002836C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$default_delete@VSystemButtonProcessor@@@std@@QEBAXPEAVSystemButtonProcessor@@@Z @ 0x180171E98 (--R-$default_delete@VSystemButtonProcessor@@@std@@QEBAXPEAVSystemButtonProcessor@@@Z.c)
 */

__int64 __fastcall SystemButtonProcessor::Create(struct SystemButtonProcessor **a1)
{
  struct SystemButtonProcessor *v2; // rax
  struct SystemButtonProcessor *v3; // rdi
  unsigned int v4; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 )
  {
    v2 = (struct SystemButtonProcessor *)RefCountedObject::operator new(0x20uLL);
    v3 = v2;
    if ( v2 )
    {
      *(_QWORD *)v2 = 0LL;
      *((_QWORD *)v2 + 2) = 0LL;
      *((_QWORD *)v2 + 3) = 0LL;
      *((_QWORD *)v2 + 3) = 0LL;
      *((_QWORD *)v2 + 1) = &RefCountedObject::`vftable';
      *(_QWORD *)v2 = &SystemButtonProcessor::`vftable'{for `IContextualProcessor'};
      *((_QWORD *)v2 + 1) = &SystemButtonProcessor::`vftable'{for `RefCountedObject'};
      *((_DWORD *)v2 + 4) = 1;
    }
    else
    {
      v3 = 0LL;
    }
    if ( v3 )
    {
      *a1 = v3;
      return 0;
    }
    else
    {
      v4 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\systembutton\\system\\lib\\"
                 "systembuttonprocessor.cpp",
        (const char *)0x8007000ELL);
    }
  }
  else
  {
    v4 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\systembutton\\system\\lib\\sy"
               "stembuttonprocessor.cpp",
      (const char *)0x80070057LL);
  }
  return v4;
}
