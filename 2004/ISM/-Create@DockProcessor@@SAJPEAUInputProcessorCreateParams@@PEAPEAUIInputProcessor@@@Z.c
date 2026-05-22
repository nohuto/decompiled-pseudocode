/*
 * XREFs of ?Create@DockProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180187FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283CC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$default_delete@VDockProcessor@@@std@@QEBAXPEAVDockProcessor@@@Z @ 0x180187F38 (--R-$default_delete@VDockProcessor@@@std@@QEBAXPEAVDockProcessor@@@Z.c)
 *     ?Initialize@DockProcessor@@IEAAJXZ @ 0x1801880D8 (-Initialize@DockProcessor@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DockProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // esi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = RefCountedObject::operator new(0x50uLL);
  if ( v4 )
  {
    v5 = *((_QWORD *)a1 + 1);
    v6 = *(_QWORD *)a1;
    v4[2] = &RefCountedObject::`vftable';
    *((_DWORD *)v4 + 6) = 1;
    v4[6] = 0LL;
    v4[7] = 0LL;
    *((_BYTE *)v4 + 64) = 0;
    v4[5] = v6;
    v4[4] = v5;
    *v4 = &DockProcessor::`vftable'{for `IInputProcessor'};
    v4[1] = &DockProcessor::`vftable'{for `IInputFocusListener'};
    v4[2] = &DockProcessor::`vftable'{for `RefCountedObject'};
    v4[9] = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  v7 = (__int64)v4;
  v8 = DockProcessor::Initialize((DockProcessor *)v4);
  v10 = v8;
  if ( v8 >= 0 )
  {
    v7 = 0LL;
    *a2 = (struct IInputProcessor *)v4;
    v10 = 0;
    v4 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\lib\\dockprocessor.cpp",
      (const char *)(unsigned int)v8);
  }
  if ( v4 )
    std::default_delete<DockProcessor>::operator()(v9, v7);
  return v10;
}
