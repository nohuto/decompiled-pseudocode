/*
 * XREFs of ?Create@InputServiceProcessor@@SAJPEAPEAV1@@Z @ 0x180039FA8
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800272A4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002819C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsPreloadKeyboardLayoutsPresent @ 0x18003D738 (IsPreloadKeyboardLayoutsPresent.c)
 */

__int64 __fastcall InputServiceProcessor::Create(struct InputServiceProcessor **a1)
{
  struct InputServiceProcessor *v2; // rax
  struct InputServiceProcessor *v3; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 )
  {
    v5 = -2147024809;
    v6 = 45LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputservice\\system\\lib\\in"
               "putserviceprocessor.cpp",
      (const char *)v5);
    return v5;
  }
  v2 = (struct InputServiceProcessor *)RefCountedObject::operator new(0x18uLL);
  v3 = v2;
  if ( v2 )
  {
    *(_QWORD *)v2 = 0LL;
    *((_QWORD *)v2 + 2) = 0LL;
    *((_QWORD *)v2 + 1) = &RefCountedObject::`vftable';
    *(_QWORD *)v2 = &InputServiceProcessor::`vftable'{for `IContextualProcessor'};
    *((_QWORD *)v2 + 1) = &InputServiceProcessor::`vftable'{for `RefCountedObject'};
    *((_DWORD *)v2 + 4) = 1;
  }
  else
  {
    v3 = 0LL;
  }
  if ( !v3 )
  {
    v5 = -2147024882;
    v6 = 48LL;
    goto LABEL_11;
  }
  if ( (unsigned __int8)IsPreloadKeyboardLayoutsPresent() )
    PreloadKeyboardLayouts();
  *a1 = v3;
  return 0LL;
}
