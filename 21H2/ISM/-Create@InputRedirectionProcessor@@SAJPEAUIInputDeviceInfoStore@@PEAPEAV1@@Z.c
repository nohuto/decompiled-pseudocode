/*
 * XREFs of ?Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z @ 0x18002C938
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800272A4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002819C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x18002C694 (-Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionProcessor::Create(
        struct IInputDeviceInfoStore *a1,
        struct InputRedirectionProcessor **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v13; // [rsp+38h] [rbp+10h] BYREF
  void *v14; // [rsp+40h] [rbp+18h]

  v13 = 0LL;
  if ( !a2 )
  {
    v7 = -2147024809;
    v9 = 2147942487LL;
    v10 = 63LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system"
                    "\\lib\\inputredirectionprocessor.cpp",
      (const char *)v9,
      v11);
    goto LABEL_7;
  }
  v4 = RefCountedObject::operator new(0x68uLL);
  v5 = v4;
  v14 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x68uLL);
    v5[3] = &RefCountedObject::`vftable';
    *((_DWORD *)v5 + 8) = 1;
    *v5 = &InputRedirectionProcessor::`vftable'{for `IContextualProcessor'};
    v5[1] = &InputRedirectionProcessor::`vftable'{for `IRemoteInputRedirection'};
    v5[2] = &InputRedirectionProcessor::`vftable'{for `IMessageObjectOwner'};
    v5[3] = &InputRedirectionProcessor::`vftable'{for `RefCountedObject'};
    v5[5] = 0LL;
    v5[6] = 0LL;
    v5[7] = 0LL;
    v5[8] = 0LL;
    v5[10] = 0LL;
    v5[11] = 0LL;
    v5[12] = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  v13 = v5;
  if ( !v5 )
  {
    v7 = -2147024882;
    v9 = 2147942414LL;
    v10 = 70LL;
    goto LABEL_12;
  }
  v6 = InputRedirectionProcessor::Initialize((InputRedirectionProcessor *)v5, a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = (unsigned int)v6;
    v10 = 73LL;
    goto LABEL_12;
  }
  v13 = 0LL;
  *a2 = (struct InputRedirectionProcessor *)v5;
  v7 = 0;
LABEL_7:
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v13);
  return v7;
}
