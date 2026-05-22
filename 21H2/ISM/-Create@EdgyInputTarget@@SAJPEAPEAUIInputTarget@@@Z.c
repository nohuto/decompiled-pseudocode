/*
 * XREFs of ?Create@EdgyInputTarget@@SAJPEAPEAUIInputTarget@@@Z @ 0x18017BA28
 * Callers:
 *     ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x18017BB70 (-EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002819C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall EdgyInputTarget::Create(struct IInputTarget **a1)
{
  _DWORD *v2; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = RefCountedObject::operator new(0x28uLL);
  if ( v2 )
  {
    v2[8] = 0;
    *((_QWORD *)v2 + 2) = &RefCountedObject::`vftable';
    *(_QWORD *)v2 = &EdgyInputTarget::`vftable'{for `IInputTarget'};
    *((_QWORD *)v2 + 1) = &EdgyInputTarget::`vftable'{for `IDCompInputTarget'};
    *((_QWORD *)v2 + 2) = &EdgyInputTarget::`vftable'{for `RefCountedObject'};
    v2[6] = 1;
    *a1 = (struct IInputTarget *)v2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
