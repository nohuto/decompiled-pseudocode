/*
 * XREFs of ?Create@RawButtonProcessor@@SAJPEAPEAV1@@Z @ 0x180181EB4
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180027504 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283FC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     ??R?$default_delete@VSystemButtonProcessor@@@std@@QEBAXPEAVSystemButtonProcessor@@@Z @ 0x180171948 (--R-$default_delete@VSystemButtonProcessor@@@std@@QEBAXPEAVSystemButtonProcessor@@@Z.c)
 *     ?Initialize@RawButtonProcessor@@AEAAJXZ @ 0x1801821D4 (-Initialize@RawButtonProcessor@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RawButtonProcessor::Create(struct RawButtonProcessor **a1)
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
    v5 = 33LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\rawshellbutton\\system\\lib\\"
               "rawbuttonprocessor.cpp",
      (const char *)v4);
    goto LABEL_12;
  }
  v6 = RefCountedObject::operator new(0x158uLL);
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x158uLL);
    v7[1] = &RefCountedObject::`vftable';
    *((_DWORD *)v7 + 4) = 1;
    *v7 = &RawButtonProcessor::`vftable'{for `IContextualProcessor'};
    v7[1] = &RawButtonProcessor::`vftable'{for `RefCountedObject'};
    v7[3] = 0LL;
    v7[4] = 0LL;
    v7[5] = 0LL;
    *((_OWORD *)v7 + 18) = 0LL;
    *((_OWORD *)v7 + 19) = 0LL;
    v7[40] = 0LL;
    v7[41] = &RawButtonProcessor::PrivateMessageSession::`vftable';
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
    v5 = 40LL;
    goto LABEL_10;
  }
  v8 = RawButtonProcessor::Initialize((RawButtonProcessor *)v7);
  v3 = v8;
  if ( v8 < 0 )
  {
    v4 = (unsigned int)v8;
    v5 = 43LL;
    goto LABEL_10;
  }
  v2 = 0LL;
  *a1 = (struct RawButtonProcessor *)v7;
  v3 = 0;
LABEL_12:
  if ( v2 )
    std::default_delete<SystemButtonProcessor>::operator()(v9, v2);
  return v3;
}
