/*
 * XREFs of ?Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z @ 0x180171A78
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800274D4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283CC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     ??R?$default_delete@VSystemButtonProcessor@@@std@@QEBAXPEAVSystemButtonProcessor@@@Z @ 0x1801719D8 (--R-$default_delete@VSystemButtonProcessor@@@std@@QEBAXPEAVSystemButtonProcessor@@@Z.c)
 *     ?Initialize@ComboButtonProcessor@@AEAAJXZ @ 0x180171B8C (-Initialize@ComboButtonProcessor@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ComboButtonProcessor::Create(struct ComboButtonProcessor **a1)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  __int64 v4; // r9
  __int64 v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0LL;
  if ( !a1 )
  {
    v3 = -2147024809;
    v4 = 2147942487LL;
    v5 = 28LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\com"
               "bobuttonprocessor.cpp",
      (const char *)v4);
    goto LABEL_12;
  }
  v6 = RefCountedObject::operator new(0x128uLL);
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x128uLL);
    v7[1] = &RefCountedObject::`vftable';
    *((_DWORD *)v7 + 4) = 1;
    *v7 = &ComboButtonProcessor::`vftable'{for `IContextualProcessor'};
    v7[1] = &ComboButtonProcessor::`vftable'{for `RefCountedObject'};
    v7[3] = 0LL;
    v7[4] = 0LL;
    v7[5] = 0LL;
    v7[6] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  v2 = (__int64)v7;
  if ( !v7 )
  {
    v3 = -2147024882;
    v4 = 2147942414LL;
    v5 = 35LL;
    goto LABEL_10;
  }
  v8 = ComboButtonProcessor::Initialize((ComboButtonProcessor *)v7);
  v3 = v8;
  if ( v8 < 0 )
  {
    v4 = (unsigned int)v8;
    v5 = 38LL;
    goto LABEL_10;
  }
  v2 = 0LL;
  *a1 = (struct ComboButtonProcessor *)v7;
  v3 = 0;
LABEL_12:
  if ( v2 )
    std::default_delete<SystemButtonProcessor>::operator()(v9, v2);
  return v3;
}
