/*
 * XREFs of ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KKK_KKKPEAPEAU2@@Z @ 0x1800282B4
 * Callers:
 *     ?OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z @ 0x1800148C0 (-OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x180018400 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800B85B0 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ??0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KKK_KKK@Z @ 0x1800280F4 (--0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KKK_KKK@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002836C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMFocusedInputTarget::Create(
        struct IInputTarget *a1,
        int a2,
        int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        struct IInputTarget **a8)
{
  DWMFocusedInputTarget *v12; // rax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  unsigned int v16; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a8 )
  {
    *a8 = 0LL;
    v12 = (DWMFocusedInputTarget *)RefCountedObject::operator new(0x68uLL);
    if ( v12 )
      v12 = DWMFocusedInputTarget::DWMFocusedInputTarget(v12, a1, a2, a3, a4, a5, a6, a7);
    if ( v12 )
    {
      *a8 = v12;
      return 0LL;
    }
    v14 = -2147024882;
    v15 = 89LL;
  }
  else
  {
    v14 = -2147467261;
    v15 = 73LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmfocusedinputtarget.cpp",
    (const char *)v14,
    v16);
  return v14;
}
