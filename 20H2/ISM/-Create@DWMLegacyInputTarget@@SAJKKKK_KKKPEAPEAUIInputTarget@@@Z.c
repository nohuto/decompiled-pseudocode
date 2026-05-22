/*
 * XREFs of ?Create@DWMLegacyInputTarget@@SAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x180018500
 * Callers:
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x180018430 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283FC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DWMLegacyInputTarget::Create(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        struct IInputTarget **a8)
{
  _DWORD *v12; // rax
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a8 )
  {
    *a8 = 0LL;
    v12 = RefCountedObject::operator new(0x48uLL);
    if ( v12 )
    {
      v12[10] = a1;
      *((_QWORD *)v12 + 3) = &RefCountedObject::`vftable';
      *(_QWORD *)v12 = &DWMLegacyInputTarget::`vftable'{for `IInputTarget'};
      *((_QWORD *)v12 + 1) = &DWMLegacyInputTarget::`vftable'{for `IInputTarget2'};
      *((_QWORD *)v12 + 2) = &DWMLegacyInputTarget::`vftable'{for `IFocusInputTarget'};
      *((_QWORD *)v12 + 3) = &DWMLegacyInputTarget::`vftable'{for `RefCountedObject'};
      *((_QWORD *)v12 + 7) = a5;
      v12[16] = a6;
      v12[17] = a7;
      v12[8] = 1;
      v12[11] = a2;
      v12[12] = a3;
      v12[13] = a4;
      *a8 = (struct IInputTarget *)v12;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmlegacyinputtarget.cpp",
        (const char *)0x8007000ELL,
        v14);
      return 2147942414LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmlegacyinputtarget.cpp",
      (const char *)0x80004003LL,
      v14);
    return 2147500035LL;
  }
}
