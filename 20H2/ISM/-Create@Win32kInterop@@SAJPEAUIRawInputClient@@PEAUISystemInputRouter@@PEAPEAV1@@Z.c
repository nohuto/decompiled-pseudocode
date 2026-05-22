/*
 * XREFs of ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x180021DEC
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18001F258 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ??0Win32kInterop@@QEAA@XZ @ 0x1800235DC (--0Win32kInterop@@QEAA@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283FC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x18002D47C (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32kInterop::Create(
        struct IRawInputClient *a1,
        struct ISystemInputRouter *a2,
        struct Win32kInterop **a3)
{
  Win32kInterop *v6; // rbx
  Win32kInterop *v7; // rax
  int v8; // eax
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 )
  {
    v10 = 116LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)0x80070057LL,
      v11);
    return 2147942487LL;
  }
  if ( !a2 )
  {
    v10 = 117LL;
    goto LABEL_14;
  }
  if ( !a3 )
  {
    v10 = 118LL;
    goto LABEL_14;
  }
  v6 = Win32kInterop::s_pInterop;
  if ( !Win32kInterop::s_pInterop )
  {
    v7 = (Win32kInterop *)RefCountedObject::operator new(0x668uLL);
    if ( v7 )
      v6 = Win32kInterop::Win32kInterop(v7);
    else
      v6 = 0LL;
    if ( !v6 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x7E,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)0x8007000ELL,
        v11);
      __debugbreak();
    }
    v8 = Win32kInterop::Initialize(v6, a1, a2);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x81,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v8,
        v11);
      __debugbreak();
    }
    Win32kInterop::s_pInterop = v6;
  }
  *a3 = v6;
  return 0LL;
}
