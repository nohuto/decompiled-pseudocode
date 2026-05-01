/*
 * XREFs of ??$MakeAndInitialize@VViewHostItemPropertyChangedArgs@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAVViewHostItemPropertyChangedArgs@@AEAY0BC@$$CBG@Z @ 0x18021A370
 * Callers:
 *     ?_RaiseFrameworkViewTypeChanged@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180222B50 (-_RaiseFrameworkViewTypeChanged@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4FRAMEWORK_VI.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000FAAC (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x18007F74C (-InternalRelease@-$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18008550C (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18011C540 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0ViewHostItemPropertyChangedArgs@@QEAA@XZ @ 0x18021BE68 (--0ViewHostItemPropertyChangedArgs@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewHostItemPropertyChangedArgs,ViewHostItemPropertyChangedArgs,unsigned short const (&)[18]>(
        ViewHostItemPropertyChangedArgs **a1,
        const wchar_t *a2)
{
  ViewHostItemPropertyChangedArgs *v4; // rax
  unsigned int v5; // ebx
  ViewHostItemPropertyChangedArgs *v6; // rax
  ViewHostItemPropertyChangedArgs *v7; // rdi
  int v8; // eax
  volatile int *v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const wchar_t *v14; // [rsp+40h] [rbp+8h] BYREF
  ViewHostItemPropertyChangedArgs *v15; // [rsp+50h] [rbp+18h] BYREF
  ViewHostItemPropertyChangedArgs *v16; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = (ViewHostItemPropertyChangedArgs *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v4;
  if ( v4 )
  {
    v6 = ViewHostItemPropertyChangedArgs::ViewHostItemPropertyChangedArgs(v4);
    v15 = v6;
    v7 = v6;
    v14 = a2;
    *((_DWORD *)v6 + 12) = 5;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v6 + 7, 0LL);
    v8 = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(
           (ViewHostItemPropertyChangedArgs *)((char *)v7 + 96),
           &v14);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v10 = *((_QWORD *)v7 + 11);
      while ( v10 >= 0 )
      {
        if ( (_DWORD)v10 != 0x7FFFFFFF )
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 11, v10 + 1, v10);
          if ( v11 != v10 )
            continue;
        }
        goto LABEL_11;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v10 + 16), v9);
LABEL_11:
      *a1 = v7;
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease((__int64 *)&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
