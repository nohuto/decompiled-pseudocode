/*
 * XREFs of ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSectionBase@@III@Z @ 0x180204EEC
 * Callers:
 *     ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z @ 0x180204DF8 (-Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x180038464 (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CSharedCircularQueue@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@_N@Z @ 0x1801C772C (-Create@CSharedCircularQueue@@SAJV-$span@E$0-0@gsl@@IPEAPEAV1@_N@Z.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x1801CB744 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 */

__int64 __fastcall CGenericInkTipPointSource::Initialize(
        CGenericInkTipPointSource *this,
        struct CSharedSectionBase *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  void *v9; // rcx
  __int64 v10; // r8
  __int64 result; // rax
  int v12; // edi
  void *v13; // rcx
  int v14[2]; // [rsp+20h] [rbp-38h] BYREF
  void *v15; // [rsp+28h] [rbp-30h]
  void **v16; // [rsp+30h] [rbp-28h]
  volatile __int32 **v17; // [rsp+38h] [rbp-20h] BYREF
  char v18; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = CSharedSectionBase::ResolveAllocation(a2, a3, a4);
  if ( v9 )
  {
    v17 = 0LL;
    *(_QWORD *)v14 = v10;
    v15 = v9;
    v16 = (void **)((char *)this + 24);
    v18 = 1;
    v12 = CSharedCircularQueue::Create((unsigned int *)v14, a5, &v17, 0);
    if ( v18 )
    {
      v13 = *v16;
      *v16 = v17;
      if ( v13 )
        operator delete(v13);
    }
    if ( v12 >= 0 )
    {
      Microsoft::WRL::ComPtr<CConditionalExpression>::operator=((__int64 *)this + 2, (__int64)a2);
      result = 0LL;
      *((_DWORD *)this + 8) = a3;
      *((_DWORD *)this + 9) = a4;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericinktippointsource.cpp",
        (const char *)(unsigned int)v12);
      return (unsigned int)v12;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericinktippointsource.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
